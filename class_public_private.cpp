#include <iostream>
using namespace std;

class in
{
private:
    int a, b, c;

public:
    int d, e;

    void get(int a1, int b1, int c1);
    void put();
};

void in ::get(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void in ::put()
{
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;
    cout << "value of c is " << c << endl;
    cout << "value of d is " << d << endl;
    cout << "value of e is " << e << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    in anand;
    anand.d = 7;
    anand.e = 34;
    anand.get(a, b, c);
    anand.put();

    return 0;
}