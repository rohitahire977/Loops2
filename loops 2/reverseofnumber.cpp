#include<iostream>
using namespace std;
int main()
{
int n;
    cout<<"enter a number" ;
    cin>>n ;
    int r=0; //reverse
    int lastdigit=0;
    while(n>0)
    {
        lastdigit=n%10;
        r=r*10;
        r+=lastdigit;
        n/=10;
    }
    cout<<"the reverse of number"<<" is "<<r;
}