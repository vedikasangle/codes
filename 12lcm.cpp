// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.

#include<iostream>
using namespace std ; 

void lcm(int n1, int n2){

    int smallestnumber = 1;
    
    while(smallestnumber<=1000000000){
    if(smallestnumber%n1 == 0 and smallestnumber%n2 == 0 ){
        cout<<smallestnumber;
        break;
    }
    smallestnumber = smallestnumber + 1 ; 
    }

}

int main(){
    int n1, n2 ; 
    cin>>n1>>n2;

    lcm(n1,n2);

    return 0 ; 
}