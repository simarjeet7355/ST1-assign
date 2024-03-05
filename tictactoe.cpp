#include<iostream>
using namespace std;
class TicTacToe {
private:
    char square[10];
    int checkwin();
    void board();

public:
    TicTacToe() {
        for(int i = 0; i < 10; i++) {
            square[i] = (i + '0');
        }
    }

    void playGame() {
        int player = 1, i, choice;
        char mark;
        
        do{
            board();
            player = (player%2) ? 1 : 2;
            cout << "player "<< player<<" - enter the number: ";
            cin>>choice;
            mark = (player == 1) ?'X':'O';

            if(choice == 1 && square[1] == '1')
            square[1] = mark;

            else if(choice == 2 && square[2] == '2')
            square[2] = mark;

            else if(choice == 3 && square[3] == '3')
            square[3] = mark;

            else if(choice == 4 && square[4] == '4')
            square[4] = mark;

            else if(choice == 5 && square[5] == '5')
            square[5] = mark;

            else if(choice == 6 && square[6] == '6')
            square[6] = mark;

            else if(choice == 7 && square[7] == '7')
            square[7] = mark;

            else if(choice == 8 && square[8] == '8')
            square[8] = mark;

            else if(choice == 9 && square[9] == '9')
            square[9] = mark;

            else{
                cout<<"INVALID MOVE !";
                player--;
                cin.ignore();
                cin.get();
            }
            i = checkwin();
            player++;
        } while(i == -1);
        board();
        if(i == 1)
        cout<<"\nCONGRATS PLAYER "<<--player<<" YOU WON THE GAME!";
        else
        cout<<"\n GAME DRAW!";
        cin.ignore();
        cin.get();
    }
};

int TicTacToe::checkwin(){
    if(square[1] == square[2] && square[2] == square[3] && square[1] != ' ') 
    return 1;

    else if(square[4] == square[5] && square[5] == square[6] && square[4] != ' ') 
    return 1;

    else if(square[7] == square[8] && square[8] == square[9] && square[7] != ' ') 
    return 1;

    else if(square[1] == square[4] && square[4] == square[7] && square[1] != ' ') 
    return 1;

    else if(square[2] == square[5] && square[5] == square[8]&& square[2] != ' ') 
    return 1;

    else if(square[3] == square[6] && square[6] == square[9] && square[3] != ' ') 
    return 1;

    else if(square[1] == square[5] && square[5] == square[9] && square[1] != ' ') 
    return 1;

    else if(square[3] == square[5] && square[5] == square[7] && square[3] != ' ') 
    return 1;

    else if(square[1]!= '1' && square[2]!= '2' && square[3]!= '3' 
            && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' 
             && square[7]!= '7' && square[8]!= '8' && square[9]!= '9'){
        return 0;
    }
    else{
        return -1;
    }
}

void TicTacToe::board(){
    cout<< "\nTIC TAC TOE GAME\n\n";
    cout<< "player 1(X) - player 2(O)"<<endl <<endl;
    cout<<endl;
    cout<< "     |      |     "<<endl;

    cout<< "   "<<square[1]<< " |   "<<square[2]<<"  |   "<<square[3]<<endl;

    cout<< "_____|______|_____"<<endl;
    cout<< "     |      |     "<<endl;

    cout<< "   "<<square[4]<< " |   "<<square[5]<<"  |   "<<square[6]<<endl;

    cout<< "_____|______|_____"<<endl;
    cout<< "     |      |     "<<endl;

    cout<< "   "<<square[7]<< " |   "<<square[8]<<"  |   "<<square[9]<<"\n";

    cout<< "     |      |     "<<endl;
}

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}