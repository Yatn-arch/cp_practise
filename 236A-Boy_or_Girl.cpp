#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    string name;
    cin>>name;

    // int freq[26] = {0};
    
    // for(int i = 0;i<name.length();i++){
    //     freq[name[i]-97]++;
    // }
    // int count = 0;
    
    // for(int i = 0;i<26;i++){
    //     if(freq[i] > 0){
    //         count++;
    //     }
    // }

    

    unordered_set<char>s;

    for(int i = 0;i<name.length();i++){
        s.insert(name[i]);
    }

    int k = s.size();

    if(k%2 != 0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else cout<<"CHAT WITH HER!"<<endl;

    return 0;


}