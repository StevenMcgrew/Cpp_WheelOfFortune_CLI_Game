#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "utils.cpp"

class PuzzleData {
    public:
        std::string puzzle;
        std::string category;
        std::string puzzle_state;
        int amount_complete;
        std::vector<std::unordered_map<std::string, std::string>> puzzles = {
            {
                {"category", "SHOW BIZ"},
                {"puzzle", "THEATER CURTAIN"}
            },
            {
                {"category", "EVENT"},
                {"puzzle", "STUNNING LAST-SECOND VICTORY"}
            },
            {
                {"category", "PHRASE"},
                {"puzzle", "THE PRESSURE IS ON"}
            },
            {
                {"category", "SAME NAME"},
                {"puzzle", "POKER AND TORTILLA CHIPS"}
            },
            {
                {"category", "FOOD AND DRINK"},
                {"puzzle", "THE BEST PRETZEL EVER"}
            },
            {
                {"category", "LIVING THING"},
                {"puzzle", "LABRADOR RETRIEVER"}
            },
            {
                {"category", "PERSON"},
                {"puzzle", "PRIME MINISTER"}
            },
            {
                {"category", "WHAT ARE YOU DOING?"},
                {"puzzle", "WALKING THE DOG"}
            },
            {
                {"category", "PLACE"},
                {"puzzle", "ONE-OF-A-KIND LOCATION"}
            },
            {
                {"category", "THING"},
                {"puzzle", "THE SPIRIT OF ADVENTURE"}
            },
        };

        PuzzleData() {
            set_random_puzzle();
        }

        void set_random_puzzle() {
            int max_index = puzzles.size() - 1;
            int rand_index = get_random_integer(0, max_index);
            std::unordered_map<std::string, std::string> rand_puzzle = puzzles[rand_index];
            category = rand_puzzle["category"];
            puzzle = rand_puzzle["puzzle"];
        }

        void set_initial_puzzle_state() {

        }


};