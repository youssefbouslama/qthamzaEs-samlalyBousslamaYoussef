
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QLayout>
#include <QSpinBox>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QComboBox>
#include <QTextEdit>

class BugReport: public QWidget{
  Q_OBJECT


public:
    BugReport(QWidget * parent = nullptr);


protected:
    void createWidgets();
    void placeWidgets();


protected:
    QVBoxLayout * mainlayout;

    QFormLayout *layout;

    QLineEdit * line1;
    QLineEdit * line2;
    QLineEdit * line3;
    QLineEdit * line4;
    QLineEdit * line5;
    QTextEdit * line6;

    QComboBox * combo;


    QVBoxLayout * v1layout;
    QVBoxLayout * vlayout;



    QDialogButtonBox * buttonbox;



};


