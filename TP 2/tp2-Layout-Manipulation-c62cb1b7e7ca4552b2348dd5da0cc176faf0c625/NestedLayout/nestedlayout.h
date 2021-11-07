#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QBoxLayout>
#include <QCheckBox>


class NestedLayout : public QWidget
{
    Q_OBJECT

public:
    //constructor
    NestedLayout(QWidget *parent = nullptr);

protected:
  void createWidgets();
  void placeWidgets();

private:
  QLabel *label;
  QLineEdit *line;
  QPushButton *search;
  QPushButton *close;
  QCheckBox *match;
  QCheckBox *backword;
  QHBoxLayout *layoutP;
  QVBoxLayout *layoutS;
};
