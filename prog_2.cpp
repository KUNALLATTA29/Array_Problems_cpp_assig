#include <bits/stdc++.h>

using namespace std;

void max(vector<int> arr, int max1, int max2, int max3){
    
    for(int i=0;i<arr.size();i++){
        if(max1<arr[i]){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }else if(max2<arr[i]){
            max3=max2;
            max2=arr[i];
        }else if(max3<arr[i]){
            max3=arr[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}
int main(){
    
    vector<int> arr={1,2,3,4,6,4,5};
    
    int max1=arr[0], max2=arr[0], max3=arr[0];
    
    max(arr, max1, max2, max3);
    
    return 0;
}