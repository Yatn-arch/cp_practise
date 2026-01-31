#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>blocks;
    int sum = 0;
    int h = 1;
    while(sum<=n){
        blocks.push_back((h)*(h+1)/2);
        sum += blocks[h-1];
        
        h++;
    }
    if(n == 1){
        cout<<1<<endl;
    }
    else cout<<h-2<<endl;

    return 0;
    
}