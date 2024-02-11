#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStringListModel>
#include <QMainWindow>
#include <vector>
#include "todo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_saveTodoButton_clicked();

    void on_quitPushButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
    QStringListModel *todosListModel;
    std::vector<Todo*> todos;
    void refreshList();
};
#endif // MAINWINDOW_H
