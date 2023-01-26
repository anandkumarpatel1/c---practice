#include <iostream>
using namespace std;

// class
class binary
{
private:
    string s;

public:
    int io();
    int check();
    int one_comp();
    int display();
};

// 1st function
int binary ::io()
{
    cout << "Enter your number" << endl;
    cin >> s;
    check();
    one_comp();
    display();
    return 0;
}

// 2nd function
int binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }

    return 0;
}

// 3rd function
int binary ::one_comp()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

// 4th funtion
int binary ::display()
{
    cout<<"This your one's complement binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    return 0;
}

// main function
int main()
{
    binary a1;
    a1.io();
    // a1.check();
    // a1.one_comp();
    // a1.display();

    return 0;
}