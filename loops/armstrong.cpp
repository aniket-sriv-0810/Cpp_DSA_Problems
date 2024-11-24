#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Number = ";
    int num , n1, n2 , count = 0 , ans = 0;
    cin>>num;
    n1 = num;
    n2 = num;
    // loop 1 to count the no of digits in the number
    while(n1 > 0){
        int last = n1 % 10;
        count++;
        n1 /=10;
    }
    // general Armstrong logic
    while( n2 > 0){
        int last = n2 % 10;
        ans = ans + ceil(pow(last , count));
        n2 /= 10;
    }

    if( ans == num)
    cout<<num<<" is an Armstrong Number !";
    else
    cout<<num<<" is not an Armstrong Number !";

    return 0;
}