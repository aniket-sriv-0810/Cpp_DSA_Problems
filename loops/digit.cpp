#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Number = ";
    int num , n  , rev = 0 ;
    cin>> num;
    n = num;
    while(n > 0){
        int last = n % 10;
        rev = rev*10 + last;
        n/=10;
    }
    cout<<"Digits : "<<endl;
    while(rev > 0){
        int dig = rev % 10;
        cout<<dig<<"\n";
        rev /= 10;
    }
    return 0;
}