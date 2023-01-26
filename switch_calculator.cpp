#include <iostream>
using namespace std;
int main()
{
char operat;
int a,b;
cout<<"Select the operator '+','-','*','/'"<<endl;
cin>>operat;
cout<<"Enter 1st the number"<<endl;
cin>>a;
cout<<"Enter 2nd the number"<<endl;
cin>>b;
switch (operat)
{
case '+':
cout<<"Sum of 1st and 2nd number is: "<<a+b<<endl;
    break;
case '-':
cout<<"Subtract of 1st and 2nd number is: "<<a-b<<endl;
    break;
case '*':
cout<<"Multiplication of 1st and 2nd number is: "<<a*b<<endl;
    break;
case '/':
cout<<"divide of 1st and 2nd number is: "<<a/b<<endl;
    break;

default:
cout<<"Please, Enter a valid operator"<<endl;
    break;
}
return 0 ;
}