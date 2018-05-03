/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
    QWidget *layoutWidget;
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
        layoutWidget = new QWidget(Welcome);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 333, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        welcomeLabel = new QLabel(layoutWidget);
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

        scoreBoxLabel = new QLabel(layoutWidget);
        scoreBoxLabel->setObjectName(QStringLiteral("scoreBoxLabel"));

        gridLayout->addWidget(scoreBoxLabel, 1, 0, 1, 1);

        difficultyBoxLabel = new QLabel(layoutWidget);
        difficultyBoxLabel->setObjectName(QStringLiteral("difficultyBoxLabel"));

        gridLayout->addWidget(difficultyBoxLabel, 1, 1, 1, 1);

        WinningScore = new QComboBox(layoutWidget);
        WinningScore->setObjectName(QStringLiteral("WinningScore"));

        gridLayout->addWidget(WinningScore, 2, 0, 1, 1);

        Difficulty = new QComboBox(layoutWidget);
        Difficulty->setObjectName(QStringLiteral("Difficulty"));

        gridLayout->addWidget(Difficulty, 2, 1, 1, 1);

        Go = new QPushButton(layoutWidget);
        Go->setObjectName(QStringLiteral("Go"));

        gridLayout->addWidget(Go, 3, 1, 1, 1);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Dialog", nullptr));
        welcomeLabel->setText(QApplication::translate("Welcome", "Welcome to Joels Spades. Select Max Score and Difficulty. ", nullptr));
        scoreBoxLabel->setText(QApplication::translate("Welcome", "Max Score", nullptr));
        difficultyBoxLabel->setText(QApplication::translate("Welcome", "Difficulty", nullptr));
        Go->setText(QApplication::translate("Welcome", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
