#include "auto.h"
#include "client.h"
#include <vector>

class Rental {
private:
    std::vector<Client> clients;
    std::vector<Auto> autos;

public:
    void addClient(Client c);
    void deleteClient(Client c);
    void updateClient(Client c, std::string newName);
    void addAuto(Auto a);
    void deleteAuto(Auto a);
};
