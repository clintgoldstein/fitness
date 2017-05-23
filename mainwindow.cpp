#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include "stdio.h"
#include <iostream>
#include <fstream>
#include <QLabel>

#include "MathFunctions.h"

using namespace std;
//END ADDED


int first_time=1;
QString userName;

//ADDED THESE
int age;
int hghtFeet;
double weight;
double hghtInches;
double hght;  //"height" throws an error
char gender;
int activityLevel;
int calories;
int goal;
int meal;
int undo;
QString settings;
QString cals;
bool editing=false;
//END ADDED


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QString path=QCoreApplication::applicationDirPath();
    settings=path.append("/settings.txt");
    path=QCoreApplication::applicationDirPath();
    cals=path.append("/calories.txt");
    //to do read memory file
    populate_variables();

    ui->help_info_tab->setCurrentIndex(0);
    if(first_time==1)
        ui->dashboard_stack->setCurrentIndex(1);
    else
    {
        get_calories();

        //ADDED THIS
        double hght = mathfunctions::totalHeight(hghtFeet, hghtInches);
        //END ADDED

        double bmiResult = mathfunctions::bmiCalculation(weight, hght);
        ui->DisplayBMI->setPlainText(QString::number(bmiResult, 'f', 2)); //floating point

        double bmrResult = mathfunctions::bmrCalculation(weight, hght, age, gender);
        ui->DisplayBMR->setPlainText(QString::number(bmrResult, 'f', 2)); //floating point

        double amrResult = mathfunctions::amrCalculation(bmrResult, activityLevel);
        ui->DisplayAMR->setPlainText(QString::number(amrResult, 'f', 2)); //floating point

        //switch statement
        goal=bmrResult;

         ui->dashboard_stack->setCurrentIndex(5);
         ui->progressBar->setMaximum(bmrResult);
         ui->progressBar->setValue(calories);
         ui->calories_left->display(goal-calories);
    }
    ui->inside_dashboard_stack->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_next_page_2_clicked()
{
    //save age weight height

    //turn page
     ui->dashboard_stack->setCurrentIndex(3);
}

void MainWindow::on_next_page_1_clicked()
{
    //turn page
    ui->dashboard_stack->setCurrentIndex(2);
}

void MainWindow::on_back_button_page_2_clicked()
{
    //to do clear data entered

    //go back a page
    ui->dashboard_stack->setCurrentIndex(1);
}

void MainWindow::on_next_button_page_3_clicked()
{
    //to do save activity level
    ui->dashboard_stack->setCurrentIndex(4);

//    double hght = mathfunctions::totalHeight(hghtFeet, hghtInches);

//    double bmiResult = mathfunctions::bmiCalculation(weight, hght);
//    ui->DisplayBMI->setPlainText(QString::number(bmiResult, 'f', 2)); //floating point

//    double bmrResult = mathfunctions::bmrCalculation(weight, hght, age, gender);
//    ui->DisplayBMR->setPlainText(QString::number(bmrResult, 'f', 2)); //floating point

//    double amrResult = mathfunctions::amrCalculation(bmrResult, activityLevel);
//    ui->DisplayAMR->setPlainText(QString::number(amrResult, 'f', 2)); //floating point


}

void MainWindow::on_back_button_page_3_clicked()
{
    ui->dashboard_stack->setCurrentIndex(2);

}

//THIS BUTTON GOES TO FINAL DASHBOARD PAGE, DISPLAYS BMI, BMR, AMR
void MainWindow::on_next_button_page_4_clicked()
{
    double hght = mathfunctions::totalHeight(hghtFeet, hghtInches);

    save_profile();

    if(editing==false){
    calories=0;
    set_calories(calories);
    }

    ui->dashboard_stack->setCurrentIndex(0);



    double bmiResult = mathfunctions::bmiCalculation(weight, hght);
    ui->DisplayBMI->setPlainText(QString::number(bmiResult, 'f', 2)); //floating point

    double bmrResult = mathfunctions::bmrCalculation(weight, hght, age, gender);
    ui->DisplayBMR->setPlainText(QString::number(bmrResult, 'f', 2)); //floating point

    double amrResult = mathfunctions::amrCalculation(bmrResult, activityLevel);
    ui->DisplayAMR->setPlainText(QString::number(amrResult, 'f', 2)); //floating point

    //switch statement
    goal=bmrResult;
    ui->progressBar->setMaximum(bmrResult);
    ui->calories_left->display(goal-calories);
    ui->progressBar->setValue(calories);
    editing=false;

}

void MainWindow::on_back_button_page_4_clicked()
{
    ui->dashboard_stack->setCurrentIndex(3);
}


void MainWindow::on_add_meal_2_clicked()
{
   ui->inside_dashboard_stack->setCurrentIndex(1);
}

void MainWindow::on_add_exercise_2_clicked()
{
    ui->inside_dashboard_stack->setCurrentIndex(2);

}

void MainWindow::on_buttonBox_addmeal_accepted()
{
    //to do updatecalorie count
    undo=calories;
    calories=calories+meal;
    set_calories(calories);
    meal=0;

    ui->progressBar->setValue(calories);
    ui->calories_left->display(goal-calories);
    ui->inside_dashboard_stack->setCurrentIndex(0);
}

void MainWindow::on_buttonBox_addmeal_rejected()
{
    ui->inside_dashboard_stack->setCurrentIndex(0);
}

