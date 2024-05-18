#include <bits/stdc++.h>

using namespace std;
int maxi(vector<int> arr, int k){
    int n=arr.size();
    nth_element(arr.begin(),arr.begin()+n-k,arr.end());
    
    return arr[n-k];
}
int main(){
    
    vector<int> arr={1,2,3,4,7,5,6};
    int k =3;
    cout<<maxi(arr, k);
    
    return 0;
}