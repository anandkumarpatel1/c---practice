#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age == 18)
    {
        cout << "Your age is 18, try next year!" << endl;
    }
    else if (age < 18 && age > 0)
    {
        cout << "Your age is less than 18, so you can not Drive" << endl;
    }
    else if (age > 18 && age <= 70)
    {
        cout << "You are eligble for Drive" << endl;
    }
    else if (age > 70)
    {
        cout << "You are old and not eligble for Drive" << endl;
    }
    else
    {
        cout << "Enter a valid age" << endl;
    }

    return 0;
}