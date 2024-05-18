#include <bits/stdc++.h>
using namespace std;

vector<int> sol(vector<int> zoom){
    
    vector<int> tem;
    
    for(auto it: zoom){
        if(it>0){
            tem.push_back(it);
        }
    }
    
    for(auto it: zoom){
        if(it<0){
            tem.push_back(it);
        }
    }
    
    zoom=tem;
    
    return zoom;
    
}

int main(){
    vector<int> arr={1,2,4,-3,-5,-2,3,6};
    
    vector<int> zoom =sol(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
    return 0;
}