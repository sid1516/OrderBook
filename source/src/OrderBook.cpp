#include <OrderBook.h>

#include <iostream>

void OrderBook::buyOrder(const Order& order) {
    std::cout << " OrderBook::buyOrder" << "\n";
}
void OrderBook::sellOrder(const Order& order) {
    std::cout << " OrderBook::sellOrder" << "\n";
}

 void OrderBook::cancelOrder(int order_id) {
    std::cout << " OrderBook::cancelOrder" << "\n";
 }