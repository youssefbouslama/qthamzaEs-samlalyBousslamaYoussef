#include "bugreport.h"
#include <QWidget>
#include <QLayout>
#include <QFormLayout>
#include <QApplication>
#include <QVBoxLayout>

BugReport::BugReport(QWidget * parent): QWidget(parent){

    //Creatign the widgets
    createWidgets();

    //place Widgets
    placeWidgets();

}

void BugReport::createWidgets()
{
        mainlayout = new QVBoxLayout();


    layout = new QFormLayout;


    line1 = new QLineEdit();
    line2 = new QLineEdit();
    line3 = new QLineEdit();
    line4 = new QLineEdit();
    line5 = new QLineEdit();
    line6 = new QTextEdit();




    buttonbox = new QDialogButtonBox;

}

void
BugReport::placeWidgets()
{
    layout->addRow(tr("&Name:"), line1);
    layout->addRow(tr("&Company:"), line2);
    layout->addRow(tr("&Phone:"), line3);
    layout->addRow(tr("&Email:"), line4);
    layout->addRow(tr("Problem &Title:"), line5);
    layout->addRow(tr("&Summary Information:"),line6);


    combo = new QComboBox;
    combo->addItem(tr("Always"));
    combo->addItem(tr("Sometimes"));
    combo->addItem(tr("Rarely"));
    layout->addRow(tr("&Reproducibility:"),combo);

    buttonbox->addButton(tr("Submit Bug Report"), QDialogButtonBox::AcceptRole);
    buttonbox->addButton(tr("Don't Submit"), QDialogButtonBox::RejectRole);
    buttonbox->addButton(QDialogButtonBox::Reset);




    mainlayout->addLayout(layout);
    mainlayout->addWidget(buttonbox);
    setLayout(mainlayout);

}
