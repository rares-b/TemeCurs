#pragma once
#include "auto.h"
#include <string>

class LKW: public Auto {

private:
    double totalWeight;
    std::string description;

public:
    LKW(double totalWeight, std::string description, int id, std::string mark, std::string model):Auto(id, mark, model) {
        this->totalWeight = totalWeight;
        this->description = description;
    }

    void load() {
        totalWeight++;
    }

    void unload() {
        totalWeight--;
    }

};

