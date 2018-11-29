#include<iostream>
using namespace std;
int fib(int);
int main(){


cout<<"Enter number of fibonacci series?__";
int N,i=0;
cin>>N;

while(i<N){
cout<<fib(i)<<"\t";

i++;
}

}
int fib(int n){
if(n==0 || n==1){
    return n;

}
else{
    return fib(n-1)+fib(n-2);
}



}
