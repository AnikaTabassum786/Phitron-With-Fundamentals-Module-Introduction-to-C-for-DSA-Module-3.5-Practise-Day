#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a1[n];
    int a2[n];

    for(int i=0;i<n;i++){
      cin >> a1[i];
    }

    for(int i=0;i<n;i++){
      a2[i]=a1[i];
    }

   for(int i=0;i<n;i++){
    //   cout << a2[i] << " ";
    }

    // cout<< "\n";

    for(int i=0,j=n-1;i<j;i++,j--){
        // swap(a[i],a[j]);
        int temp;
        temp=a1[i];
        a1[i]=a1[j];
        a1[j]=temp;

       
    }

    for(int i=0;i<n;i++){
    //   cout << a1[i] << " ";
    }

    int flag=1;

    for(int i=0;i<n;i++){
       if(a1[i]!=a2[i]){
        flag=0;
       }
    }

    if(flag==1){
        cout<<"YES";
    }
    else if(flag==0){
        cout << "NO";
    }

    return 0;
}