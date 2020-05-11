#include "reservierung.h"

Reservierung::Reservierung() {}

Reservierung::Reservierung(Auto car, Client person, int nrDays) {
    this->car = car;
    this->person = person;
    this->nrOfDays = nrDays;
}

Reservierung::~Reservierung() = default;

Client Reservierung::getPerson() {
    return this->person;
}

void Reservierung::setPerson(Client newPerson) {
    this->person = newPerson;
}

Auto Reservierung::getCar() {
    return this->car;
}

void Reservierung::setCar(Auto newCar) {
    this->car = newCar;
}

int Reservierung::getNrOfDays() {
    return this->nrOfDays;
}

void Reservierung::setNrOfDays(int newDays) {
    this->nrOfDays = newDays;
}
