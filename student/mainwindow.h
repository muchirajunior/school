#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    int i=1;
    QString student,name;
    QString id,GPA,hours,courses;
    QString students[10]={"john","junior","muchira","james","alex"};
    void details();
    ~MainWindow();

private slots:
    void on_first_clicked();

    void on_last_clicked();

    void on_exit_clicked();

    void on_previous_clicked();

    void on_next_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
