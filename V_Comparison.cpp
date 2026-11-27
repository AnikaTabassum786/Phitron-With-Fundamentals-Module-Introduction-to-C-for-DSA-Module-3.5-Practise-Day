#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char sign;
    cin >> a >>sign >> b;

    // if(a>b){
    //   cout << "Right";
    // }
   
    // else if(a==b){
    //   cout << "Right";
    // }
    // else{
    //     cout<< "Wrong";
    // }

    if(sign=='>'){
       if(a>b){
        cout<< "Right";
       }else{
        cout<<"Wrong";
       }
    }
    if(sign=='<'){
       if(a<b){
        cout<< "Right";
       }else{
        cout<<"Wrong";
       }
    }

    if(sign=='='){
       if(a==b){
        cout<< "Right";
       }else{
        cout<<"Wrong";
       }
    }

    

    return 0;
}