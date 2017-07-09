/*https://www.hackerrank.com/challenges/plus-minus/problem*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pos=0;
    float neg=0;
    float zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
        cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
        if(arr[arr_i]>0)
            
            pos=pos+1;
        
        else if(arr[arr_i]<0)
            neg=neg+1;
        
        else
            zero=zero+1;
        
    }
    cout<< (pos/n)<<endl;
    cout<< (neg/n)<<endl;
    cout<< (zero/n)<<endl;
    return 0;
}
