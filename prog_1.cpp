#include <bits/stdc++.h>

using namespace std;

void maxi(vector<int> arr, int max){
    for(auto it:arr){
        if(max<it){
            max=it;
        }
    }
    
    cout<<max;
}
int main(){
    
    vector<int> arr={1,2,3,4,6,4,5};
    
    int max=arr[0];
    
    maxi(arr, max);
    
    return 0;
}