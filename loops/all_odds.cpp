#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Range = ";
    int num;
    cin>>num;
    for(int i = 0 ; i <= num ; i++){
        if( i % 2 != 0)
        cout<<i<<" ";
    }
    return 0;
}

