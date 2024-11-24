#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Range = ";
    int num ;
    cin>>num;
    int n1 = 0;
    int n2 = 1;
    cout<<"Fibonacci Series = "<<n1 <<" "<<n2<<" ";
    for(int i = 1; i <= num ; i++){
        int temp = n2 ;
        n2 = n2 + n1;
        n1 = temp;
        cout<<n2<<" ";
    }
    return 0;
}