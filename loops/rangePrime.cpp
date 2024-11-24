#include <bits/stdc++.h>
using namespace std;

int main(){
    int lower , upper ;
    cout<<"Enter Lower Range = ";
    cin>>lower;
    cout<<"Enter Upper Range = ";
    cin>>upper;
    if(lower > upper || lower < 1 || upper < 1){
        cout<<"Invalid Range"<<endl;
        return 0;
    }
    for(int i = lower ; i < upper ; i++){
        int count = 0;
        for(int j = 2 ; j < i ; j++){
            if( i % j == 0){
            count++;
            break;
            }
        }
        if( count == 0)
            cout<<i<<" ";
    }
    return 0;
}