/* https://www.hackerrank.com/challenges/divisible-sum-pairs/problem */


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    int c=0;
    int sum=0;
    cin >> n >> k;
    vector<int> a(n);
    
    for(int a_i = 0;a_i < n;a_i++)
    {
        cin >> a[a_i];
    }
    
    
    for(int a_i = 0;a_i < n;a_i++)
    {
        for(int a_j = 0;a_j < n;a_j++)
        {
            if(a_i<a_j)
            {
                sum=a[a_i]+a[a_j];
                
                if(sum%k==0)
                {
                    
                    c++;
                    
                }
            }
        }
        
    }
    cout<<c;
    
    return 0;
}
