#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float i=0,j=0,k=0;
    int n;
    cin>>n;
    int matrix[n];
    for(int a=0;a<n;a++)
    {
        cin>>matrix[a];
    }
    for(int b=0;b<n;b++)
    {
    if(matrix[b]>0)
    {
        i += 1;
    }
    else if(matrix[b]==0)
    {
        j += 1;
    }
    else
    {
         k += 1;
    }
}
    cout<<fixed<<setprecision(6)<<i/n<<endl;
    cout<<fixed<<setprecision(6)<<k/n<<endl;
    cout<<fixed<<setprecision(6)<<j/n<<endl;
}
