#include <bits/stdc++.h>

using namespace std;

void sol(vector<int> &arr){
    
    sort(arr.begin(), arr.end());
    
    for(int i =0;i<arr.size()-1; i+=2){
        
        swap(arr[i],arr[i+1]);
    }
    
}

int main(){
    
    vector<int> arr={7, 2, 9, 4, 3, 6, 1, 8, 5};
    
    
    sol(arr);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}