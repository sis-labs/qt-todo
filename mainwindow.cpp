#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);
    todosListModel = new QStringListModel(this);
    QStringList list;
    list << "Test 1" << "Test 2" << "Test 3";
    model->setStringList(list);
    //ui->listView->setModel(model);
    ui->treeView->setModel(model);
    ui->comboBox->setModel(model);
    ui->listView->setModel(todosListModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_saveTodoButton_clicked()
{
    QString value = ui->todoInfoInputText->toPlainText();
    bool done = ui->doneCheckBox->isChecked();
    Todo *todo = new Todo(value, done);
    todos.push_back(todo);
    refreshList();
}


void MainWindow::on_quitPushButton_clicked()
{
    QApplication::quit();
}

void MainWindow::refreshList()
{
    QStringList list;
    for(auto i = todos.begin(); i != todos.end(); ++i) {
        QString s = (*i)->getName();
        list << s;
    }
    todosListModel->setStringList(list);
}

