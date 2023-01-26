#include <iostream>

int fac(int a);

using namespace std;
int main()
{
    int a;
    cout << "Enter the number which you want factorial" << endl;
    cin >> a;
    cout<<"the factorial of "<<a<< " is: "<<fac(a)<<endl;
    return 0;
}

int fac(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }

    int c = a * fac(a - 1);
    return c;
}
