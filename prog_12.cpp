#include <bits/stdc++.h>

using namespace std;

void sol(vector<long> &arr){
    
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++){
        if(i==0){
            arr[i]=arr[i]*arr[i+1];
        }else if(i==arr.size()-1){
            arr[i]=arr[i]*arr[i-1];
        }else{
            arr[i]=(arr[i])*(arr[i+1])*(arr[i-1]);
        }
    }
    
    
}

int main(){
    
    vector<long> arr={7, 2, 9, 4, 3, 6, 8, 5};
    
    sol(arr);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
 
    return 0;
}