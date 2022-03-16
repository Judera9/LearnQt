#include "mywindow.h"

MyWindow::MyWindow(QWidget *parent)
    : QMainWindow{parent}
{
    this->title = new QLabel("PacMan", this);
}
