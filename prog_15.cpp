#include <bits/stdc++.h>

using namespace std;

vector<int> sol(vector<int> zoom){
    
    for(int i=0;i<zoom.size();i++){
        int in =i;
        for(int j=i+1;j<zoom.size();j++){
            if(zoom[j]<zoom[in]){
                in=j;
            }
        }
        swap(zoom[in],zoom[i]);
    }
    return zoom;
}

int main(){
    
    vector<int> arr={2,3,1,4,5,9};
    
    vector<int> zoom=sol(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
 
    return 0;
}