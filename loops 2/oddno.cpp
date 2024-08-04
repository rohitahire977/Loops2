//break is a keyword used to stop a loop
//continue is a keyword used to pass the loop while cancelling the if statement
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(int i=1;i<=100;i++){
            if(i%2==0)continue;
               cout<<i<<endl;

        
    }
}