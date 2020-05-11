#include "rental.h"

Rental::Rental() = default;

Rental::~Rental() = default;

void Rental::reserveAuto(Auto car, Client person, int nrOfDays) {
    Reservierung reservation(car, person, nrOfDays);

    this->reservations.push_back(reservation);
}
