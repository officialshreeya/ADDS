#include "Human.h"
using namespace std;
Human::Human( string playerName):name(playerName){}
char Human::makeMove(){ //char 4 RSP movemnts
    char move;
    cin>>move;
    return move;
}
string Human::getName(){
    return name;
}