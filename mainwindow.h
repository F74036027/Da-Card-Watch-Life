#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "input_money.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int money;
    QString showmoney;


private slots:

    void on_library_clicked();

    void on_garbage_clicked();

    void on_ground_clicked();

    void on_foreat_clicked();


private:
    Ui::MainWindow *ui;
    input_money * a;
};

#endif // MAINWINDOW_H
