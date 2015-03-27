/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QRadioButton *muz;
    QRadioButton *zena;
    QLabel *pohlavi;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *muz2;
    QRadioButton *zena2;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *kolektiv;
    QCheckBox *prace;
    QCheckBox *sef;
    QCheckBox *benefity;
    QCheckBox *plat;
    QCheckBox *platN;
    QCheckBox *dostupnost;
    QCheckBox *kolektivN;
    QCheckBox *vse;
    QPushButton *pushButton_3;
    QTextBrowser *vysledek;
    QFrame *line_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QDoubleSpinBox *a;
    QDoubleSpinBox *b;
    QLabel *obvod;
    QLabel *obsah;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(634, 288);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(10, 30, 75, 23));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 70, 17));
        muz = new QRadioButton(centralWidget);
        muz->setObjectName(QStringLiteral("muz"));
        muz->setGeometry(QRect(10, 120, 82, 17));
        muz->setChecked(false);
        zena = new QRadioButton(centralWidget);
        zena->setObjectName(QStringLiteral("zena"));
        zena->setGeometry(QRect(10, 140, 82, 17));
        pohlavi = new QLabel(centralWidget);
        pohlavi->setObjectName(QStringLiteral("pohlavi"));
        pohlavi->setGeometry(QRect(10, 160, 46, 13));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 190, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 113, 20));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 100, 111, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 100, 46, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 220, 131, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(140, 0, 20, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(210, 20, 42, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 20, 46, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 50, 46, 13));
        muz2 = new QRadioButton(centralWidget);
        muz2->setObjectName(QStringLiteral("muz2"));
        muz2->setGeometry(QRect(210, 50, 82, 17));
        muz2->setChecked(true);
        zena2 = new QRadioButton(centralWidget);
        zena2->setObjectName(QStringLiteral("zena2"));
        zena2->setGeometry(QRect(210, 70, 82, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 100, 46, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 100, 46, 13));
        kolektiv = new QCheckBox(centralWidget);
        kolektiv->setObjectName(QStringLiteral("kolektiv"));
        kolektiv->setGeometry(QRect(160, 120, 70, 17));
        prace = new QCheckBox(centralWidget);
        prace->setObjectName(QStringLiteral("prace"));
        prace->setGeometry(QRect(160, 140, 70, 17));
        sef = new QCheckBox(centralWidget);
        sef->setObjectName(QStringLiteral("sef"));
        sef->setGeometry(QRect(160, 160, 70, 17));
        benefity = new QCheckBox(centralWidget);
        benefity->setObjectName(QStringLiteral("benefity"));
        benefity->setGeometry(QRect(160, 180, 70, 17));
        plat = new QCheckBox(centralWidget);
        plat->setObjectName(QStringLiteral("plat"));
        plat->setGeometry(QRect(160, 200, 70, 17));
        platN = new QCheckBox(centralWidget);
        platN->setObjectName(QStringLiteral("platN"));
        platN->setGeometry(QRect(260, 120, 70, 17));
        dostupnost = new QCheckBox(centralWidget);
        dostupnost->setObjectName(QStringLiteral("dostupnost"));
        dostupnost->setGeometry(QRect(260, 140, 70, 17));
        kolektivN = new QCheckBox(centralWidget);
        kolektivN->setObjectName(QStringLiteral("kolektivN"));
        kolektivN->setGeometry(QRect(260, 160, 70, 17));
        vse = new QCheckBox(centralWidget);
        vse->setObjectName(QStringLiteral("vse"));
        vse->setGeometry(QRect(260, 180, 70, 17));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(250, 200, 75, 23));
        vysledek = new QTextBrowser(centralWidget);
        vysledek->setObjectName(QStringLiteral("vysledek"));
        vysledek->setGeometry(QRect(350, 10, 191, 211));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(540, 0, 20, 231));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(560, 10, 82, 17));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(560, 30, 82, 17));
        a = new QDoubleSpinBox(centralWidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(560, 50, 62, 22));
        b = new QDoubleSpinBox(centralWidget);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(560, 70, 62, 22));
        obvod = new QLabel(centralWidget);
        obvod->setObjectName(QStringLiteral("obvod"));
        obvod->setGeometry(QRect(560, 100, 46, 13));
        obsah = new QLabel(centralWidget);
        obsah->setObjectName(QStringLiteral("obsah"));
        obsah->setGeometry(QRect(560, 120, 46, 13));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(610, 100, 16, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(610, 120, 16, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(checkBox, SIGNAL(toggled(bool)), pushButton, SLOT(setEnabled(bool)));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), label, SLOT(setNum(int)));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), b, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        muz->setText(QApplication::translate("MainWindow", "Muz", 0));
        zena->setText(QApplication::translate("MainWindow", "Zena", 0));
        pohlavi->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Odeslat", 0));
        label->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "Result", 0));
        label_3->setText(QApplication::translate("MainWindow", "Vek", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pohlavi", 0));
        muz2->setText(QApplication::translate("MainWindow", "Muz", 0));
        zena2->setText(QApplication::translate("MainWindow", "Zena", 0));
        label_5->setText(QApplication::translate("MainWindow", "Libi", 0));
        label_6->setText(QApplication::translate("MainWindow", "Nelibi", 0));
        kolektiv->setText(QApplication::translate("MainWindow", "kolektiv", 0));
        prace->setText(QApplication::translate("MainWindow", "prace", 0));
        sef->setText(QApplication::translate("MainWindow", "sef", 0));
        benefity->setText(QApplication::translate("MainWindow", "benefity", 0));
        plat->setText(QApplication::translate("MainWindow", "plat", 0));
        platN->setText(QApplication::translate("MainWindow", "plat", 0));
        dostupnost->setText(QApplication::translate("MainWindow", "dostupnost", 0));
        kolektivN->setText(QApplication::translate("MainWindow", "kolektiv", 0));
        vse->setText(QApplication::translate("MainWindow", "vse", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Odeslat", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Obdelnik", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Ctverec", 0));
        obvod->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        obsah->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_9->setText(QApplication::translate("MainWindow", "m", 0));
        label_10->setText(QApplication::translate("MainWindow", "m2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
