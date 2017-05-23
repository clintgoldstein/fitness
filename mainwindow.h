#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_next_page_2_clicked();

    void on_next_page_1_clicked();

    void on_back_button_page_2_clicked();

    void on_next_button_page_3_clicked();

    void on_back_button_page_3_clicked();

    void on_next_button_page_4_clicked();

    void on_back_button_page_4_clicked();


    void on_add_meal_2_clicked();

    void on_add_exercise_2_clicked();

    void on_buttonBox_addmeal_accepted();

    void on_buttonBox_addmeal_rejected();

    void on_buttonBox_addexorcise_accepted();

    void on_buttonBox_addexorcise_rejected();

    void on_InputAgeSpinBox_valueChanged(int arg1);

    void on_InputWeightSpinBox_valueChanged(double arg1);

    void on_InputInchesSpinBox_valueChanged(double arg1);

    void on_InputFeetSpinBox_valueChanged(int arg1);

    void on_FemaleRadioButton_clicked();

    void on_MaleRadioButton_clicked();

    void on_radio_activity_1_clicked();

    void on_radio_activity_2_clicked();

    void on_radio_activity_3_clicked();

    void on_radio_activity_4_clicked();

    void on_radio_activity_5_clicked();

    void on_InputUserName_textChanged(const QString arg1);

    void populate_variables();

    void save_profile();

    void on_WhiteBackgroundButton_clicked();

    void on_DefaultBackgroundButton_clicked();

    void on_Size13FontButton_clicked();

    void on_Size18FontButton_clicked();

    void get_calories();

    void set_calories(int ad);

    void on_resetAccountButton_clicked();

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_new_Day_Button_clicked();

    void on_undo_Button_clicked();

    void on_editButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
