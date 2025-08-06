#include <print>

#include "string_constants.cpp"
#include "wheel.cpp"
#include "puzzle_data.cpp"

int main() {
    PuzzleData pd;
    
    std::println();

    std::println("{}", pd.category);
    std::println("{}", pd.puzzle);
    
    std::println();
    return 0;
}