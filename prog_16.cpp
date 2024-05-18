#include <bits/stdc++.h>
using namespace std;

vector<int> sol(vector<int> zoom){
    int low=0, mid=0, high=zoom.size()-1;
    
    while(mid<=high){
        if(zoom[mid]==0){
            swap(zoom[mid],zoom[low]);
            low++;
            mid++;
        }else if(zoom[mid]==1){
            mid++;
        }else if(zoom[mid]==2){
            swap(zoom[mid],zoom[high]);
            high--;
        }
    }
    
    return zoom;
    
}

int main(){
    vector<int> arr={1,2,1,2,1,0,0};
    
    vector<int> zoom =sol(arr);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
    return 0;
}