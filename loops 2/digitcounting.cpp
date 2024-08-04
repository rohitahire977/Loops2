//take a number as input from user and tell no.of digits in the number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number" ;
    cin>>n ;
    int i=0;
    while(n>0){
        n=n/10;//   n/=n same
        i++;
    }

    cout<<"it is a "<<i<<" digit number.";
}