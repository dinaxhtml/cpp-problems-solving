/*
codewars: Rock Paper Scissors!

Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"
*/
#include <iostream>
#include <string>
using namespace std;

string rps(string p1,string p2) {
    string p1won="Player 1 won!";
    string p2won="Player 2 won!";
    string draw="Draw!";
    if(p1==p2)
    return draw;
    if(p1=="scissors") {
        if(p2=="paper") return p1won;
        if(p2=="rock")  return p2won;
    }
    if(p1=="paper") {
        if(p2=="scissors") return p2won;
        if(p2=="rock")  return p1won;
    }
    if(p1=="rock") {
        if(p2=="scissors") return p1won;
        if(p2=="paper")  return p2won;
    }
}

int main() {
    cout<<rps("scissors", "paper")<<endl; //"Player 1 won!"
    cout<<rps("scissors", "rock")<<endl; //"Player 2 won!"
    cout<<rps("paper", "paper")<<endl; //"Draw!"
    return 0;
}