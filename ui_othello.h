/********************************************************************************
** Form generated from reading UI file 'othello.ui'
**
** Created: Tue 13. Mar 19:55:42 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHELLO_H
#define UI_OTHELLO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OthelloClass
{
public:
    QAction *action_Nouveau;
    QAction *action_Fermer;
    QAction *action_Quitter;
    QAction *action_Texte;
    QAction *action_Expert;
    QAction *actionA_uteur;
    QAction *actionA_ide;
    QWidget *centralwidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *cbRangees;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *cbColonnes;
    QPushButton *pbPlacer;
    QMenuBar *menubar;
    QMenu *menu_Othello;
    QMenu *menu_Observateur;
    QMenu *menu_A_Propos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OthelloClass)
    {
        if (OthelloClass->objectName().isEmpty())
            OthelloClass->setObjectName(QString::fromUtf8("OthelloClass"));
        OthelloClass->resize(210, 265);
        action_Nouveau = new QAction(OthelloClass);
        action_Nouveau->setObjectName(QString::fromUtf8("action_Nouveau"));
        action_Fermer = new QAction(OthelloClass);
        action_Fermer->setObjectName(QString::fromUtf8("action_Fermer"));
        action_Quitter = new QAction(OthelloClass);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_Texte = new QAction(OthelloClass);
        action_Texte->setObjectName(QString::fromUtf8("action_Texte"));
        action_Texte->setCheckable(true);
        action_Expert = new QAction(OthelloClass);
        action_Expert->setObjectName(QString::fromUtf8("action_Expert"));
        action_Expert->setCheckable(true);
        actionA_uteur = new QAction(OthelloClass);
        actionA_uteur->setObjectName(QString::fromUtf8("actionA_uteur"));
        actionA_ide = new QAction(OthelloClass);
        actionA_ide->setObjectName(QString::fromUtf8("actionA_ide"));
        centralwidget = new QWidget(OthelloClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 170, 190));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        verticalLayout_4->addWidget(groupBox);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        cbRangees = new QComboBox(frame);
        cbRangees->setObjectName(QString::fromUtf8("cbRangees"));

        verticalLayout_3->addWidget(cbRangees);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        cbColonnes = new QComboBox(frame);
        cbColonnes->setObjectName(QString::fromUtf8("cbColonnes"));

        verticalLayout_2->addWidget(cbColonnes);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        pbPlacer = new QPushButton(frame);
        pbPlacer->setObjectName(QString::fromUtf8("pbPlacer"));

        verticalLayout_4->addWidget(pbPlacer);

        OthelloClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OthelloClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 210, 21));
        menu_Othello = new QMenu(menubar);
        menu_Othello->setObjectName(QString::fromUtf8("menu_Othello"));
        menu_Observateur = new QMenu(menubar);
        menu_Observateur->setObjectName(QString::fromUtf8("menu_Observateur"));
        menu_Observateur->setEnabled(false);
        menu_A_Propos = new QMenu(menubar);
        menu_A_Propos->setObjectName(QString::fromUtf8("menu_A_Propos"));
        OthelloClass->setMenuBar(menubar);
        statusbar = new QStatusBar(OthelloClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OthelloClass->setStatusBar(statusbar);

        menubar->addAction(menu_Othello->menuAction());
        menubar->addAction(menu_Observateur->menuAction());
        menubar->addAction(menu_A_Propos->menuAction());
        menu_Othello->addAction(action_Nouveau);
        menu_Othello->addAction(action_Fermer);
        menu_Othello->addAction(action_Quitter);
        menu_Observateur->addAction(action_Texte);
        menu_Observateur->addAction(action_Expert);
        menu_A_Propos->addAction(actionA_ide);
        menu_A_Propos->addAction(actionA_uteur);

        retranslateUi(OthelloClass);

        QMetaObject::connectSlotsByName(OthelloClass);
    } // setupUi

    void retranslateUi(QMainWindow *OthelloClass)
    {
        OthelloClass->setWindowTitle(QApplication::translate("OthelloClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Nouveau->setText(QApplication::translate("OthelloClass", "&Nouveau", 0, QApplication::UnicodeUTF8));
        action_Nouveau->setShortcut(QApplication::translate("OthelloClass", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_Fermer->setText(QApplication::translate("OthelloClass", "&Fermer", 0, QApplication::UnicodeUTF8));
        action_Fermer->setShortcut(QApplication::translate("OthelloClass", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("OthelloClass", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Quitter->setShortcut(QApplication::translate("OthelloClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Texte->setText(QApplication::translate("OthelloClass", "&Texte", 0, QApplication::UnicodeUTF8));
        action_Expert->setText(QApplication::translate("OthelloClass", "&Expert", 0, QApplication::UnicodeUTF8));
        actionA_uteur->setText(QApplication::translate("OthelloClass", "A&uteur", 0, QApplication::UnicodeUTF8));
        actionA_ide->setText(QApplication::translate("OthelloClass", "A&ide", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OthelloClass", "Pion", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("OthelloClass", "Noir", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("OthelloClass", "Blanc", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OthelloClass", "Position :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OthelloClass", "Rang\303\251es", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OthelloClass", "Colonnes", 0, QApplication::UnicodeUTF8));
        pbPlacer->setText(QApplication::translate("OthelloClass", "Placer", 0, QApplication::UnicodeUTF8));
        menu_Othello->setTitle(QApplication::translate("OthelloClass", "&Othello", 0, QApplication::UnicodeUTF8));
        menu_Observateur->setTitle(QApplication::translate("OthelloClass", "&Observateur", 0, QApplication::UnicodeUTF8));
        menu_A_Propos->setTitle(QApplication::translate("OthelloClass", "&A propos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OthelloClass: public Ui_OthelloClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHELLO_H
