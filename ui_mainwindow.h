/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *help_info_tab;
    QWidget *Dasboard;
    QStackedWidget *dashboard_stack;
    QWidget *Show_info;
    QStackedWidget *inside_dashboard_stack;
    QWidget *info_display_2;
    QPushButton *add_meal_2;
    QPushButton *add_exercise_2;
    QPushButton *undo_Button;
    QWidget *add_meal;
    QLabel *label_21;
    QDialogButtonBox *buttonBox_addmeal;
    QSpinBox *spinBox;
    QWidget *add_exercise;
    QLabel *label_19;
    QDialogButtonBox *buttonBox_addexorcise;
    QSpinBox *spinBox_2;
    QProgressBar *progressBar;
    QLCDNumber *calories_left;
    QLabel *label_4;
    QPushButton *new_Day_Button;
    QLabel *label_15;
    QWidget *Get_name;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *InputUserName;
    QPushButton *next_page_1;
    QWidget *get_info;
    QLabel *label_5;
    QGroupBox *groupBox;
    QRadioButton *FemaleRadioButton;
    QRadioButton *MaleRadioButton;
    QSpinBox *InputAgeSpinBox;
    QDoubleSpinBox *InputWeightSpinBox;
    QDoubleSpinBox *InputInchesSpinBox;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *next_page_2;
    QPushButton *back_button_page_2;
    QSpinBox *InputFeetSpinBox;
    QWidget *get_activity;
    QGroupBox *groupBox_3;
    QRadioButton *radio_activity_1;
    QRadioButton *radio_activity_2;
    QRadioButton *radio_activity_3;
    QRadioButton *radio_activity_4;
    QRadioButton *radio_activity_5;
    QPushButton *next_button_page_3;
    QPushButton *back_button_page_3;
    QWidget *get_goal;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QLabel *label_14;
    QPushButton *next_button_page_4;
    QPushButton *back_button_page_4;
    QLabel *label;
    QLabel *label_8;
    QWidget *Exercise;
    QGroupBox *groupBox_2;
    QTextBrowser *DisplayBMI;
    QLabel *label_16;
    QLabel *label_11;
    QGroupBox *groupBox_8;
    QTextBrowser *DisplayBMR;
    QLabel *label_18;
    QLabel *label_10;
    QGroupBox *groupBox_9;
    QLabel *label_17;
    QTextBrowser *DisplayAMR;
    QLabel *label_9;
    QWidget *Settings;
    QLabel *label_7;
    QGroupBox *groupBox_6;
    QPushButton *DefaultBackgroundButton;
    QPushButton *WhiteBackgroundButton;
    QPushButton *resetAccountButton;
    QGroupBox *groupBox_7;
    QPushButton *Size13FontButton;
    QPushButton *Size18FontButton;
    QPushButton *editButton;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_24;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 539);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        help_info_tab = new QTabWidget(centralWidget);
        help_info_tab->setObjectName(QStringLiteral("help_info_tab"));
        help_info_tab->setGeometry(QRect(0, 0, 401, 521));
        help_info_tab->setAutoFillBackground(true);
        Dasboard = new QWidget();
        Dasboard->setObjectName(QStringLiteral("Dasboard"));
        dashboard_stack = new QStackedWidget(Dasboard);
        dashboard_stack->setObjectName(QStringLiteral("dashboard_stack"));
        dashboard_stack->setGeometry(QRect(0, 90, 391, 371));
        Show_info = new QWidget();
        Show_info->setObjectName(QStringLiteral("Show_info"));
        inside_dashboard_stack = new QStackedWidget(Show_info);
        inside_dashboard_stack->setObjectName(QStringLiteral("inside_dashboard_stack"));
        inside_dashboard_stack->setGeometry(QRect(29, 180, 331, 201));
        info_display_2 = new QWidget();
        info_display_2->setObjectName(QStringLiteral("info_display_2"));
        add_meal_2 = new QPushButton(info_display_2);
        add_meal_2->setObjectName(QStringLiteral("add_meal_2"));
        add_meal_2->setGeometry(QRect(10, 60, 141, 51));
        add_meal_2->setAutoDefault(false);
        add_meal_2->setFlat(false);
        add_exercise_2 = new QPushButton(info_display_2);
        add_exercise_2->setObjectName(QStringLiteral("add_exercise_2"));
        add_exercise_2->setGeometry(QRect(190, 60, 141, 51));
        add_exercise_2->setFlat(false);
        undo_Button = new QPushButton(info_display_2);
        undo_Button->setObjectName(QStringLiteral("undo_Button"));
        undo_Button->setGeometry(QRect(110, 140, 131, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix_icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_Button->setIcon(icon);
        undo_Button->setFlat(true);
        inside_dashboard_stack->addWidget(info_display_2);
        add_meal = new QWidget();
        add_meal->setObjectName(QStringLiteral("add_meal"));
        label_21 = new QLabel(add_meal);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(60, 30, 231, 16));
        buttonBox_addmeal = new QDialogButtonBox(add_meal);
        buttonBox_addmeal->setObjectName(QStringLiteral("buttonBox_addmeal"));
        buttonBox_addmeal->setGeometry(QRect(90, 110, 164, 32));
        buttonBox_addmeal->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(add_meal);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setEnabled(true);
        spinBox->setGeometry(QRect(100, 70, 151, 24));
        spinBox->setMaximum(9999);
        inside_dashboard_stack->addWidget(add_meal);
        add_exercise = new QWidget();
        add_exercise->setObjectName(QStringLiteral("add_exercise"));
        label_19 = new QLabel(add_exercise);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 30, 221, 16));
        label_19->setAlignment(Qt::AlignCenter);
        buttonBox_addexorcise = new QDialogButtonBox(add_exercise);
        buttonBox_addexorcise->setObjectName(QStringLiteral("buttonBox_addexorcise"));
        buttonBox_addexorcise->setGeometry(QRect(90, 110, 164, 32));
        buttonBox_addexorcise->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox_2 = new QSpinBox(add_exercise);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setEnabled(true);
        spinBox_2->setGeometry(QRect(100, 70, 151, 24));
        spinBox_2->setWrapping(true);
        spinBox_2->setFrame(true);
        spinBox_2->setMaximum(9999);
        inside_dashboard_stack->addWidget(add_exercise);
        progressBar = new QProgressBar(Show_info);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(37, 90, 341, 34));
        progressBar->setMinimumSize(QSize(341, 34));
        progressBar->setMaximum(98);
        progressBar->setValue(24);
        calories_left = new QLCDNumber(Show_info);
        calories_left->setObjectName(QStringLiteral("calories_left"));
        calories_left->setGeometry(QRect(70, 50, 121, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        calories_left->setFont(font);
        calories_left->setFrameShape(QFrame::NoFrame);
        calories_left->setSmallDecimalPoint(false);
        calories_left->setMode(QLCDNumber::Dec);
        calories_left->setSegmentStyle(QLCDNumber::Flat);
        label_4 = new QLabel(Show_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 60, 171, 31));
        new_Day_Button = new QPushButton(Show_info);
        new_Day_Button->setObjectName(QStringLiteral("new_Day_Button"));
        new_Day_Button->setGeometry(QRect(150, 110, 111, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix_icons/clock.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_Day_Button->setIcon(icon1);
        new_Day_Button->setIconSize(QSize(32, 32));
        new_Day_Button->setFlat(true);
        label_15 = new QLabel(Show_info);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(170, 160, 71, 21));
        label_15->setAlignment(Qt::AlignCenter);
        dashboard_stack->addWidget(Show_info);
        Get_name = new QWidget();
        Get_name->setObjectName(QStringLiteral("Get_name"));
        label_2 = new QLabel(Get_name);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 361, 41));
        label_3 = new QLabel(Get_name);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 100, 151, 16));
        label_3->setAlignment(Qt::AlignCenter);
        InputUserName = new QLineEdit(Get_name);
        InputUserName->setObjectName(QStringLiteral("InputUserName"));
        InputUserName->setGeometry(QRect(130, 120, 113, 21));
        next_page_1 = new QPushButton(Get_name);
        next_page_1->setObjectName(QStringLiteral("next_page_1"));
        next_page_1->setGeometry(QRect(270, 340, 113, 32));
        dashboard_stack->addWidget(Get_name);
        get_info = new QWidget();
        get_info->setObjectName(QStringLiteral("get_info"));
        label_5 = new QLabel(get_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 20, 361, 16));
        groupBox = new QGroupBox(get_info);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 60, 171, 61));
        FemaleRadioButton = new QRadioButton(groupBox);
        FemaleRadioButton->setObjectName(QStringLiteral("FemaleRadioButton"));
        FemaleRadioButton->setGeometry(QRect(20, 20, 100, 20));
        MaleRadioButton = new QRadioButton(groupBox);
        MaleRadioButton->setObjectName(QStringLiteral("MaleRadioButton"));
        MaleRadioButton->setGeometry(QRect(110, 20, 100, 20));
        InputAgeSpinBox = new QSpinBox(get_info);
        InputAgeSpinBox->setObjectName(QStringLiteral("InputAgeSpinBox"));
        InputAgeSpinBox->setGeometry(QRect(180, 140, 121, 24));
        InputWeightSpinBox = new QDoubleSpinBox(get_info);
        InputWeightSpinBox->setObjectName(QStringLiteral("InputWeightSpinBox"));
        InputWeightSpinBox->setGeometry(QRect(180, 190, 121, 24));
        InputWeightSpinBox->setMaximum(999.99);
        InputInchesSpinBox = new QDoubleSpinBox(get_info);
        InputInchesSpinBox->setObjectName(QStringLiteral("InputInchesSpinBox"));
        InputInchesSpinBox->setGeometry(QRect(230, 240, 71, 24));
        InputInchesSpinBox->setMaximum(11.99);
        label_6 = new QLabel(get_info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 140, 91, 21));
        QFont font1;
        font1.setPointSize(18);
        label_6->setFont(font1);
        label_12 = new QLabel(get_info);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 190, 91, 21));
        label_12->setFont(font1);
        label_13 = new QLabel(get_info);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 240, 91, 21));
        label_13->setFont(font1);
        next_page_2 = new QPushButton(get_info);
        next_page_2->setObjectName(QStringLiteral("next_page_2"));
        next_page_2->setGeometry(QRect(270, 340, 113, 32));
        back_button_page_2 = new QPushButton(get_info);
        back_button_page_2->setObjectName(QStringLiteral("back_button_page_2"));
        back_button_page_2->setGeometry(QRect(0, 340, 113, 32));
        InputFeetSpinBox = new QSpinBox(get_info);
        InputFeetSpinBox->setObjectName(QStringLiteral("InputFeetSpinBox"));
        InputFeetSpinBox->setGeometry(QRect(180, 240, 48, 24));
        dashboard_stack->addWidget(get_info);
        get_activity = new QWidget();
        get_activity->setObjectName(QStringLiteral("get_activity"));
        groupBox_3 = new QGroupBox(get_activity);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(60, 30, 281, 251));
        radio_activity_1 = new QRadioButton(groupBox_3);
        radio_activity_1->setObjectName(QStringLiteral("radio_activity_1"));
        radio_activity_1->setGeometry(QRect(10, 30, 251, 20));
        radio_activity_2 = new QRadioButton(groupBox_3);
        radio_activity_2->setObjectName(QStringLiteral("radio_activity_2"));
        radio_activity_2->setGeometry(QRect(10, 70, 261, 20));
        radio_activity_3 = new QRadioButton(groupBox_3);
        radio_activity_3->setObjectName(QStringLiteral("radio_activity_3"));
        radio_activity_3->setGeometry(QRect(10, 110, 261, 20));
        radio_activity_4 = new QRadioButton(groupBox_3);
        radio_activity_4->setObjectName(QStringLiteral("radio_activity_4"));
        radio_activity_4->setGeometry(QRect(10, 150, 261, 20));
        radio_activity_5 = new QRadioButton(groupBox_3);
        radio_activity_5->setObjectName(QStringLiteral("radio_activity_5"));
        radio_activity_5->setGeometry(QRect(10, 190, 261, 20));
        next_button_page_3 = new QPushButton(get_activity);
        next_button_page_3->setObjectName(QStringLiteral("next_button_page_3"));
        next_button_page_3->setGeometry(QRect(270, 340, 113, 32));
        back_button_page_3 = new QPushButton(get_activity);
        back_button_page_3->setObjectName(QStringLiteral("back_button_page_3"));
        back_button_page_3->setGeometry(QRect(0, 340, 113, 32));
        dashboard_stack->addWidget(get_activity);
        get_goal = new QWidget();
        get_goal->setObjectName(QStringLiteral("get_goal"));
        groupBox_4 = new QGroupBox(get_goal);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(90, 110, 201, 141));
        radioButton_5 = new QRadioButton(groupBox_4);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(40, 20, 151, 20));
        radioButton_6 = new QRadioButton(groupBox_4);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(40, 60, 151, 20));
        radioButton_7 = new QRadioButton(groupBox_4);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(40, 100, 151, 20));
        label_14 = new QLabel(get_goal);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 80, 201, 16));
        next_button_page_4 = new QPushButton(get_goal);
        next_button_page_4->setObjectName(QStringLiteral("next_button_page_4"));
        next_button_page_4->setGeometry(QRect(270, 340, 113, 32));
        back_button_page_4 = new QPushButton(get_goal);
        back_button_page_4->setObjectName(QStringLiteral("back_button_page_4"));
        back_button_page_4->setGeometry(QRect(0, 340, 113, 32));
        dashboard_stack->addWidget(get_goal);
        label = new QLabel(Dasboard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 101, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("AppleGothic"));
        font2.setPointSize(31);
        label->setFont(font2);
        label_8 = new QLabel(Dasboard);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 20, 61, 51));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix_icons/Logomakr_1z7AIL.png")));
        label_8->setScaledContents(true);
        help_info_tab->addTab(Dasboard, QString());
        Exercise = new QWidget();
        Exercise->setObjectName(QStringLiteral("Exercise"));
        groupBox_2 = new QGroupBox(Exercise);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 351, 121));
        groupBox_2->setAlignment(Qt::AlignCenter);
        DisplayBMI = new QTextBrowser(groupBox_2);
        DisplayBMI->setObjectName(QStringLiteral("DisplayBMI"));
        DisplayBMI->setGeometry(QRect(60, 30, 81, 31));
        DisplayBMI->setFrameShape(QFrame::StyledPanel);
        DisplayBMI->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 30, 31, 16));
        label_16->setFont(font1);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 60, 321, 41));
        QFont font3;
        font3.setPointSize(11);
        label_11->setFont(font3);
        label_11->setWordWrap(true);
        groupBox_8 = new QGroupBox(Exercise);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 160, 351, 121));
        groupBox_8->setAlignment(Qt::AlignCenter);
        DisplayBMR = new QTextBrowser(groupBox_8);
        DisplayBMR->setObjectName(QStringLiteral("DisplayBMR"));
        DisplayBMR->setGeometry(QRect(60, 30, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayBMR->sizePolicy().hasHeightForWidth());
        DisplayBMR->setSizePolicy(sizePolicy);
        DisplayBMR->setLayoutDirection(Qt::LeftToRight);
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 30, 41, 16));
        label_18->setFont(font1);
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 60, 321, 41));
        label_10->setFont(font3);
        label_10->setScaledContents(true);
        label_10->setWordWrap(true);
        groupBox_9 = new QGroupBox(Exercise);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 300, 351, 121));
        groupBox_9->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(groupBox_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 30, 41, 16));
        label_17->setFont(font1);
        DisplayAMR = new QTextBrowser(groupBox_9);
        DisplayAMR->setObjectName(QStringLiteral("DisplayAMR"));
        DisplayAMR->setGeometry(QRect(60, 30, 81, 31));
        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 321, 41));
        label_9->setFont(font3);
        label_9->setScaledContents(true);
        label_9->setWordWrap(true);
        help_info_tab->addTab(Exercise, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        label_7 = new QLabel(Settings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 130, 131, 16));
        groupBox_6 = new QGroupBox(Settings);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 150, 331, 91));
        groupBox_6->setAlignment(Qt::AlignCenter);
        DefaultBackgroundButton = new QPushButton(groupBox_6);
        DefaultBackgroundButton->setObjectName(QStringLiteral("DefaultBackgroundButton"));
        DefaultBackgroundButton->setGeometry(QRect(10, 40, 141, 41));
        WhiteBackgroundButton = new QPushButton(groupBox_6);
        WhiteBackgroundButton->setObjectName(QStringLiteral("WhiteBackgroundButton"));
        WhiteBackgroundButton->setGeometry(QRect(172, 40, 141, 41));
        resetAccountButton = new QPushButton(Settings);
        resetAccountButton->setObjectName(QStringLiteral("resetAccountButton"));
        resetAccountButton->setGeometry(QRect(200, 70, 171, 41));
        groupBox_7 = new QGroupBox(Settings);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(30, 260, 331, 80));
        groupBox_7->setAlignment(Qt::AlignCenter);
        Size13FontButton = new QPushButton(groupBox_7);
        Size13FontButton->setObjectName(QStringLiteral("Size13FontButton"));
        Size13FontButton->setGeometry(QRect(10, 30, 141, 41));
        Size18FontButton = new QPushButton(groupBox_7);
        Size18FontButton->setObjectName(QStringLiteral("Size18FontButton"));
        Size18FontButton->setGeometry(QRect(170, 30, 141, 41));
        editButton = new QPushButton(Settings);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(20, 70, 171, 41));
        label_23 = new QLabel(Settings);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 30, 191, 16));
        label_20 = new QLabel(Settings);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 430, 101, 31));
        label_20->setFont(font2);
        label_22 = new QLabel(Settings);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(110, 410, 61, 51));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix_icons/Logomakr_1z7AIL.png")));
        label_22->setScaledContents(true);
        label_24 = new QLabel(Settings);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(100, 460, 281, 31));
        help_info_tab->addTab(Settings, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(buttonBox_addexorcise, SIGNAL(accepted()), spinBox_2, SLOT(clear()));
        QObject::connect(buttonBox_addexorcise, SIGNAL(rejected()), spinBox_2, SLOT(clear()));
        QObject::connect(buttonBox_addmeal, SIGNAL(accepted()), spinBox, SLOT(clear()));
        QObject::connect(buttonBox_addmeal, SIGNAL(rejected()), spinBox, SLOT(clear()));

        help_info_tab->setCurrentIndex(0);
        dashboard_stack->setCurrentIndex(2);
        inside_dashboard_stack->setCurrentIndex(0);
        add_exercise_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        add_meal_2->setText(QApplication::translate("MainWindow", "Add Meal", 0));
        add_exercise_2->setText(QApplication::translate("MainWindow", "Add Exercise", 0));
        undo_Button->setText(QApplication::translate("MainWindow", "Undo", 0));
        label_21->setText(QApplication::translate("MainWindow", "How many calories was your meal?", 0));
        label_19->setText(QApplication::translate("MainWindow", "How many calories did you burn?", 0));
        label_4->setText(QApplication::translate("MainWindow", "Calories Remaining", 0));
        new_Day_Button->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "New Day", 0));
        label_2->setText(QApplication::translate("MainWindow", "Welcome! Let's set up your profile.", 0));
        label_3->setText(QApplication::translate("MainWindow", "What is your name?", 0));
        next_page_1->setText(QApplication::translate("MainWindow", "Next", 0));
        label_5->setText(QApplication::translate("MainWindow", "Let's  personalize your FitMap", 0));
        groupBox->setTitle(QString());
        FemaleRadioButton->setText(QApplication::translate("MainWindow", "Female", 0));
        MaleRadioButton->setText(QApplication::translate("MainWindow", "Male", 0));
        InputAgeSpinBox->setSuffix(QApplication::translate("MainWindow", "   years", 0));
        InputWeightSpinBox->setSuffix(QApplication::translate("MainWindow", " lbs", 0));
        InputInchesSpinBox->setSuffix(QApplication::translate("MainWindow", " in", 0));
        label_6->setText(QApplication::translate("MainWindow", "Age", 0));
        label_12->setText(QApplication::translate("MainWindow", "Weight", 0));
        label_13->setText(QApplication::translate("MainWindow", "Height", 0));
        next_page_2->setText(QApplication::translate("MainWindow", "Next", 0));
        back_button_page_2->setText(QApplication::translate("MainWindow", "Back", 0));
        InputFeetSpinBox->setSuffix(QApplication::translate("MainWindow", " ft", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Activity Level", 0));
        radio_activity_1->setText(QApplication::translate("MainWindow", "Little to no exercise", 0));
        radio_activity_2->setText(QApplication::translate("MainWindow", "Light (1-3 day per week)", 0));
        radio_activity_3->setText(QApplication::translate("MainWindow", "Moderate (3-5 days per week)", 0));
        radio_activity_4->setText(QApplication::translate("MainWindow", "Heavy (6-7 days per week)", 0));
        radio_activity_5->setText(QApplication::translate("MainWindow", "Very Heavy (twice per day)", 0));
        next_button_page_3->setText(QApplication::translate("MainWindow", "Next", 0));
        back_button_page_3->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_4->setTitle(QString());
        radioButton_5->setText(QApplication::translate("MainWindow", "Lose Weight", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "Maintain Weight", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "Gain Weight", 0));
        label_14->setText(QApplication::translate("MainWindow", "What is your goal?", 0));
        next_button_page_4->setText(QApplication::translate("MainWindow", "Next", 0));
        back_button_page_4->setText(QApplication::translate("MainWindow", "Back", 0));
        label->setText(QApplication::translate("MainWindow", "FitMap", 0));
        label_8->setText(QString());
        help_info_tab->setTabText(help_info_tab->indexOf(Dasboard), QApplication::translate("MainWindow", "Dashboard", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Body Mass Index", 0));
        label_16->setText(QApplication::translate("MainWindow", "BMI", 0));
        label_11->setText(QApplication::translate("MainWindow", "a measure of body fat that gives an indication of nutritional status.", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Basal Metabolic Rate", 0));
        label_18->setText(QApplication::translate("MainWindow", "BMR", 0));
        label_10->setText(QApplication::translate("MainWindow", "The rate at which oxygen is utilized in a fasting subject at complete rest as a percentage of a value established as normal for such a subject. ", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Active Metabolic Rate", 0));
        label_17->setText(QApplication::translate("MainWindow", "AMR", 0));
        label_9->setText(QApplication::translate("MainWindow", "BMR adjusted to incorporate activity level.", 0));
        help_info_tab->setTabText(help_info_tab->indexOf(Exercise), QApplication::translate("MainWindow", "Information", 0));
        label_7->setText(QApplication::translate("MainWindow", "Accessablility ", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Color", 0));
        DefaultBackgroundButton->setText(QApplication::translate("MainWindow", "Default", 0));
        WhiteBackgroundButton->setText(QApplication::translate("MainWindow", "High Contrast", 0));
        resetAccountButton->setText(QApplication::translate("MainWindow", "Reset Account", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Zoom ", 0));
        Size13FontButton->setText(QApplication::translate("MainWindow", "Default", 0));
        Size18FontButton->setText(QApplication::translate("MainWindow", "Large", 0));
        editButton->setText(QApplication::translate("MainWindow", "Edit Information", 0));
        label_23->setText(QApplication::translate("MainWindow", "Account", 0));
        label_20->setText(QApplication::translate("MainWindow", "FitMap", 0));
        label_22->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Proudly engineered in Las Vegas", 0));
        help_info_tab->setTabText(help_info_tab->indexOf(Settings), QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
