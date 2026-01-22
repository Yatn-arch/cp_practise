#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int test;
    cin>>test;

    for(int i =0 ;i<test;i++){
        int n;
        cin>>n;

        string t;
        cin>>t;

        int check[n];
        int count = 0;

        for(int j = 0;j<n;j++){
            if(t[j] == '('){
                check[j] = ++count;
            }
            else check[j] = --count;

        }

        int max= check[0];

        for(int j = 0;j<n;j++){
            if(check[j] >max ){
                max = check[j];
            }
        }

        if(max == t.length()){
            cout<<-1<<endl;
        }
        else if(max < t.length()){
            cout<<-1<<endl;
        }


        

    }


    
    return 0;
}