//#include "auto.h"
//#include "client.h"
#include "reservierung.h"
#include <vector>

class Rental {
private:
    std::vector<Reservierung> reservations;

public:
    Rental();
    ~Rental();
    void reserveAuto(Auto, Client, int);
};
