//https://www.hackerrank.com/challenges/compare-the-triplets/problem

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
    int a0;
    int a1;
    int a2;
    
    int bob=0;
    int alice=0;
    
    cin >> a0 >> a1 >> a2;
    int a[3]={a0,a1,a2};
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int b[3]={b0,b1,b2};
    for(int i=0;i<3;i++)
    {
        if(a[i]<b[i])
        {
            bob++;
        }
        else if(a[i]>b[i])
        {
            alice++;
        }
    }
    cout<<alice;
    cout<<" ";
    cout<<bob;
    return 0;
}
