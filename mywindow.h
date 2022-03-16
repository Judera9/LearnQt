#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MyWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = nullptr);
private:
    QLabel *title;
signals:

};

#endif // MYWINDOW_H
