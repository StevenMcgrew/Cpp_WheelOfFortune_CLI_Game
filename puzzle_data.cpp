#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "utils.cpp"

using std::string;
using std::vector;
using std::unordered_map;

typedef unordered_map<string, string> Map_str_str;

class PuzzleData {
    public:
        string puzzle;
        string category;
        string puzzle_state;
        int amount_complete;
        vector<Map_str_str> puzzles = {
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
            set_initial_puzzle_state();
        }

        void set_random_puzzle() {
            int last_index = puzzles.size() - 1;
            int random_index = get_random_integer(0, last_index);
            Map_str_str random_puzzle = puzzles[random_index];
            category = random_puzzle["category"];
            puzzle = random_puzzle["puzzle"];
        }

        void set_initial_puzzle_state() {
            puzzle_state = puzzle;
            int puzzle_length = puzzle.length();
            for (int i = 0; i < puzzle_length; ++i) {
                switch (puzzle[i]) {
                    case '-': puzzle_state[i] = '-'; break;
                    case ' ': puzzle_state[i] = ' '; break;
                    default: puzzle_state[i] = '*';
                }
            }
        }


};