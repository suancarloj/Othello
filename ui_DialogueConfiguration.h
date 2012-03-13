/********************************************************************************
** Form generated from reading UI file 'DialogueConfiguration.ui'
**
** Created: Tue 13. Mar 20:13:49 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUECONFIGURATION_H
#define UI_DIALOGUECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogueConfigurationClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lbTaille;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbRangees;
    QSpacerItem *horizontalSpacer;
    QLabel *lbColonnes;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sbRangees;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *sbColonnes;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbOk;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogueConfigurationClass)
    {
        if (DialogueConfigurationClass->objectName().isEmpty())
            DialogueConfigurationClass->setObjectName(QString::fromUtf8("DialogueConfigurationClass"));
        DialogueConfigurationClass->resize(182, 135);
        DialogueConfigurationClass->setMaximumSize(QSize(182, 135));
        verticalLayout_2 = new QVBoxLayout(DialogueConfigurationClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbTaille = new QLabel(DialogueConfigurationClass);
        lbTaille->setObjectName(QString::fromUtf8("lbTaille"));
        QFont font;
        font.setPointSize(14);
        lbTaille->setFont(font);

        verticalLayout->addWidget(lbTaille);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbRangees = new QLabel(DialogueConfigurationClass);
        lbRangees->setObjectName(QString::fromUtf8("lbRangees"));
        QFont font1;
        font1.setPointSize(10);
        lbRangees->setFont(font1);

        horizontalLayout_2->addWidget(lbRangees);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lbColonnes = new QLabel(DialogueConfigurationClass);
        lbColonnes->setObjectName(QString::fromUtf8("lbColonnes"));
        lbColonnes->setFont(font1);

        horizontalLayout_2->addWidget(lbColonnes);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sbRangees = new QSpinBox(DialogueConfigurationClass);
        sbRangees->setObjectName(QString::fromUtf8("sbRangees"));
        sbRangees->setMinimum(4);
        sbRangees->setMaximum(12);
        sbRangees->setValue(8);

        horizontalLayout->addWidget(sbRangees);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sbColonnes = new QSpinBox(DialogueConfigurationClass);
        sbColonnes->setObjectName(QString::fromUtf8("sbColonnes"));
        sbColonnes->setMinimum(4);
        sbColonnes->setMaximum(12);
        sbColonnes->setValue(8);

        horizontalLayout->addWidget(sbColonnes);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbOk = new QPushButton(DialogueConfigurationClass);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        horizontalLayout_3->addWidget(pbOk);

        pushButton_2 = new QPushButton(DialogueConfigurationClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DialogueConfigurationClass);
        QObject::connect(pbOk, SIGNAL(clicked()), DialogueConfigurationClass, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), DialogueConfigurationClass, SLOT(reject()));
        QObject::connect(sbRangees, SIGNAL(valueChanged(int)), DialogueConfigurationClass, SLOT(setNbRangees(int)));
        QObject::connect(sbColonnes, SIGNAL(valueChanged(int)), DialogueConfigurationClass, SLOT(setNbColonnes(int)));

        QMetaObject::connectSlotsByName(DialogueConfigurationClass);
    } // setupUi

    void retranslateUi(QDialog *DialogueConfigurationClass)
    {
        DialogueConfigurationClass->setWindowTitle(QApplication::translate("DialogueConfigurationClass", "DialogueConfiguration", 0, QApplication::UnicodeUTF8));
        lbTaille->setText(QApplication::translate("DialogueConfigurationClass", "Taille de l'othellier", 0, QApplication::UnicodeUTF8));
        lbRangees->setText(QApplication::translate("DialogueConfigurationClass", "Rang\303\251es", 0, QApplication::UnicodeUTF8));
        lbColonnes->setText(QApplication::translate("DialogueConfigurationClass", "Colonnes", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("DialogueConfigurationClass", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialogueConfigurationClass", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogueConfigurationClass: public Ui_DialogueConfigurationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUECONFIGURATION_H
