#include<iostream>
using namespace std;
int main()
{
    int x1,v1,z=0;
    cin>>x1>>v1;
    int x2,v2;
    cin>>x2>>v2;
    if(v1 != v2){
    if(x1<=x2&&v1>=v2)
    {
    if(((x2-x1)%(v1-v2))==0)
    {
      cout<<"YES";  
    }
    else
    {
        cout<<"NO";
    }
    }
    else if(x1>x2&&v1<v2)
    {
    if(((x1-x2)%(v2-v1))==0)
    {
      cout<<"YES";  
    }
    else
    {
        cout<<"NO";
    }
    }
    else
    {
        cout<<"NO";
    }
}
    else if(v1==v2 && x1==x2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
