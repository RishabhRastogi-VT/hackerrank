/*https://www.hackerrank.com/challenges/staircase/problem*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int k=0;
    
    cin >> n;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=n-2;j>=i;j--)
        {
            cout<<" ";
            
            
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"#";
            
        }
        //for()
        
        
        cout<<endl;
        
    }
    
    
    
    return 0;
}
