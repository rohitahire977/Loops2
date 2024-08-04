#include <iostream>
using namespace std;
//print 1 to n factorials.
int main(){
    int n;
    int product;
    cout<<"enter a number" ;
    cin>>n;
    product=1;
    for(int i=1;i<=n;i++){
        product*=i;
        cout<<i<<"!="<<product<<endl;
    }
}