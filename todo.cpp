#include "todo.h"

Todo::Todo(const QString name, const bool done)
{
    this->name = name;
    this->done = done;
}

Todo::Todo(const QString name)
{
    this->name = name;
    this->done = false;
}

Todo::~Todo()
{

}

QString Todo::getName() const
{
    return this->name;
}

bool Todo::isDone() const
{
    return this->done;
}
