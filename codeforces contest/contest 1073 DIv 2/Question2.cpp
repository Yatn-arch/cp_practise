#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin>>test;

    for(int i = 0;i<test;i++){
        int n;
        cin>>n;
        int arr[n];
        int count1 = 0,count0 = 0;



        for(int j = 0;j<n;j++){
            cin>>arr[j];
            if(arr[j] == 0) count0++;
            if(arr[j] == 1) count1++;

        }

        // if(count1>0 && count0>0){
        //     cout<<"YES"<<endl;

        // }
        // else if(count1 == 0 && (count0 == 0|| count0>1)){
        //     cout<<"NO"<<endl;
        // }
        // else if(count0 == 1 && count1 == 0){
        //     cout<<"YES"<<endl;
        // }

        if(count0 == 0) cout << "NO\n";
    else if(count1 > 0) cout << "YES\n";
    else cout << (count0 == 1? "YES" : "NO") << '\n';
        


    }
    return 0;
}