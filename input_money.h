#ifndef INPUT_MONEY_H
#define INPUT_MONEY_H
#include <QString>
#include <QWidget>
#include <QLabel>
#include <QObject>
#include <cstdlib>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
namespace Ui {
class input_money;
}

class input_money : public QWidget
{
    Q_OBJECT

public:
    explicit input_money(QWidget *parent = 0);
    ~input_money();
    int Imoney;
    QString Smoney;


private slots:
    void on_pushButton_clicked();

private:
    Ui::input_money *ui;
    QWidget * Parent;
};

#endif // INPUT_MONEY_H
