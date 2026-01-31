// #include<bits/stdc++.h>
// using namespace std;
// int maxi (int input[],int st,int end){
//     int mai = st-1;
//     for(int u = st;u<end;u++){
//         if(input[u] > input[mai]){
//             mai = u;
//         }
//     }
//     return mai;
// }
// int main(){
//     int test;
//     cin>>test;

//     for(int i = 0 ;i<test;i++){
//         int n ;
//         cin>>n;
//         int input[n];
        
//         for(int j = 0;j<n;j++){
//             cin>>input[j];
//         }
//         for(int k =0 ;k<n;k++){
//             int a= 0;
//             int maj = maxi(input,k+1,n);
//             if(maj != k){
//                 for(int o = k;o<(k+maj+1)/2;o++){
//                         int temp = input[o];
//                         input[o] = input[maj-(o-k)];
//                         input[maj-(o-k)] = temp;
//                     }
//                     a= 1;
//                     break;
//             }
//             if(a == 1){
//                 break;
//             }
//         }
//         for(int value : input){
//             cout<<value<<" ";
//         }
//         cout<<endl;

        
//     }
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test>0){
        int n;
        cin>>n;
        vector<int>input;
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            input.push_back(a);
        }
        int max = n;
        for(int j =0;j<n;j++){
            if(input[j] == max){
                max--;
            }
            else{
                int a = 0;
                int p = j;
                vector<int>arr;
                for(int k = p+1;k<n;k++){
                    if(input[k] == max){
                        a = k;
                        arr.push_back(input[k]);
                        break;
                    }
                }

                for(int k = arr.size()-1;k>=0;k--){
                    input[p] = arr[k];
                    p++;
                }
                break;

            }
        }
        for(int value : input){
            cout<<value<<" ";
        }
        cout<<endl;
        test--;

    }
    return 0;
}