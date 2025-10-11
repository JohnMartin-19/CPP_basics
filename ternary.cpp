#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    a = 5;
    b = 7;
    c = (a>b) ? a:b; // evaluates whichever is the greatest

    cout << c << '\n';
}