void MainWindow::on_buttonBox_addexorcise_accepted()
{
    //to do subtract exersize from calorie count
    undo=calories;
    calories=calories+meal;
    set_calories(calories);
    meal=0;

    ui->progressBar->setValue(calories);
    ui->calories_left->display(goal-calories);
    ui->inside_dashboard_stack->setCurrentIndex(0);

}

void MainWindow::on_buttonBox_addexorcise_rejected()
{
    ui->inside_dashboard_stack->setCurrentIndex(0);
}

//ADDED THESE

void MainWindow::on_InputAgeSpinBox_valueChanged(int arg1)
{
    age = arg1;
}

void MainWindow::on_InputWeightSpinBox_valueChanged(double arg1)
{
    weight = arg1;
}

void MainWindow::on_InputInchesSpinBox_valueChanged(double arg1)
{
    hghtInches = arg1;
}

void MainWindow::on_InputFeetSpinBox_valueChanged(int arg1)
{
    hghtFeet = arg1;
}

void MainWindow::on_FemaleRadioButton_clicked()
{
    gender = 'f';
}

void MainWindow::on_MaleRadioButton_clicked()
{
    gender = 'm';
}

void MainWindow::on_radio_activity_1_clicked()
{
    activityLevel = 1;
}

void MainWindow::on_radio_activity_2_clicked()
{
    activityLevel = 2;
}

void MainWindow::on_radio_activity_3_clicked()
{
    activityLevel = 3;
}

void MainWindow::on_radio_activity_4_clicked()
{
    activityLevel = 4;
}

void MainWindow::on_radio_activity_5_clicked()
{
    activityLevel = 5;
}

void MainWindow::on_InputUserName_textChanged(const QString arg1)
{
    userName = arg1;
}

void MainWindow::populate_variables()
{


    ifstream infile(settings.toStdString());
        if (infile.good() == false) {
            cout<<"populate variables can't open file"<<endl;
        }
        //get and check parameters
        infile>>first_time;

        //ui->debug->setPlainText(QString::number(first_time, 'f', 2));
        if(first_time==0)
        {
        infile>>age;
        infile>>weight;
        infile>>hghtFeet;
        infile>>hghtInches;
        infile>>gender;
        infile>>activityLevel;
        infile.close();
        }

}

void MainWindow::save_profile()
{
    int notFirstTime=0;

    ofstream outFile;
    outFile.open(settings.toStdString());

            if (outFile.is_open() != true) {
                cout<<"save profile error";
                ;
            }
            outFile<<notFirstTime<<endl;
            outFile<<age<<endl;
            outFile<<weight<<endl;
            outFile<<hghtFeet<<endl;
            outFile<<hghtInches<<endl;
            outFile<<gender<<endl;
            outFile<<activityLevel<<endl;

            outFile.close();

}


void MainWindow::on_WhiteBackgroundButton_clicked()
{
    ui->help_info_tab->setStyleSheet("background: #FFFFFF");
}

void MainWindow::on_DefaultBackgroundButton_clicked()
{
    ui->help_info_tab->setStyleSheet("");
}

void MainWindow::on_Size13FontButton_clicked()
{
    QFont newFont13(".SF NS Text", 13);
    QApplication::setFont(newFont13);
}

void MainWindow::on_Size18FontButton_clicked()
{
    QFont newFont18(".SF NS Text", 18);
    QApplication::setFont(newFont18);
}


void MainWindow::get_calories()
{
    ifstream infile(cals.toStdString());
        if (infile.good() == false) {
            cout << "get, Unable to open the file 'calories' ";
        }
        //get and check parameters
        infile>>calories;

        infile.close();


}

void MainWindow::set_calories(int ad)
{
    ofstream outFile;
    outFile.open(cals.toStdString());
    if (outFile.good() == false) {
        cout << "set, Unable to open the file 'calories' ";
    }
    outFile<<ad;

    outFile.close();

}



void MainWindow::on_resetAccountButton_clicked()
{
    ofstream outFile;
    outFile.open(settings.toStdString());
    string blank="";
    outFile<<blank<<endl;
    outFile<<blank<<endl;
    outFile<<blank<<endl;
    outFile<<blank<<endl;
    outFile<<blank<<endl;
    outFile<<blank<<endl;

    outFile.close();
    ui->help_info_tab->setCurrentIndex(0);
    ui->dashboard_stack->setCurrentIndex(1);
    ui->inside_dashboard_stack->setCurrentIndex(0);

}

//added calories in exorcise box
void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    meal=0-arg1;
}

//add calories in meal spin box
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    meal=arg1;
}

void MainWindow::on_new_Day_Button_clicked()
{
    undo=calories;
    calories=0;
    set_calories(calories);
    ui->progressBar->setValue(calories);
    ui->calories_left->display(goal-calories);

}

void MainWindow::on_undo_Button_clicked()
{
    calories=undo;
    set_calories(calories);
    ui->progressBar->setValue(calories);
    ui->calories_left->display(goal-calories);
}

void MainWindow::on_editButton_clicked()
{
    editing=true;
    ui->help_info_tab->setCurrentIndex(0);
    ui->dashboard_stack->setCurrentIndex(2);
    ui->inside_dashboard_stack->setCurrentIndex(0);

}
