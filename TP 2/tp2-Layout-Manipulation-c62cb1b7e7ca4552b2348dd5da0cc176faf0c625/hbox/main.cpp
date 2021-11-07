#include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new QWidget();
  window->setWindowTitle("QHBoxLayout Test");
  window->resize(300,50);
  auto layout = new QHBoxLayout;
  window->setLayout(layout);
  auto label = new QLabel("Name:");
  label->show();
  auto text = new QLineEdit;
  auto button = new QPushButton("Search");
  layout->addWidget(label);
  layout->addWidget(text);
  layout->addWidget(button);




  window->show();

  return app.exec();
}

