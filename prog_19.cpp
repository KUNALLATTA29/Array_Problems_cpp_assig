#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> zoom){
    
    
    for(int i =0;i<zoom.size();i++){
        int count=0;
        int res;
        for(int j=0;j<zoom.size();j++){
            
            if(zoom[i]==zoom[j]){
                count++;
                res=zoom[i];
            }
        }
        if(count%2!=0){
            return res;
        }
        
    }
    
    
    return 0;
    
}

int main(){
    vector<int> arr={2,4,2,3,3,4,5,6,5,6,4,4,4,3};
    
    cout<<sol(arr);
    
    return 0;
}