#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Number = ";
    int num , n , rev = 0;
    cin>>num;
    n = num;
    while(n> 0){
        int last = n % 10;
        if(rev > INT_MAX/10 || last < INT_MIN/10)
        return 0;
        rev = rev*10 + last;
        n/=10;
    }
    if( rev == num)
    cout<<num<<" is a Palindrome Number"<<endl;
    else
    cout<<num<<" is not a Palindrome Number"<<endl;

    return 0;
}