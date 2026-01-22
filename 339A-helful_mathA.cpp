#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();


    for(int i = 0;i<n-1;i++){
        int min = 0;
        int end = n;
        for(int j = 0;j<end;j += 2){

            if(s[j] < s[min]){
                min = j;
            }
            else{
                int temp  = s[j];
                s[j] = s[min];
                s[min] = temp;

                min = j;
            }
            

        }

        end--;
    }

    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}