#include "mainwindow.h"
#include "mywindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "LearnQt_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MyWindow w;
    QPushButton but("Close", &w);
    but.setGeometry(10, 10, 100, 50);
    QObject::connect(&but, &QPushButton::clicked,&w, &QWidget::close);
    w.show();
    return a.exec();
}
