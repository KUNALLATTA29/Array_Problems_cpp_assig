#include <bits/stdc++.h>

using namespace std;

vector<int> fre(vector<int> arr1, vector<int> arr2, vector<int> arr3){
   
    vector<int> zoom;
    unordered_set<int> set1(arr2.begin(),arr2.end());
    unordered_set<int> set2(arr3.begin(), arr3.end());
    
    for(auto it: arr1){
        if(set1.find(it)!=set1.end() && set2.find(it)!=set2.end()){
            zoom.push_back(it);
        }
    }
    
    return zoom;
    
}

int main(){
    
    vector<int> arr1={1,2,3,9,5};
    vector<int> arr2={5,6,7,8,9};
    vector<int> arr3={9,10,5,12,13};
    
    
    vector<int> zoom=fre(arr1,arr2,arr3);
    
    for(auto it:zoom){
        cout<<it<<" ";
    }
    
    return 0;
}