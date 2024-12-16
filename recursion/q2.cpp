#include <iostream>
using namespace std;

int fun(int i,int n){
    if(i<1)
        return true;
    
    fun(i-1,n);
        cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fun(n,n);
    
}