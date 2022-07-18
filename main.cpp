#include "specimen.h"

/* see <https://doc.qt.io/qt-6/qtquick-deployment.html> */
#include <QGuiApplication>
#include <QtQml/QQmlEngine>

#include <QApplication>


/*
 * https://code.qt.io/cgit/qt/qtquickcontrols2.git/tree/examples/quickcontrols2/contactlist/main.cpp?h=5.15
 */
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<Specimen>("miao", 1, 0, "Specimen");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/ui.qml")));

    /*Specimen w;

    w.changeSauce(Kebab::Sauce::Spicy);*/

    return app.exec();
}
