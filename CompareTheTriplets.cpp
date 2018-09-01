#include<iostream>
using namespace std;
int main()
{
    int scoreAlice[3];
    int scoreBob[3];
    for(int i=0;i<3;i++)
    {
        cin>>scoreAlice[i];
    }
    
    for(int i=0;i<3;i++)
    {
        cin>>scoreBob[i];
    }
    int grade[2];
    grade[0]=0;
    grade[1]=0;
    for(int i=0;i<3;i++)
    {
        if(scoreAlice[i]>scoreBob[i])
        {
            grade[0] += 1;
        }
        else if(scoreBob[i]>scoreAlice[i])
        {
            grade[1] += 1;
        }
    }
   for(int i=0;i<2;i++)
   {
       cout<<grade[i]<<" ";
   }
        
}
