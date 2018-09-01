#include<iostream>
using namespace std;
int gcd(int a,int b )
{
	int t,r;
	
	for(;;)
	{
		r=a%b;
		if(r==0)
		{
			t=b;
			break;
		}
		a=b;
		b=r;
		
		
	}
	return t;
}
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
int lcm1(int n,int a[])
{
	int l=a[0];
	for(int i=0;i<n;i++)
	{
		l=lcm(l,a[i]);
	}
	return l;
}
int gcd1(int n,int a[])
{

	int g=a[0];
	for(int i=0;i<n;i++)
	{
		g=gcd(g,a[i]);
		
	}
	return g;
}
int main()
{
	int n,m,pro=1;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<m;i++)
	{
		pro*=a[i];
	}
	int l=lcm1(m,a);
	int g=gcd1(n,b);
    int k,x=0;
	for(int i=1;i<=g/l;i++)
    {
        k=l*i;
        if(g%k==0)
        {
            x++;
        }
    }
    cout<<x;
}


