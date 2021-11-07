#ifndef GRIDLAYOUT_H
#define GRIDLAYOUT_H

#include <QtWidgets>

#pragma once
namespace Ui {
class calculator;
}
class GridLayout : public QWidget
{

public:
  //constructor
    explicit GridLayout(QWidget *parent = nullptr);
    void creatingWdgets();
    void positionWidgets();
    void makeConnections();
private:
  QPushButton *buttons[10];
  QPushButton *bEnter;
  QLCDNumber *lcd;
  QVBoxLayout *mainLayout;
  QGridLayout *grid;
};
#endif // GRIDLAYOUT_H
