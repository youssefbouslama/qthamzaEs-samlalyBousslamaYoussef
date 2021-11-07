#include "nestedlayout.h"
#include "ui_mainwindow.h"
#include <QWidget>



NestedLayout::NestedLayout(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
}


void NestedLayout::createWidgets(){
    label = new QLabel("Name:");
    line = new QLineEdit();
    search = new QPushButton("Search");
    close = new QPushButton("Close");
    match = new QCheckBox("Match case");
    backword = new QCheckBox("Search Backward");

   layoutP = new QHBoxLayout();
   layoutS = new QVBoxLayout();
    }
void NestedLayout::placeWidgets(){
    auto mainLayout = new QHBoxLayout;
    auto leftLayout = new QVBoxLayout;
    auto topLeftLayout = new QHBoxLayout;
    auto RightLayout = new QVBoxLayout;

    setLayout(mainLayout);
    leftLayout->addLayout(topLeftLayout);
    leftLayout->addWidget(match);
    leftLayout->addWidget(backword);

    topLeftLayout->addWidget(label);
    topLeftLayout->addWidget(line);

    RightLayout->addWidget(search);
    RightLayout->addWidget(close);
    RightLayout->addStretch(1);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(RightLayout);
}

