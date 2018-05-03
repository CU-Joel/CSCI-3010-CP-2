/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Opp1;
    QLabel *player;
    QLabel *Opp2;
    QLabel *TM;
    QLabel *card1;
    QLabel *card2;
    QLabel *card3;
    QLabel *card4;
    QLabel *card5;
    QLabel *card6;
    QLabel *card7;
    QLabel *card8;
    QLabel *card9;
    QLabel *card10;
    QLabel *card11;
    QLabel *card12;
    QLabel *card13;
    QTextEdit *textBox;
    QLabel *scoreLabel;
    QPushButton *startButton;
    QLineEdit *bidBox;
    QPushButton *turnButton;
    QPushButton *bidButton;
    QWidget *table;
    QPushButton *play12;
    QPushButton *play5;
    QPushButton *play6;
    QPushButton *play11;
    QPushButton *play3;
    QPushButton *play10;
    QPushButton *play9;
    QPushButton *play4;
    QPushButton *play2;
    QPushButton *play1;
    QPushButton *play13;
    QPushButton *play8;
    QPushButton *play7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(715, 661);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Opp1 = new QLabel(centralWidget);
        Opp1->setObjectName(QStringLiteral("Opp1"));
        Opp1->setGeometry(QRect(270, 90, 51, 71));
        Opp1->setScaledContents(true);
        player = new QLabel(centralWidget);
        player->setObjectName(QStringLiteral("player"));
        player->setGeometry(QRect(370, 160, 51, 71));
        player->setScaledContents(true);
        Opp2 = new QLabel(centralWidget);
        Opp2->setObjectName(QStringLiteral("Opp2"));
        Opp2->setGeometry(QRect(470, 80, 51, 71));
        Opp2->setScaledContents(true);
        TM = new QLabel(centralWidget);
        TM->setObjectName(QStringLiteral("TM"));
        TM->setGeometry(QRect(370, 20, 51, 71));
        TM->setScaledContents(true);
        card1 = new QLabel(centralWidget);
        card1->setObjectName(QStringLiteral("card1"));
        card1->setGeometry(QRect(21, 251, 45, 69));
        card1->setScaledContents(true);
        card2 = new QLabel(centralWidget);
        card2->setObjectName(QStringLiteral("card2"));
        card2->setGeometry(QRect(74, 251, 45, 69));
        card2->setScaledContents(true);
        card3 = new QLabel(centralWidget);
        card3->setObjectName(QStringLiteral("card3"));
        card3->setGeometry(QRect(127, 251, 45, 69));
        card3->setScaledContents(true);
        card4 = new QLabel(centralWidget);
        card4->setObjectName(QStringLiteral("card4"));
        card4->setGeometry(QRect(180, 251, 45, 69));
        card4->setScaledContents(true);
        card5 = new QLabel(centralWidget);
        card5->setObjectName(QStringLiteral("card5"));
        card5->setGeometry(QRect(233, 251, 45, 69));
        card5->setScaledContents(true);
        card6 = new QLabel(centralWidget);
        card6->setObjectName(QStringLiteral("card6"));
        card6->setGeometry(QRect(286, 251, 45, 69));
        card6->setScaledContents(true);
        card7 = new QLabel(centralWidget);
        card7->setObjectName(QStringLiteral("card7"));
        card7->setGeometry(QRect(339, 251, 44, 69));
        card7->setScaledContents(true);
        card8 = new QLabel(centralWidget);
        card8->setObjectName(QStringLiteral("card8"));
        card8->setGeometry(QRect(391, 251, 45, 69));
        card8->setScaledContents(true);
        card9 = new QLabel(centralWidget);
        card9->setObjectName(QStringLiteral("card9"));
        card9->setGeometry(QRect(444, 251, 45, 69));
        card9->setScaledContents(true);
        card10 = new QLabel(centralWidget);
        card10->setObjectName(QStringLiteral("card10"));
        card10->setGeometry(QRect(497, 251, 45, 69));
        card10->setScaledContents(true);
        card11 = new QLabel(centralWidget);
        card11->setObjectName(QStringLiteral("card11"));
        card11->setGeometry(QRect(550, 251, 45, 69));
        card11->setScaledContents(true);
        card12 = new QLabel(centralWidget);
        card12->setObjectName(QStringLiteral("card12"));
        card12->setGeometry(QRect(603, 251, 45, 69));
        card12->setScaledContents(true);
        card13 = new QLabel(centralWidget);
        card13->setObjectName(QStringLiteral("card13"));
        card13->setGeometry(QRect(656, 251, 44, 69));
        card13->setScaledContents(true);
        textBox = new QTextEdit(centralWidget);
        textBox->setObjectName(QStringLiteral("textBox"));
        textBox->setGeometry(QRect(20, 370, 681, 111));
        scoreLabel = new QLabel(centralWidget);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(20, 10, 141, 221));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(30, 500, 111, 32));
        bidBox = new QLineEdit(centralWidget);
        bidBox->setObjectName(QStringLiteral("bidBox"));
        bidBox->setGeometry(QRect(155, 504, 125, 21));
        turnButton = new QPushButton(centralWidget);
        turnButton->setObjectName(QStringLiteral("turnButton"));
        turnButton->setGeometry(QRect(399, 500, 102, 32));
        bidButton = new QPushButton(centralWidget);
        bidButton->setObjectName(QStringLiteral("bidButton"));
        bidButton->setGeometry(QRect(335, 500, 62, 32));
        table = new QWidget(centralWidget);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(230, 10, 311, 231));
        play12 = new QPushButton(centralWidget);
        play12->setObjectName(QStringLiteral("play12"));
        play12->setGeometry(QRect(598, 330, 51, 32));
        play12->setAutoFillBackground(false);
        play12->setFlat(false);
        play5 = new QPushButton(centralWidget);
        play5->setObjectName(QStringLiteral("play5"));
        play5->setGeometry(QRect(231, 330, 50, 32));
        play5->setAutoFillBackground(false);
        play5->setFlat(false);
        play6 = new QPushButton(centralWidget);
        play6->setObjectName(QStringLiteral("play6"));
        play6->setGeometry(QRect(283, 330, 51, 32));
        play6->setAutoFillBackground(false);
        play6->setFlat(false);
        play11 = new QPushButton(centralWidget);
        play11->setObjectName(QStringLiteral("play11"));
        play11->setGeometry(QRect(546, 330, 50, 32));
        play11->setAutoFillBackground(false);
        play11->setFlat(false);
        play3 = new QPushButton(centralWidget);
        play3->setObjectName(QStringLiteral("play3"));
        play3->setGeometry(QRect(126, 330, 50, 32));
        play3->setAutoFillBackground(false);
        play3->setFlat(false);
        play10 = new QPushButton(centralWidget);
        play10->setObjectName(QStringLiteral("play10"));
        play10->setGeometry(QRect(493, 330, 51, 32));
        play10->setAutoFillBackground(false);
        play10->setFlat(false);
        play9 = new QPushButton(centralWidget);
        play9->setObjectName(QStringLiteral("play9"));
        play9->setGeometry(QRect(441, 330, 50, 32));
        play9->setAutoFillBackground(false);
        play9->setFlat(false);
        play4 = new QPushButton(centralWidget);
        play4->setObjectName(QStringLiteral("play4"));
        play4->setGeometry(QRect(178, 330, 51, 32));
        play4->setAutoFillBackground(false);
        play4->setFlat(false);
        play2 = new QPushButton(centralWidget);
        play2->setObjectName(QStringLiteral("play2"));
        play2->setGeometry(QRect(73, 330, 51, 32));
        play2->setAutoFillBackground(false);
        play2->setFlat(false);
        play1 = new QPushButton(centralWidget);
        play1->setObjectName(QStringLiteral("play1"));
        play1->setGeometry(QRect(20, 330, 51, 32));
        play1->setAutoFillBackground(false);
        play1->setFlat(false);
        play13 = new QPushButton(centralWidget);
        play13->setObjectName(QStringLiteral("play13"));
        play13->setGeometry(QRect(651, 330, 50, 32));
        play13->setAutoFillBackground(false);
        play13->setFlat(false);
        play8 = new QPushButton(centralWidget);
        play8->setObjectName(QStringLiteral("play8"));
        play8->setGeometry(QRect(388, 330, 51, 32));
        play8->setAutoFillBackground(false);
        play8->setFlat(false);
        play7 = new QPushButton(centralWidget);
        play7->setObjectName(QStringLiteral("play7"));
        play7->setGeometry(QRect(336, 330, 50, 32));
        play7->setAutoFillBackground(false);
        play7->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);
        table->raise();
        Opp1->raise();
        player->raise();
        Opp2->raise();
        TM->raise();
        card1->raise();
        card2->raise();
        card3->raise();
        card4->raise();
        card5->raise();
        card6->raise();
        card7->raise();
        card8->raise();
        card9->raise();
        card10->raise();
        card11->raise();
        card12->raise();
        card13->raise();
        textBox->raise();
        scoreLabel->raise();
        startButton->raise();
        bidBox->raise();
        turnButton->raise();
        bidButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Opp1->setText(QApplication::translate("MainWindow", "Opp1", nullptr));
        player->setText(QApplication::translate("MainWindow", "Player", nullptr));
        Opp2->setText(QApplication::translate("MainWindow", "Opp2", nullptr));
        TM->setText(QApplication::translate("MainWindow", "TM", nullptr));
        card1->setText(QString());
        card2->setText(QString());
        card3->setText(QString());
        card4->setText(QString());
        card5->setText(QString());
        card6->setText(QString());
        card7->setText(QString());
        card8->setText(QString());
        card9->setText(QString());
        card10->setText(QString());
        card11->setText(QString());
        card12->setText(QString());
        card13->setText(QString());
        scoreLabel->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "Start Game", nullptr));
        turnButton->setText(QApplication::translate("MainWindow", "Next Turn", nullptr));
        bidButton->setText(QApplication::translate("MainWindow", "Bid", nullptr));
        play12->setText(QApplication::translate("MainWindow", "play", nullptr));
        play5->setText(QApplication::translate("MainWindow", "play", nullptr));
        play6->setText(QApplication::translate("MainWindow", "play", nullptr));
        play11->setText(QApplication::translate("MainWindow", "play", nullptr));
        play3->setText(QApplication::translate("MainWindow", "play", nullptr));
        play10->setText(QApplication::translate("MainWindow", "play", nullptr));
        play9->setText(QApplication::translate("MainWindow", "play", nullptr));
        play4->setText(QApplication::translate("MainWindow", "play", nullptr));
        play2->setText(QApplication::translate("MainWindow", "play", nullptr));
        play1->setText(QApplication::translate("MainWindow", "play", nullptr));
        play13->setText(QApplication::translate("MainWindow", "play", nullptr));
        play8->setText(QApplication::translate("MainWindow", "play", nullptr));
        play7->setText(QApplication::translate("MainWindow", "play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
