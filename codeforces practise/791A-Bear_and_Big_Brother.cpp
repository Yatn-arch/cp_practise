#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int year = 0;

    while(b>=a){
        a = 3*a;
        b = 2*b;
        year++;
    }
    cout<<year;
    return 0;
}