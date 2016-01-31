#ifndef CLIFF_H
#define CLIFF_H

#include "policy.h"


class Cliff : public Policy {

  private:
    uint32_t get_slab_class(uint32_t size);
    queue global_lru{};

  public:
    Cliff(uint64_t size) : Policy(size) {}
    ~Cliff();
    bool proc (const request *r);
    uint32_t get_size();



};




#endif
