#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <Order.h>
#include <PriceLevel.h>

#include <map>

/**
 * @class OrderBook
 * @brief Manages the order book for handling buy and sell orders.
 */
class OrderBook {
    private:
        std::map<double, PriceLevel> m_bids;  ///< Bid price levels
        std::map<double, PriceLevel> m_asks;  ///< Ask price levels
        std::unordered_map<int, double> m_price_map;  ///< Maps order IDs to prices
    public:
        /**
         * @brief Handles a buy order.
         * @param order The buy order to be processed.
         */
        void buyOrder(const Order& order);

        /**
         * @brief Handles a sell order.
         * @param order The sell order to be processed.
         */
        void sellOrder(const Order& order);

        /**
         * @brief Cancels an order given its ID.
         * @param order_id The ID of the order to be canceled.
         */
        void cancelOrder(int order_id);
};

#endif // ORDERBOOK_H