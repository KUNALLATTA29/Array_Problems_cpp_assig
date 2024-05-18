#include <bits/stdc++.h>

using namespace std;

int fre(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        int c=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>1){
            return arr[i];
        }
    }
    return -1;
    
}

int main(){
    
    vector<int> arr={1,2,2,3,3};
    
    cout<<fre(arr);
    
    
    
    return 0;
}