//// cin with strings - while listening to Lil Uzi Vert - luv sacrs
#include <iostream>
#include <string>
using namespace std;

int main(){
    string myString;
    cout<< "What is your name? ";
    getline(cin, myString);
    cout << "Hello" << myString << ".\n";
    cout<< "What is your favourite team?";
    getline(cin, myString);
    cout << "I like" << myString << "too!.\n";
}