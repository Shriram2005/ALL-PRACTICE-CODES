#include<iostream>
using namespace std;
int main(){
int marks[10];

for(int a=0;a<=9;a++){cout<<"Enter marks of "<<a+1<<"th student = ";cin>>marks[a];cout<<"endl";}
for(int a=0;a<=9;a++){cout<<"Mark of student is = "<<marks[a]<<endl;}
return 0;
}