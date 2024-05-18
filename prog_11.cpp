#include <bits/stdc++.h>

using namespace std;

int sol(vector<int> arr){
    
    sort(arr.begin(), arr.end());
    
    if((arr[0]-1)>0){
        return (arr[0]-1);
    }
    
    return 0;
}

int main(){
    
    vector<int> arr={7, 2, 9, 4, 3, 6, 8, 5};
    
    
    cout<<sol(arr);
    
    
    return 0;
}