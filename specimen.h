#ifndef SPECIMEN_H
#define SPECIMEN_H

#include <kebab.h>


class Specimen : public QObject
{
    Q_OBJECT
    //QML_NAMED_ELEMENT("Specimen")

public:
    Specimen(QObject *parent = nullptr);
    ~Specimen();

    void changeSauce(Kebab::Sauce sauce);

    Q_INVOKABLE static void yeah() {
        qWarning("pressed!");
    }

private:
    Kebab kebab;
};
#endif // SPECIMEN_H
