#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,result;
    char op,eg;
    
    cin >> a  >> op >> b >> eg >>c;

    if(op=='+'){
    result=a+b;

        if(result == c){
           cout << "Yes";  
        }
        else{
            cout << result;
        }
    }

    if(op=='-'){
    result=a-b;

        if(result == c){
           cout << "Yes";  
        }
        else{
            cout <<result;
        }
    }

    if(op=='*'){
    result=a*b;

        if(result == c){
           cout << "Yes";  
        }
        else{
           cout << result;
        }
    }



    return 0;
}