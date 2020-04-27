#include "auto_controller.h"

Auto AutoController::findAutoById(int id) {
    return repo.findOne(id);
}

vector<Auto> AutoController::findAll() {
    return repo.findAll();
}

Auto AutoController::saveAuto(Auto a) {
    return repo.save(a);
}

Auto AutoController::updateAuto(Auto a) {
    return repo.update(a);
}

Auto AutoController::deleteAuto(int id) {
    return repo.del(id);
}
