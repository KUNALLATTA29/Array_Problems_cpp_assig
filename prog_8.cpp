#include <bits/stdc++.h>

using namespace std;

void sol(vector<int> arr){
     
    unordered_map<int,int> zoom;
    for(int i =0;i<arr.size();i++){
        int doom=true;
            for(int j=i;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    zoom.insert({arr[i],arr[j]});
                    doom=false;
                    break;
                }
            }
        
    }
    
    
    for(auto it: zoom){
        cout<<it.first<<" has "<<it.second<<" as powerfull element."<<endl;
    }
    
}

int main(){
    
    vector<int> arr={3, 5, 2, 7, 6, 8};
    sol(arr);
    
    
    
    return 0;
}