#include<iostream>
using namespace std;
int main()
{
    int n,k,z=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=a[i]+a[j];
            if(sum%k==0)
            {
                z += 1;
            }
            
        }
    }
    cout<<z;
}
