#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    
    getline(cin,s);
    if(s[8]=='p'||s[8]=='P')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]='1';
            s[1]='2';
        }
        else
        {
    	if(s[1]>='8')
    	{
    		s[1]=s[1]-8;
    		s[0]+=2;
		}
		else
		{
			s[1]= s[1]+2;
			s[0]= s[0]+1;
		}
        }
	}
    else
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
	
    
    for(int i=0;i<s.size()-2;i++)
    {
        cout<<s[i];
    }
    
}

