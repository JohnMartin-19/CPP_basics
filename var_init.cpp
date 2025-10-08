#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b (2);
    int c {10};
    int result;

    result = a + b + c;
    cout << result;

    return 0;
}