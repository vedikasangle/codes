#include<iostream>
using namespace std ;

int main(){

    int n ; 
    cin>>n ;

    int remainno = n ;
    while(remainno>0){
    int rem = remainno%10;
    cout<<rem;
    remainno = remainno/10;
    }

    return 0 ;
}
