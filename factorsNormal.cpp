#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr;
    int num;
    cin>>num;
    int number=num;
    arr.push_back(1);
    for(int i=2;i<=sqrt(number);i++)
    {
        if(num%i==0){
                if(i!=(num/i)){
            arr.push_back(i);
            arr.push_back(num/i);
                }
                else
                {
                    arr.push_back(i);
                }
        }
    }
    arr.push_back(number);
    int s=arr.size();
    cout<<"Factors of "<<number<<": "<<endl;
    for(int i =0;i<s;i++)
    {
        cout<<arr[i]<<endl;
    }
    arr.clear();
    return 0;
}
