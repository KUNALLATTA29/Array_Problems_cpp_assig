#include <bits/stdc++.h>

using namespace std;

vector<int> sol(vector<int> zoom){
    
    int in=0;
    
    for(int i=0;i<zoom.size();i++){
        if(zoom[i]==0){
            swap(zoom[i],zoom[in]);
            in++;
        }
    }
    
    return zoom;
}

int main(){
    
    vector<int> arr={1,0,0,0,1,1,0,1};
    
    vector<int> zoom=sol(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
 
    return 0;
}