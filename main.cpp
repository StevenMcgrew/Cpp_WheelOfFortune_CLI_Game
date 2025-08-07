#include <print>

#include "puzzle_data.cpp"

using std::println;

int main() {
    PuzzleData pd;
    
    println();

    println("Category: {}", pd.category);
    println("Puzzle: {}", pd.puzzle);
    println("Puzzle state: {}", pd.puzzle_state);
    
    println();
    return 0;
}