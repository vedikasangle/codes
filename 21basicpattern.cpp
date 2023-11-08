#include<iostream>
using namespace std ; 

//     *    
//    ***   
//   *****  
//  ******* 
// *********

int main(){

    int trows;
    cin>>trows;

    int rowno = 1;
    while(rowno<=trows){ 
    //space 
    int spc = 1 ;
    while(spc<=trows-rowno){
        cout<<" ";
        spc = spc +1 ; 
    }
    //star 
    int starc = 1; 
    while(starc<=(2*rowno-1)){
        cout<<"*";
        starc = starc + 1;
    }
    cout<<endl;
    rowno = rowno + 1;
    }
    return 0 ; 


}