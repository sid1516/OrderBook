#ifndef PRICELEVEL_H
#define PRICELEVEL_H

#include <list>
#include <unordered_map>
#include "Order.h"

struct PriceLevel{
    std::unordered_map<int, std::list<Order>::iterator> id_map;
    std::list<Order> orders;
};

#endif //PRICELEVEL_H