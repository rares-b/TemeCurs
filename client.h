#pragma once
#include <string>

class Client {

private:
    int id;
    std::string name;

public:
    Client();
    Client(int id, std::string name);

    int getId();
    std::string getName();

    void setId(int newId);
    void setName(std::string newName);

};
