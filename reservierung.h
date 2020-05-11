#include "auto.h"
#include "client.h"

class Reservierung {
private:
    Client person;
    Auto car;
    int nrOfDays;

public:
    Reservierung();
    Reservierung(Auto, Client, int);
    ~Reservierung();

    Client getPerson();
    void setPerson(Client);
    Auto getCar();
    void setCar(Auto);
    int getNrOfDays();
    void setNrOfDays(int);

};