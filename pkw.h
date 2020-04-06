#pragma once
#include "auto.h"
#include <string>


class PKW : public Auto {
private:
    std::string options;

public:
    PKW(std::string options, int id, std::string mark, std::string model):Auto(id, mark, model) {
        this->options = options;
    }
};


