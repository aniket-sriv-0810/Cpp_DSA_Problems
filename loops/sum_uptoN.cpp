#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Range = ";
    int num , sum  = 0;
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        sum+= i ;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}