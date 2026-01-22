#include<iostream>
#include<string>
using namespace std;
int main(){
    string k;
    cin>>k;
    
    if(k[0] > 92){
        int t = k[0];
        t = t-32;
        k[0] = t;
    }
    
    cout<<k;
    return 0;
}