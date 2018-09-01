#include<iostream>
using namespace std;
int main()
{
   long int n;
    cin>>n;
   long int numArray[n];
    for(int i=0;i<n;i++)
    {
        cin>>numArray[i];
    }
   long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += numArray[i];
    }
    cout<<sum;
}
