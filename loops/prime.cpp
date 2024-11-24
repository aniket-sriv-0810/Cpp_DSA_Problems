#include <bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Enter the Number = ";
    int num;
    bool flag = 0;
    cin >> num;
    if( num > 1){
    for(int i = 2 ; i < num ; i++){
        if( num % i == 0){
            flag = 1;
            break;
        }
    }
    }
    else{
        cout<<"Invalid Number !"<<endl;
        return 0;
    }
    if(flag)
    cout<<num<<" is Not a Prime number"<<endl;
    else
    cout<<num<<" is a prime number"<<endl;
    return 0;
}
