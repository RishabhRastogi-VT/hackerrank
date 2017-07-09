//https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int diff=0;
    int sum1=0;
    int sum2=0;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++)
    {
        for(int a_j = 0;a_j < n;a_j++)
        {
            cin >> a[a_i][a_j];
        }
    }
    for(int a_i = 0;a_i < n;a_i++)
    {
        for(int a_j = 0;a_j < n;a_j++)
        {
            if(a_i==a_j && a_i+a_j!=n-1 )
            {
                sum1=sum1+a[a_i][a_j];
            }
            else if(a_i+a_j==n-1 && a_i!=a_j)
            {
                sum2=sum2+a[a_i][a_j];
            }
        }
    }
    
    if(sum2>sum1)
    {
        diff=sum2-sum1;
    }
    else if(sum2<=sum1)
    {
        diff=sum1-sum2;
    }
    cout<<diff;
    
    return 0;
}
