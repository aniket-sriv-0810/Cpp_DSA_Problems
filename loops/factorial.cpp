#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Number = ";
    int num , fact = 1;
    cin >> num;
    if(num < 0){
        cout<<"Invalid Number"<<endl;
    return 0;
    }
    for(int i = 1 ; i <= num ; i++){
        fact*= i;
    }
    cout<<"Factorial = "<<fact<<endl;
    return 0;
}