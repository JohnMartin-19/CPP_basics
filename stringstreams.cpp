/////string stream listening to Lil Uzi Vert - M00D
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){
    string myString;
    float price = 0;
    int quantity = 0;

    cout << "Enter price:";
    getline(cin, myString);
    stringstream(myString) >> price;

    cout << "Enter the quantity: ";
    getline(cin, myString);
    stringstream(myString) >> quantity;
    cout << "Total :" << price*quantity << endl;
}