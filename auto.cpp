#include "auto.h"

Auto::Auto(int id, std::string mark, std::string model) {
    this->id = id;
    this->mark = mark;
    this->model = model;
}

int Auto::getId() {
    return this->id;
}

std::string Auto::getMark() {
    return this->mark;
}

std::string Auto::getModel() {
    return this->model;
}

void Auto::setId(int newId) {
    this->id = newId;
}

void Auto::setMark(std::string newMark) {
    this->mark = newMark;
}

void Auto::setModel(std::string newModel) {
    this->model = newModel;
}
