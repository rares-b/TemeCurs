#include "auto_in_memory.h"
#include <iostream>
#include <cassert>

Auto AutoInMemoryRepository::findOne(int id) {
    int l = vehicles.size();
    for (int i = 0; i < l; i++)
        if (vehicles[i].getId() == id)
            return vehicles[i];
    throw exception();
}

vector<Auto> AutoInMemoryRepository::findAll() {
    return vehicles;
}

Auto AutoInMemoryRepository::save(Auto entity) {
    int l = vehicles.size();
    for (int i = 0; i < l; i++)
        if (entity.getId() == vehicles[i].getId())
        {
            throw exception();
        }
    vehicles.push_back(entity);
    return entity;
}

Auto AutoInMemoryRepository::del(int id) {
    int l = vehicles.size();
    for (int i = 0; i < l; i++)
        if (vehicles[i].getId() == id)
        {
            Auto aux = vehicles[i];
            vehicles.erase(vehicles.begin() + i);
            return aux;
        }
    throw exception();
}

Auto AutoInMemoryRepository::update(Auto entity) {
    int l = vehicles.size();
    for (int i = 0; i < l; i++)
        if (vehicles[i].getId() == entity.getId())
        {
            vehicles[i] = entity;
            return entity;
        }
    throw exception();
}

void AutoInMemoryRepository::tests() {
    CrudRepository<Auto>* p = new AutoInMemoryRepository;

    Auto a1(1, "Opel", "Astra");
    p->save(a1);
    Auto a2(2, "Renault", "Clio");
    p->save(a2);
    Auto a3(3, "McLaren", "Speedtail");
    p->save(a3);
    Auto a4(4, "Ferrari", "Portofino");
    p->save(a4);

    vector<Auto> aux;
    aux = p->findAll();
    for (int i = 0; i < 4; i++)
        aux[i].toString();

    assert(p->findOne(2) == a2);
    p->update(Auto(2, "Peugeot", "206"));
    p->del(1);

    aux = p->findAll();

    cout << '\n';
    for (int i = 0; i < aux.size(); i++)
        aux[i].toString();

    delete p;

    cout << "\nTeste complete!\n";
}
