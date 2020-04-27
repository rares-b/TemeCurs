#include "auto_in_memory.h"

class AutoController {
private:
    AutoInMemoryRepository repo;

public:
    Auto findAutoById(int id);
    vector<Auto> findAll();
    Auto saveAuto(Auto a);
    Auto updateAuto(Auto a);
    Auto deleteAuto(int id);
};
