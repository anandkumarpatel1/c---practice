#include <iostream>
using namespace std;

class number
{
private:
    int a, b, c;

public:
    int d, e;

    int get_pri(int a1, int b1, int c1);
    int show_data();
};

int number ::get_pri(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
    return 0;
}
int number ::show_data()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c is " << c << endl;
    cout << "the value of d is " << d << endl;
    cout << "the value of e is " << e << endl;
}
int main()
{
    number lucky ;
    lucky.d = 8;
    lucky.e = 9;
    lucky.get_pri(5,6,7);
    lucky.show_data();
    
    return 0;
}