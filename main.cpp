#include <print>

#include "puzzle_data.cpp"

using std::println;

int main() {
    PuzzleData pd;
    
    println();

    println("{}", pd.category);
    println("{}", pd.puzzle);
    
    println();
    return 0;
}