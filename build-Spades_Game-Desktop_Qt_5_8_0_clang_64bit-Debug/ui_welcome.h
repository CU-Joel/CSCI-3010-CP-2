/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *welcomeLabel;
    QLabel *scoreBoxLabel;
    QLabel *difficultyBoxLabel;
    QComboBox *WinningScore;
    QComboBox *Difficulty;
    QPushButton *Go;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->resize(400, 300);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        Welcome->setFont(font);
        widget = new QWidget(Welcome);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 30, 333, 136));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        welcomeLabel = new QLabel(widget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        welcomeLabel->setFont(font1);
        welcomeLabel->setScaledContents(false);
        welcomeLabel->setWordWrap(true);

        gridLayout->addWidget(welcomeLabel, 0, 0, 1, 2);

        scoreBoxLabel = new QLabel(widget);
        scoreBoxLabel->setObjectName(QStringLiteral("scoreBoxLabel"));

        gridLayout->addWidget(scoreBoxLabel, 1, 0, 1, 1);

        difficultyBoxLabel = new QLabel(widget);
        difficultyBoxLabel->setObjectName(QStringLiteral("difficultyBoxLabel"));

        gridLayout->addWidget(difficultyBoxLabel, 1, 1, 1, 1);

        WinningScore = new QComboBox(widget);
        WinningScore->setObjectName(QStringLiteral("WinningScore"));

        gridLayout->addWidget(WinningScore, 2, 0, 1, 1);

        Difficulty = new QComboBox(widget);
        Difficulty->setObjectName(QStringLiteral("Difficulty"));

        gridLayout->addWidget(Difficulty, 2, 1, 1, 1);

        Go = new QPushButton(widget);
        Go->setObjectName(QStringLiteral("Go"));

        gridLayout->addWidget(Go, 3, 1, 1, 1);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Dialog", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("Welcome", "Welcome to Joels Spades. Select Max Score and Difficulty. ", Q_NULLPTR));
        scoreBoxLabel->setText(QApplication::translate("Welcome", "Max Score", Q_NULLPTR));
        difficultyBoxLabel->setText(QApplication::translate("Welcome", "Difficulty", Q_NULLPTR));
        Go->setText(QApplication::translate("Welcome", "Go", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
