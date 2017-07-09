/* https://www.hackerrank.com/challenges/time-conversion/problem */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    int l=0;
    int carry=0;
    l=time.length();
    for(int i=0;i<3;i++)
    {
        if(time[l-2]=='P')
        {
            
            
            if(time[i]==':')
            {
                time[i-1]=time[i-1]+2;
                
                if(time[i-1]>'9')
                {
                    carry=1;
                    
                }
                else if(time[i-1]<='9')
                {
                    carry=0;
                }
                
                time[i-2]=time[i-2]+1+carry;
                
                if(time[i-1]=='4' && time[i-2]=='2')
                {
                    time[i-1]='2' ;
                    time[i-2]='1';
                }
                
            }
        }
        
        else if(time[l-2]=='A' && time[i-1]=='2' && time[i-2]=='1')
        {
            time[i-1]='0' ; time[i-2]='0';
        }
    }
    
    for(int k=0;k<(l-2);k++)
    {
        cout<<time[k];
        
    }
    return 0;
}
