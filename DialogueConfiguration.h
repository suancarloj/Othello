#ifndef DIALOGUECONFIGURATION_H
#define DIALOGUECONFIGURATION_H

#include <QtGui/QDialog>
#include "ui_DialogueConfiguration.h"

class DialogueConfiguration : public QDialog
{
    Q_OBJECT

public:
    DialogueConfiguration(QWidget *parent = 0);
    unsigned getNbRangees() const;
    unsigned getNbColonnes() const;
    ~DialogueConfiguration();

private:
    Ui::DialogueConfigurationClass ui;
    unsigned nbRangees;
    unsigned nbColonnes;

private slots:
	void setNbRangees(int);
	void setNbColonnes(int);
};

#endif // DIALOGUECONFIGURATION_H
