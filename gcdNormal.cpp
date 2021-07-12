#include<iostream>

using namespace std;

int gcd(int a , int b)
{
    if(a==b) return a;
    else if(a>b) return gcd(a-b,b);
    else if(a<b) return gcd(a,b-a);
}

int main()
{
    int a,b;
    cout<<"Enter two number to find their GCD:"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" are: "<<gcd(a,b)<<endl;
    return 0;
}
