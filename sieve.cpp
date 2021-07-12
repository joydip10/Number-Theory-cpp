#include<bits/stdc++.h>
using namespace std;
bool sieve(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i = 2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j =i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    if(prime[n]==true) return true;
    else return false;
}
bool isPrime(int n)
{
    if(sieve(n)== true) return true;
    else return false;
}
int main()
{
    int num;
    cin>>num;
    if(isPrime(num)==true) cout<<"It is a prime number"<<endl;
    else cout<<"It is not a prime number"<<endl;

    return 0;
}
