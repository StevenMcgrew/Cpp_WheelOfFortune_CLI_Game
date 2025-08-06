#pragma once

#include <random>

int get_random_integer(int min, int max) {
    // 1. Seed the random number mt19937_engine using std::random_device
    std::random_device rand_device; // Create object of type std::random_device
    unsigned int random_seed_value = rand_device(); // Call its operator() to get a random seed value
    std::mt19937 mt19937_engine(random_seed_value); // Standard Mersenne Twister engine seeded with rand_device()

    // 2. Create a uniform integer distribution for the specified range
    std::uniform_int_distribution<> distribution(min, max); // Distributes results between min and max inclusive

    // 3. Generate and return a random number within the range
    int random_number = distribution(mt19937_engine); // Pass the mt19937_engine to the distribution
    return random_number;
}