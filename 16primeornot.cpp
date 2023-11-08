#include<iostream>
using namespace std ;

int main(){

    int num;
    cin>>num;

    // if(num==0 && num==1){
    //     return 0 ;
    // } 

    int i = 2 ;

    //  if(num==0 && num==1){
    //     return -1 ;
    // } 
    
    while(i<=num-1){
    if(num%i==0){
        cout<<"Not prime";
        return 0 ; 
    }
    i = i + 1;
    }
    
    if(i=num){
        cout<<"Prime";
    }

    
    // int num;
    // cin>>num;

    // int i = 2 ; 
    
    // if(num%i==0){
    //     cout<<"Not prime";
    // }
    // else{
    //     cout<<"Prime";
    // }
	// return 0;
    

    return 0 ; 
}