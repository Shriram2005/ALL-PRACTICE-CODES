#include<iostream>
using namespace std;

int prime(int);
int prime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}

int main(){
    int n,res;
    cout<<"Enter a number = ";
    cin>>n;
prime(n);
}