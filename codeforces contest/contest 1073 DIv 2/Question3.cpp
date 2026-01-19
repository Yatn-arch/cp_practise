#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin>>test;

    for(int i = 0;i<test;i++){
        int n;
        cin>>n;

        string input;

        cin>>input;

        string t = input;
        
        sort(t.begin(),t.end());


        if(t == input){
            cout<<"Bob"<<endl;
        }
        else{
            vector<int>indx;
            int u = 0;

            while(u<n){
                if(input[u] != t[u]){
                    indx.push_back(u+1);
                }
                u++;
            }

            cout<<"Alice"<<endl;
            cout<<indx.size()<<endl;
            for(int value:indx){
                cout<<value<<" ";
            }
            cout<<endl;
        }

        
        
        
        
    }
    return 0;
}