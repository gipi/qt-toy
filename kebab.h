#ifndef KEBAB_H
#define KEBAB_H

#include <QObject>
#include <QtQml>


class Kebab : public QObject
{
    Q_OBJECT
    /* Note: yo have to define everything inside here */
    Q_PROPERTY(Sauce sauce READ sauce WRITE setSauce NOTIFY sauceChanged)
    QML_ELEMENT

public:
    explicit Kebab(QObject *parent = nullptr);

    enum Sauce {None, Spicy};
    Q_ENUM(Sauce);

    void setSauce(Sauce sauce) {
        m_sauce = sauce;
        emit sauceChanged(sauce);
    }

    Sauce sauce() const {
        return m_sauce;
    }

signals:
    void sauceChanged(Sauce);

private:

    Sauce m_sauce;
};

#endif // KEBAB_H
