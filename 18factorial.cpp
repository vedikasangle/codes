#include<iostream>
using namespace std ; 

int fact(int a){
    int ans = 1 ;


    
    int i = a ;//initialisation
    while(i>=1){
        ans = ans * i ;
        i = i -1 ;
    }
    return ans ; 

}

int main(){
    int n ; 
    cin>>n ; 
    cout<<fact(n);
}