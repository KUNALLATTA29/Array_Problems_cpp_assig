#include <bits/stdc++.h>

using namespace std;
int fre(vector<int> arr1, vector<int> arr2){
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
    int i=0, j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            i++;
            j++;
        }
    }
    if(i<arr1.size()){
        return arr1[i];
    }else{
        return arr2[j];
    }
    
}
int main(){
    
    vector<int> arr1={1, 2, 3, 6, 5};
    vector<int> arr2={1, 2, 3, 4, 5};
    
    
    cout<<fre(arr1, arr2);
    
    
    
    return 0;
}