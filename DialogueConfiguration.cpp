#include "DialogueConfiguration.h"

DialogueConfiguration::DialogueConfiguration(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.sbRangees, SIGNAL(valueChanged(int)), this, SLOT(setNbRangees(int)));
	connect(ui.sbColonnes, SIGNAL(valueChanged(int)), this, SLOT(setNbRangees(int)));
}
unsigned DialogueConfiguration::getNbRangees() const {
	return this->nbRangees;
}
unsigned DialogueConfiguration::getNbColonnes() const {
	return this->nbRangees;
}

void DialogueConfiguration::setNbRangees(int rangees) {
	this->nbRangees = rangees;
}
void DialogueConfiguration::setNbColonnes(int colonnes) {
	this->nbColonnes = colonnes;
}
DialogueConfiguration::~DialogueConfiguration()
{

}
