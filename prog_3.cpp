#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> arr, int max1){
    int max2 =0;
    for(auto it:arr){
        if(max1<it){
            max2=max1;
            max1=it;
        }else if(max2<it){
            max2=it;
        }
    }
    
    return max2;
}
int main(){
    
    vector<int> arr={1,2,3,4,6,4,5,7};
    
    int max=arr[0];
    
    cout<<maxi(arr, max);
    
    return 0;
}