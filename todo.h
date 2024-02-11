#ifndef TODO_H
#define TODO_H

#include <QObject>

class Todo
{
public:
    explicit Todo(const QString name, const bool done);
    explicit Todo(const QString name);
    ~Todo();

    QString getName() const;

    bool isDone() const;

private:
    QString name;
    bool done;
};

#endif // TODO_H
