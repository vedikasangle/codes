#include<iostream>
using namespace std ;

int main(){
    int n1, n2 ; 
    cin>>n1>>n2;

    int num = 2 ;

    int gcd ;
    while(num<1000000000){//
        if(n1%num == 0 and n2%num == 0){ 
        gcd = num;
        }
        num = num + 1;
    }
    cout<<gcd<<endl;
   
    return 0 ;
}