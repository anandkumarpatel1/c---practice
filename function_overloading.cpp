#include <iostream>

int volume(int a,int b,int c);
int volume(int a,int b);
int volume(int a);

using namespace std;
int main()
{
    cout<<"Cube side is 2 volume is "<<volume(2)<<endl;
    cout<<"cylinder radius is 7 and height is 7 volume is "<<volume(7,7)<<endl;
    cout<<"cubiod side is 2, 3 and 4 volume is "<<volume(2,3,4)<<endl;

return 0 ;
}

int volume(int a,int b,int c)
{
    int d = (a*b*c);
    return d;
}
int volume(int a,int b)
{
    int d = (3.14 * a *a *b);
    return d;
}
int volume(int a)
{
    int d = (a*a*a);
    return d;
}