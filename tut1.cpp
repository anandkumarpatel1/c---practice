#include <iostream>
using namespace std;
int fun = 87;
int main()
{
    int a = 5;
    char c = 'a';
    float f = 1.3;
    bool b = true;
    cout << "The value of int is " <<a<< ".\nThe value of char is " <<c<< ".\nThe value of float is " <<f<< ".\nThe value of bool is "<<b<<".\nThe value of global int is "<<fun<<".\n";
    return 0;
}