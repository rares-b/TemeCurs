#pragma once
#include <string>

class Auto {
private:
    int id;
    std::string mark, model;

public:
    Auto();
    Auto(int id, std::string mark, std::string model);

    int getId();
    std::string getMark();
    std::string getModel();

    void setId(int id);
    void setMark(std::string mark);
    void setModel(std::string model);

    void toString();
    bool operator==(Auto a1);

};
