#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,q;
        cin>>n>>q;
        vector<int>arr;
        vector<int>brr;
        
        for(int j  =0;j<n;j++){
            int value;
            cin>>value;
            arr.push_back(value);
        }
        for(int j  =0;j<n;j++){
            int value;
            cin>>value;
            brr.push_back(value);
        }
        if(brr[n-1] > arr[n-1]){
            arr[n-1] = brr[n-1];
        }
        for(int j = arr.size()-2;j>=0;j--){
            int value = max(arr[j],max(brr[j],arr[j+1]));
            arr[j] = value;
        }

        for(int j = 0;j<q;j++){
            int l,r;
            cin>>l>>r;
            int sum = 0;
            for(int k = l-1;k<r;k++){
                sum += arr[k];
            }
            cout<<sum<<" ";

        }
        cout<<endl;



        t--;
    }
    return 0;
}