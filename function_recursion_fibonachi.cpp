#include <iostream>

int fab(int a);

using namespace std;
int main()
{
    int a;
    cout << "Enter the position number" << endl;
    cin >> a;
    cout << "The " << a << " term is " << fab(a) << endl;
    return 0;
}

int fab(int a)
{
    int c;
    if (a < 2)
    {
        return 1;
    }
    c = fab(a - 2) + fab(a - 1);
    return c;
}