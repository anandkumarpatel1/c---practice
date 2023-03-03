#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void check();
    void one();
    void show();

public:
    void get();
};

void binary ::get()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    show();
    check();
}

void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "please Enter a correct binary stirng" << endl;
            exit(0);
        }
    }
    one();
}

void binary ::one()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    show();
}

void binary ::show()
{
    cout << "This is your binary String" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary str;
    str.get();

    return 0;
}