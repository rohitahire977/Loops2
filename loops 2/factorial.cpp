#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter a number:" ;
    cin>>n ;
    int product;
    product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    cout<<n<<"!="<<product;
    
}