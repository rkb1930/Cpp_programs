#include <iostream>
using namespace std;

int fun(int i,int n){
    if(i<1)
    return 1;
    cout<<i<<endl;
    fun(i-1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fun(n,n);
    return 0;
}