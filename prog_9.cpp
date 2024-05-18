#include <bits/stdc++.h>

using namespace std;

unordered_map<int,int> sol(vector<int> arr){
     
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
    
    return zoom;
    
}

int main(){
    
    vector<int> arr={3, 5, 2, 7, 6, 8};
    unordered_map<int,int> zoom = sol(arr);
    
    
    for(auto it: zoom){
        cout<<it.first<<" has "<<it.second<<" as powerfull element."<<endl;
    }
    
    return 0;
}