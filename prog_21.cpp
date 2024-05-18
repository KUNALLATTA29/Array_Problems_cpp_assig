#include <bits/stdc++.h>

using namespace std;
vector<int> fre(vector<int> arr){
    map<int,int> doom ;
    vector<int> res;
    
    for(int i =0;i<arr.size();i++){
        doom[arr[i]]++;
    }
   
   for(auto it:doom){
       if(it.second>1){
           res.push_back(it.first);
       }
   }
    
    return res;
}
int main(){
    
    vector<int> arr={1,2,3,4,2,3};
    
    
    vector<int> res=fre(arr);
    
    for(auto it:res){
        cout<<it<<" ";
    }
    
    return 0;
}