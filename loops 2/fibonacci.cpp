#include<iostream>
using namespace std;
int main()
//1 1 2 3 5 8 13 21 34 55 81 ....(num3=num1+num2)
{
    int n ;
    cout<<"enter a number:" ;
    cin>>n ;
    int a=1,b=1 ;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    
    cout<<b;
}