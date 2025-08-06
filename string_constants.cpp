#include <string_view>

using std::string_view;

constexpr string_view TITLE = R"(
   __    __ __ __   ___   ___ _               
  |  |__|  |  |  | /  _] /  _] |              
  |  |  |  |  |  |/  [_ /  [_| |              
  |  |  |  |  _  |    _]    _] |___           
  |  `  '  |  |  |   [_|   [_|     |          
   \      /|  |  |     |     |     |          
    \_/\_/_|__|__|_____|_____|_____|          
   /   \|     |                               
  |     |   __|                               
  |  O  |  |_                                 
  |     |   _]                                
  |     |  |                                  
   \___/|__|_  ____  ______ __ __ ____    ___ 
  |     |/   \|    \|      |  |  |    \  /  _]
  |   __|     |  D  )      |  |  |  _  |/  [_ 
  |  |_ |  O  |    /|_|  |_|  |  |  |  |    _]
  |   _]|     |    \  |  | |  :  |  |  |   [_ 
  |  |  |     |  .  \ |  | |     |  |  |     |
  |__|   \___/|__|\_| |__|  \__,_|__|__|_____|
)";

constexpr string_view INTRO_OPTIONS = R"(

    1) Start game
    2) Instructions
    3) Exit
)";

constexpr string_view INVALID_INPUT_WARNING = "    Invalid input. Please enter a number from the options given.";

constexpr string_view GAMEPLAY_OPTIONS = R"(
    1) Spin the wheel
    2) Buy a vowel for $250
    3) Solve the puzzle
    4) Exit game)";

constexpr string_view GOODBYE_MESSAGE = R"(    Thanks for playing! Goodbye.
)";

constexpr string_view GAME_INSTRUCTIONS = R"(
  INSTRUCTIONS

    This simplified version of the game show 'Wheel of Fortune' features
    contestants who compete to solve word puzzles. The goal is to amass the
    most money by solving word puzzles after three rounds. A large wheel,
    spun by each contestant in turns, denotes dollar amounts awarded for
    correctly guessing a letter within the word puzzle.


  Basics of the Game:

    In Wheel of Fortune, contestants compete during three rounds to solve
    hangman-type word puzzles. At the beginning of each round, contestants are
    given the category of the word puzzle such as a phrase, person, place or
    object, and the word puzzle consists of blank spaces they must fill in
    with the correct letters. Contestants take turns to either spin the wheel
    and guess a consonant, buy vowels from their earned winnings or solve the
    puzzle. At the end of three rounds, the contestant with the most money
    becomes the winner.


  Wheel Spin:

    In addition to the dollar amounts on the wheel, contestants can also land
    on BANKRUPT (which means the contestant loses all their money and loses
    their turn), or they can land on LOSE A TURN (which is self explanatory).
)";