#ifndef OTHELLO_H
#define OTHELLO_H

#include <QMainWindow>
#include <QMessageBox>
#include "ui_othello.h"
#include "DialogueConfiguration.h"

class Othello : public QMainWindow
{
    Q_OBJECT

public:
    Othello(QWidget *parent = 0);
    void creerAction();
    ~Othello();

private:
    Ui::OthelloClass ui;

private slots:
	void nouvellePartie();
	void fermerPartie();
	void observateurTexte();
	void observateurExpert();
	void afficherAide();
	void afficherAuteur();
	void decocherMenuProposition();
};

#endif // OTHELLO_H
