#include "client.h"

Client::Client(int id, std::string name) {
    this->id = id;
    this->name = name;
}

int Client::getId() {
    return this->id;
}

std::string Client::getName() {
    return this->name;
}

void Client::setId(int newId) {
    this->id = newId;
}

void Client::setName(std::string newName) {
    this->name = newName;
}
