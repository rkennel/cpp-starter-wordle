#include <string>
#include <vector>

using namespace std;

class WordleGame {
public:
    static const int INVALID_GUESS;
    WordleGame();
    bool submitGuess(string& guess);
    static bool validateGuess(string& guess);
private:
    vector<string> guess;
    string answer;
};

bool isAlpha(string& guess);

const int WordleGame::INVALID_GUESS=100;

WordleGame::WordleGame(){
    answer="least";
}

bool WordleGame::submitGuess(string &guess) {
    if(!validateGuess(guess)){
        throw INVALID_GUESS;
    }
}

bool WordleGame::validateGuess(string& guess){

    if(guess.length()!=5){
        return false;
    }

    if(!isAlpha(guess)){
        return false;
    }

    return true;
}

bool isAlpha(string& guess){
    for(int i=0;i<guess.length(); i++){
        if(!isalpha(guess[i])){
            return false;
        }
    }

    return true;
}

