#include <bits/stdc++.h>

using namespace std;
int maxi(vector<int> arr){
    int s1=INT_MAX, s2=INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(s1>arr[i]){
            s2=s1;
            s1=arr[i];
        }else if(s2>arr[i] && arr[i]!=s1){
            s2=arr[i];
        }
    }
    
    return s2;
}
int main(){
    
    vector<int> arr={1,2,3,4,7,5,6};
    
    cout<<maxi(arr);
    
    return 0;
}