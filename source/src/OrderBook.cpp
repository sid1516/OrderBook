#include "OrderBook.h"

#include <iostream>

void OrderBook::buyOrder(const Order& order) {
    std::cout << " OrderBook::buyOrder" << "\n";
}
void OrderBook::sellOrder(const Order& order) {
    std::cout << " OrderBook::sellOrder" << "\n";
}

 void OrderBook::cancelOrder(int order_id) {
    if(!m_price_map.count(order_id)) return;
    auto [price, o_type] = m_price_map.at(order_id);
    auto& bid_or_ask_ref = (o_type ==  OrderType::BUY) ? m_bids : m_asks;
    auto level_it = bid_or_ask_ref.find(price);
    auto& price_lvl = level_it -> second;
    auto order_it = price_lvl.id_map[order_id];
    price_lvl.orders.erase(order_it);
    price_lvl.id_map.erase(order_id);
    if(price_lvl.orders.empty()) {
        bid_or_ask_ref.erase(level_it);
    }
    m_price_map.erase(order_id);
 }