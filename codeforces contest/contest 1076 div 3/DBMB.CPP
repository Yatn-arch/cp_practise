#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    
    for(int i =0 ;i<test;i++){
        int n,s,x;
        cin>>n>>s>>x;
        int sum = 0;
         
        int gift[n];
        for(int j = 0;j<n;j++){
            cin>>gift[j];
            sum += gift[j];
        }

        if(sum<=s){
            if((s-sum)%x == 0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}