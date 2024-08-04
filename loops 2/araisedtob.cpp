#include<iostream>
using namespace std;
int main()
//print (a)^b
{
    int a ;
    cout<<"enter first number:"<<endl ;
    cin>>a ;
    int b ;
    cout<<"enter second number:"<<endl ;
    cin>>b;
    bool flag = true;//true means power +ve.
    if(b<0){
        flag=false;
        b=-b;
    }
    float power;
    power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    if(flag==false){ 
    power=1/power ;
    }
    if(a==0 && b==0){
        cout<<"not define";
    }
    else{
    cout<<"("<<a<<")^"<<b<<"="<<power;
    }
}    