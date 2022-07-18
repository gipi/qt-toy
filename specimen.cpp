#include "specimen.h"

Specimen::Specimen(QObject *parent)
    : QObject(parent) , kebab(parent)
{
}

Specimen::~Specimen()
{
}

void Specimen::changeSauce(Kebab::Sauce sauce) {
    this->kebab.setSauce(sauce);
}
