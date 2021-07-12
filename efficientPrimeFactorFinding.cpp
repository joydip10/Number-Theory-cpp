// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;
int pc[1000001];
int p[1000001];
// A function to print all prime
// factors of a given number n
void primeFactors(int n)
{
    int num=n;
    int i =0;
    memset(pc,0,sizeof(pc));
    cout<<1<<" ";
    pc[1]=1;
	// Print the number of 2s that divide n
	int count = 0;
	while (n % 2 == 0)
	{
	    if(count==0){
		cout << 2 << " ";
	    }
		count++;
		pc[2]=count;
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		int count =0;
		while (n % i == 0)
		{
		    if(count==0){
			cout << i << " ";
		    }
			n = n/i;
			count++;
			pc[i]=count;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		cout << n << " ";
		pc[n]++;
}

/* Driver code */
int main()
{
	int n = 19;
	cout<<"Prime factors of "<<n<<" are: ";
	primeFactors(n);
	cout<<endl<<endl;
	for(int i =1;i<=n/2;i++)
    {
        if(pc[i]!=0)
        {
            cout<<"Prime"<<" "<<i<<" repeating "<<pc[i]<<" times"<<endl;
        }
        else continue;
    }
    if(pc[n]!=0) cout<<"Prime"<<" "<<n<<" repeating "<<pc[n]<<" times"<<endl;
	return 0;
}

// This is code is contributed by rathbhupendra
