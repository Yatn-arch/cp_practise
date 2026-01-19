#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool match(vector<int>no,vector<string>replica){
    for(int i = 1;i<no.size();i++){
        int k = no[i]-1;
        int t = no[i-1]-1;
        if(replica[k] == replica[t] ){
            return false;
        }

    }

    return true;
}
int main(){
    int test;
    cin>>test;

    for(int i = 0;i<test;i++){
        int n;
        cin>>n;
        vector<int>no(n);
        for(int i = 0;i<n;i++){
            cin>>no[i];
        }

        vector<string>replica(n,"white");
        for(int i = 0;i<n;i+=2){
            replica[i] = "red";
        }

        if(match(no,replica)){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i = 0;i<n;i+=2){
            replica[i] = "white";
        }
        for(int i = 1;i<n;i+=2){
            replica[i] = "red";
        }

        if(match(no,replica)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
        



        
    return 0;
}