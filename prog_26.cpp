#include <bits/stdc++.h>

using namespace std;

set<int> fre(vector<int> arr){
   
    set<int> zoom(arr.begin(),arr.end());
   
    
    
    
    return zoom;
    
}

int main(){
    
    vector<int> arr={1,2,3,1,2,4,5,4};
    
    
    set<int> zoom=fre(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
    
    return 0;
}