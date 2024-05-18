#include <bits/stdc++.h>

using namespace std;
string fre(vector<string> arr){
   
    string one="";
    string two="";
    string three="";
    
    for(int i=0;i<arr.size();i++){
        if(one<arr[i]){
            three=two;
            two=one;
            one=arr[i];
        }else if(two<arr[i]){
            three=two;
            two=arr[i];
        }else if(three<arr[i]){
            three=arr[i];
        }
    }
   
    
    
    
    return three;
    
}

int main(){
    
    vector<string> arr={"123", "12","12345", "12345678","123456", "1234567", "123456789"};
    
    
    cout<<fre(arr);
    
    
    
    return 0;
}