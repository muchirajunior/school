#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSql>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/root/school/school.db");
    student="john";
    if (!mydb.open())
    {
        qDebug()<<"Database not connected !!!!!!!";
    }

    else {
        qDebug()<<"Database connected succesfully ....";

    }



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_first_clicked()
{


    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery query;
    query.exec("select * from '"+students[1]+"'");

    model->setQuery(query);

    ui->tableView->setModel(model);

   query.exec("select name from students where no=1");
   while (query.next()) {
       name=query.value(0).toString();
   }
   query.exec("select id from students where no=1");
   while (query.next()) {
       id=query.value(0).toString();
   }
   query.exec("select courses from students where no=1");
   while (query.next()) {
       courses=query.value(0).toString();
   }
   query.exec("select hours from students where no=1");
   while (query.next()) {
       hours=query.value(0).toString();
   }
   query.exec("select GPA from students where no=1");
   while (query.next()) {
       GPA=query.value(0).toString();
   }

   ui->id->setText(id);
   ui->gpa->setText(GPA);
   ui->hours->setText(hours);
   ui->courses->setText(courses);
   ui->name->setText(name);


}

void MainWindow::on_last_clicked()
{

    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery query,query2,query3;
    query.exec("select * from '"+students[4]+"'");

    model->setQuery(query);

    ui->tableView->setModel(model);
    ui->name->setText(students[4]);

    query2.exec("select name from students where no=5");
    while(query2.next())
    {
        name=query2.value(0).toString();
    }

    query3.exec("select id from students where no=5");
    while(query3.next())
    {
       id=query3.value(0).toString();
    }
    query3.exec("select hours from students where no=5");
    while(query3.next())
    {
       hours=query3.value(0).toString();
    }

    query3.exec("select courses from students where no=5");
    while(query3.next())
    {
       courses=query3.value(0).toString()+" ";
    }

    query3.exec("select GPA from students where no=5");
    while(query3.next())
    {
       GPA=query3.value(0).toString();
    }

    ui->id->setText(id);
    ui->gpa->setText(GPA);
    ui->hours->setText(hours);
    ui->courses->setText(courses);
    ui->name->setText(name);

}

void MainWindow::on_exit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_previous_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    i=i-1;
    QSqlQuery query,query2,query3;
    query.exec("select * from '"+students[i]+"'");

    model->setQuery(query);

    ui->tableView->setModel(model);
    ui->name->setText(students[i]);

    query2.exec("select name from students where name='"+students[i]+"'");
    while(query2.next())
    {
        name=query2.value(0).toString();
    }

    query3.exec("select id from students where name='"+students[i]+"'");
    while(query3.next())
    {
       id=query3.value(0).toString();
    }
    query3.exec("select hours from students where name='"+students[i]+"'");
    while(query3.next())
    {
       hours=query3.value(0).toString();
    }

    query3.exec("select courses from students where name='"+students[i]+"'");
    while(query3.next())
    {
       courses=query3.value(0).toString()+" ";
    }

    query3.exec("select GPA from students where name='"+students[i]+"'");
    while(query3.next())
    {
       GPA=query3.value(0).toString();
    }

    ui->id->setText(id);
    ui->gpa->setText(GPA);
    ui->hours->setText(hours);
    ui->courses->setText(courses);
    ui->name->setText(name);

}

void MainWindow::on_next_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    i=i+1;
    QSqlQuery query,query2,query3;
    query.exec("select * from '"+students[i]+"'");

    model->setQuery(query);

    ui->tableView->setModel(model);
    ui->name->setText(students[i]);

    query2.exec("select name from students where name='"+students[i]+"'");
    while(query2.next())
    {
        name=query2.value(0).toString();
    }

    query3.exec("select id from students where name='"+students[i]+"'");
    while(query3.next())
    {
       id=query3.value(0).toString();
    }
    query3.exec("select hours from students where name='"+students[i]+"'");
    while(query3.next())
    {
       hours=query3.value(0).toString();
    }

    query3.exec("select courses from students where name='"+students[i]+"'");
    while(query3.next())
    {
       courses=query3.value(0).toString()+" ";
    }

    query3.exec("select GPA from students where no='"+students[i]+"'");
    while(query3.next())
    {
       GPA=query3.value(0).toString();
    }

    ui->id->setText(id);
    ui->gpa->setText(GPA);
    ui->hours->setText(hours);
    ui->courses->setText(courses);
    ui->name->setText(name);

}
