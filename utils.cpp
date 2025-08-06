#pragma once

#include <random>

using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

int get_random_integer(int min, int max) {
    random_device _random_device; // Create object of type std::random_device
    unsigned int random_seed_value = _random_device(); // Call its operator() to get a random seed value
    mt19937 mt19937_engine(random_seed_value); // Standard Mersenne Twister engine seeded with _random_device()
    uniform_int_distribution<> distribution(min, max); // Distributes results between min and max inclusive
    int random_integer = distribution(mt19937_engine); // Pass the mt19937_engine to the distribution
    return random_integer;
}