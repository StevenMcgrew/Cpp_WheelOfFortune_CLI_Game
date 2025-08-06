#pragma once

#include "utils.cpp"

class Wheel {
    private:
        int wheel_prizes[24] = {(int)NonMonetaryValue::BANKRUPT, 5000, 500, 900, 700,
                                300, 800, 550, 400, 500, 600, 350, 500, 900,
                                (int)NonMonetaryValue::BANKRUPT, 650, 1000, 700,
                                (int)NonMonetaryValue::LOSE_A_TURN, 800, 500, 450, 500, 300};
        
    public:
        enum class NonMonetaryValue {
            BANKRUPT = -1,
            LOSE_A_TURN = -2
        };

        int spin() {
            int random_index = get_random_integer(0, 23);
            return wheel_prizes[random_index];
        }
};