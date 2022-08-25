#include "gtest/gtest.h"
#include "../src/wordle.cpp"
#include <string>

using namespace std;

TEST(SubmitGuess, InvalidGuessThrowsAnException){
    WordleGame newGame;
    try{
        string guess = "Invalid Guess";
        newGame.submitGuess(guess);
        FAIL();
    } catch(int e){
        ASSERT_EQ(e,WordleGame::INVALID_GUESS);
    }

}

TEST(GuessValidation, LengthCannotBeGreaterThan5) {
    string guess = "WORDLE";
    ASSERT_FALSE(WordleGame::validateGuess(guess));
}

TEST(GuessValidation, LengthCannotBeLessThan5) {
    string guess = "WORD";
    ASSERT_FALSE(WordleGame::validateGuess(guess));
}

TEST(GuessValidation, LengthMustBe5) {
    string guess = "WORDY";
    ASSERT_TRUE(WordleGame::validateGuess(guess));
}

TEST(GuessValidation, CannotContainSymbols) {
    string guess = "GUE$$";
    ASSERT_FALSE(WordleGame::validateGuess(guess));
}

TEST(GuessValidation, CannotContainNumbers) {
    string guess = "GU3SS";
    ASSERT_FALSE(WordleGame::validateGuess(guess));
}