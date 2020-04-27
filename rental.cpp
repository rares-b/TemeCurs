#include "rental.h"

void Rental::addClient(Client c) {
    if(clients.empty()) {
        clients.push_back(c);
        return;
    }
    for(auto i=clients.begin(); i!=clients.end(); ++i) {
        if(i->getId() == c.getId()) {
            return;
        }
    }
    clients.push_back(c);
}

void Rental::deleteClient(Client c) {
    if(clients.empty())
        return;
    for(auto i=clients.begin(); i!=clients.end(); ++i) {
        if (i->getId() == c.getId()) {
            clients.erase(i);
            return;
        }
    }
}

void Rental::updateClient(Client c, std::string newName) {
    if (clients.empty())
        return;
    for(auto i=clients.begin(); i!=clients.end(); ++i) {
        if(i->getId() == c.getId()) {
            i->setName(newName);
        }
    }
}

void Rental::addAuto(Auto a) {
    if(autos.empty()) {
        autos.push_back(a);
        return;
    }
    for(auto i=autos.begin(); i!=autos.end(); ++i) {
        if(i->getId() == a.getId()) {
            return;
        }
    }
    autos.push_back(a);
}

void Rental::deleteAuto(Auto a) {
    if(autos.empty())
        return;
    for(auto i=autos.begin(); i!=autos.end(); ++i) {
        if (i->getId() == a.getId()) {
            autos.erase(i);
            return;
        }
    }
}

