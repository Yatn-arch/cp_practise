#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin>>test;

    for(int i = 0;i<test;i++){
        int a,b,n;
        cin>>a>>b>>n;
        int count = 0;

        while(a<=n && b<=n){
            if(a<b){
                a+=b;
                count++;
            }
            else{
                b+=a;
                count++;             //greedy approach
                
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}