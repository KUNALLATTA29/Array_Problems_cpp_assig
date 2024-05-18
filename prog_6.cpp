#include <bits/stdc++.h>

using namespace std;
bool maxi(int num){
    num=abs(num);
    int c=0;
    while(num>0){
        if(num%10!=0){
            c++;
        }
        if(c>=2){
            return true;
        }
        num/=10;
    }
    return false;
    
}
int main(){
    
    vector<int> arr={1,23,3,4,7,57,6};
    
    for(auto num: arr){
        if(maxi(num)){
            cout<<"sig"<<" "<<num<<endl;
        }else{
            cout<<"non sig"<<" "<<num<<endl;
        }
    }
    return 0;
}