#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main()
{
    int arr[4]={12,6};
    int a = arr[0];
    for(int i =0;i<2;i++)
    {
        a=gcd(a,arr[i]);
    }
    cout<<"GCD: "<<a<<endl;
    return 0;
}
