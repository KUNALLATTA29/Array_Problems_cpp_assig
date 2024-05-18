#include <bits/stdc++.h>

using namespace std;
int fre(vector<int> arr){
    
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
    
    int max=0;
    int max_key=1;
    for(auto pair:zoom){
        if(max<pair.second){
            max=pair.second;
            max_key=pair.first;
        }
    }
    
    return max_key;
}
int main(){
    
    vector<int> arr={1,1,3,4,1,2,4,4,4,3,3,3,3,3};
    
    
    cout<<fre(arr);
    
    return 0;
}