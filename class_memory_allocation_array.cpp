#include <iostream>
using namespace std;

class arr
{
private:
    int n;
    int itemid[100];
    int itemprice[100];
    void show();

public:
    void get();
};

void arr ::get()
{
    cout << "Enter the item number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the item id" << endl;
        cin >> itemid[i];
        cout << "Enter the item price" << endl;
        cin >> itemprice[i];
    }
    show();
}

void arr ::show()
{
    for (int i = 0; i < n; i++)
    {
        cout << "item id is " << itemid[i] << " and item price is " << itemprice[i] << endl;
    }
}

int main()
{
    arr array;
    array.get();
    return 0;
}