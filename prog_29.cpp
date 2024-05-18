#include<bits/stdc++.h>
using namespace std;

vector<int> sol(vector<int> arr){
    
    vector<int> zoom;
    
    int max1=0,max2=0;
    
    for(int i=0;i<arr.size();i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }else if(max2<arr[i]){
            max2=arr[i];
        }
    }
    
    int min1=INT_MAX,min2=INT_MAX;
    
    for(int i=0;i<arr.size();i++){
        if(min1>arr[i]){
            min2=min1;
            min1=arr[i];
        }else if(min2>arr[i]){
            min2=arr[i];
        }
    }
    
    zoom.push_back(min2);
    zoom.push_back(max2);
    
    return zoom;
}

int main(){
    
    vector<int> arr={1,2,3,4,5,6,7};
    
    vector<int> zoom = sol(arr);
    
    for(auto it: zoom){
        cout<<it<<" ";
    }
    
    return 0;
}