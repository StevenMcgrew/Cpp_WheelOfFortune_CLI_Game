#include <print>

#include "string_constants.cpp"
#include "wheel.cpp"

int main() {
    Wheel wheel;
    int prize = wheel.spin();
    std::println();

    switch (prize)
    {
    case (int)Wheel::NonMonetaryValue::BANKRUPT:
        std::println("The wheel landed on BANKRUPT");
        break;
    case (int)Wheel::NonMonetaryValue::LOSE_A_TURN:
        std::println("The wheel landed on LOSE A TURN");
        break;
    default:
        std::println("The wheel landed on {}", prize);
    }
    
    std::println();
    return 0;
}