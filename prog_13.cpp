#include <bits/stdc++.h>

using namespace std;

vector<int> sol(vector<int> zoom){
    
    sort(zoom.begin(), zoom.end(),greater<int>());
    
    for(int i=0;i<zoom.size();i+=2){
        
        swap(zoom[i],zoom[i+1]);
    }
    
    return zoom;
}

int main(){
    
    vector<int> arr={1,2,4,5,3,8,7,6};
    
    vector<int> zoom=sol(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
 
    return 0;
}