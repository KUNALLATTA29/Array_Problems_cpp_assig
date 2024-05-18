#include <bits/stdc++.h>

using namespace std;
int fre(vector<int> arr){
    map<int,int> doom ;
    int res;
    
    for(int i =0;i<arr.size();i++){
        doom[arr[i]]++;
    }
   
   for(auto it:doom){
       if(it.second==1){
           res=it.first;
       }
   }
    
    return res;
}
int main(){
    
    vector<int> arr={1,2,2,1,3,4,3,5,4};
    
    
    cout<<fre(arr);
    
    
    
    return 0;
}