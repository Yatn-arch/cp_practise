#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i= 0;i<n;i++)
    {
        cin>>input[i];
    }
    int maxi = 1;
    for(int i = 1;i<n;i++){
        int count = 1;
        while(input[i-1] < input[i] && i<n){
            count++;
            i++;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi;
    return 0;
}