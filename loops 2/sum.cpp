#include<iostream>
using namespace std;
// 1-2+3-4+5-6+....
int main()
{
    int n;
    cout<<"enter a number=";
    cin>>n;
    int sum;
    sum=0;
    for(int i=1;i<=n;i++) {
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    cout<<sum;
}