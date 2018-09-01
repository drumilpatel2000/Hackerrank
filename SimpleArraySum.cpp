#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int numArray[n];
    for(int i=0;i<n;i++)
    {
        cin>>numArray[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += numArray[i];
    }
    cout<<sum;
}
