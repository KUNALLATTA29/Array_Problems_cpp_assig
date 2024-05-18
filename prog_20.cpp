#include <bits/stdc++.h>

using namespace std;
int fre(vector<int> arr, int k){
    
    map<int, int> zoom;
    
    for(int i=0; i<arr.size(); i++){
        int count=0;
        for(int j=0;j<arr.size(); j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        zoom.insert({arr[i],count});
    }
    
    
    return zoom[k];
}
int main(){
    
    vector<int> arr={1,1,3,4,1,2,4,4,4,3,3,3,3,3};
    int k=3;
    
    cout<<fre(arr,k);
    
    return 0;
}