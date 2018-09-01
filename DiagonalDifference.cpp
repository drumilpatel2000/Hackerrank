#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int numArray[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>numArray[i][j];
        }
    }
    int primarysum=0;
    for(int i=0;i<n;i++)
    {
       primarysum += numArray[i][i]; 
    }
    int secondarysum=0;
    for(int i=0;i<n;i++)
    {
        secondarysum += numArray[i][n-1-i];
    }
    int diff;
    diff=primarysum-secondarysum;
    if(diff>=0)
    {
        diff=diff;
    }
    else{diff=-diff;}
    cout<<diff;
    }
