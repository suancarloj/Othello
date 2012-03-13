#include "othello.h"

Othello::Othello(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	ui.centralwidget->setVisible(false);

	this->creerAction();
}

void Othello::creerAction() {
	connect(ui.action_Quitter, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
	connect(ui.action_Nouveau, SIGNAL(triggered(bool)), this, SLOT(nouvellePartie()));
	connect(ui.action_Fermer, SIGNAL(triggered(bool)), this, SLOT(fermerPartie()));
	connect(ui.action_Texte, SIGNAL(triggered(bool)), this, SLOT(observateurTexte()));
	connect(ui.action_Expert, SIGNAL(triggered(bool)), this, SLOT(observateurExpert()));
	connect(ui.actionA_ide, SIGNAL(triggered(bool)), this, SLOT(afficherAide()));
	connect(ui.actionA_uteur, SIGNAL(triggered(bool)), this, SLOT(afficherAuteur()));
}
void Othello::nouvellePartie() {
	DialogueConfiguration dialogueConfiguration((QWidget *) this);
	int retour = dialogueConfiguration.exec();

	if(retour == QDialog::Rejected) return;

	ui.centralwidget->setVisible(true);
	ui.menu_Observateur->setEnabled(true);
	ui.action_Nouveau->setDisabled(true);
	ui.action_Fermer->setEnabled(true);
}

void Othello::fermerPartie() {
	ui.action_Nouveau->setEnabled(true);
	ui.action_Fermer->setDisabled(true);
}
void Othello::observateurTexte() {

}
void Othello::observateurExpert() {

}
void Othello::afficherAide() {
	QString titre("Aide Othello");
	QString corps("aide ici");

	QMessageBox::information(this, titre, corps);
}
void Othello::afficherAuteur() {
	QString titre("Auteur");
	QString corps = "<html>";
	corps += "Hello world !";
	corps += "</html>";

	QMessageBox(QMessageBox::NoIcon, titre, corps, QMessageBox::NoButton, this).exec();
}
void Othello::decocherMenuProposition() {

}
Othello::~Othello()
{

}
