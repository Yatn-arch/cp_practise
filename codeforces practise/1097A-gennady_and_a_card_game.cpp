#include<bits\stdc++.h>
using namespace std;
int main(){
    multimap<char,char>s;
    string table;
    cin>>table;
    
    for(int i = 0;i<5;i++){
        string card;
        cin>>card;

        s.insert({card[0],card[1]});
    }
    auto it = s.find(table[0]);
    if(it == s.end()){
        //cout<<"HI"<<endl;
        int a = 1;
        for(auto& ip : s){
            //cout<<"HO"<<endl;
            if(ip.second == table[1]){
                cout<< "YES"<<endl;
                a = 0;
                break;
            }
        }
        if(a) cout<<"NO"<<endl;

    }
    else  cout<<"YES"<<endl;


    return 0;
}