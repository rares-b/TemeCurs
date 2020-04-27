#include "crud_repo.h"
#include "auto.h"


class AutoInMemoryRepository : public CrudRepository<Auto> {
private:
    vector<Auto> vehicles;

public:
    Auto findOne(int id);
    vector<Auto> findAll();
    Auto save(Auto entity);
    Auto del(int id);
    Auto update(Auto entity);
    void tests();
};

