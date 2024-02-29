#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Game {
private:
    int secretNumber;
public:
    Game() {
        srand(time(0));
        secretNumber = rand() % 100 + 1;
    }

    void play() {
        int attempt = 1;
        int guess;
        bool won = false;

        while (!won) {
            cout << "Guess the number: ";
            cin >> guess;

            if (guess == secretNumber) {
                cout << "Congratulation you won the game in " << attempt << " attempts" <<endl;
                won = true;
            } else if (guess < secretNumber) {
                cout << "Attempt: " << attempt << endl;
                cout << "Guessed number is smaller than computer generated number" << endl;
                attempt++;
            } else {
                cout << "Attempt: " << attempt << endl;
                cout << "Guessed number is greater than computer generated number" << endl;
                attempt++;
            }
        }
    }
};

int main() {
    Game game;
    game.play();
    return 0;
}