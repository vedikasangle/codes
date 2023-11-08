#include<iostream>
using namespace std ; 

int main(){
    int a, b , c ; 
    cin>>a>>b>>c ;

    if(a>=b && a>=c){
        cout<<a;
    }
    else if (b>=a && b>=c){
        cout<<b ;
    }
    else if(c>=a && c>=b){
        cout<<c ; 
    }
    
    return 0 ;
}

//test case not passing of 3rd number +ve
// #include<iostream>
// using namespace std ; 

// int main(){
//     int a, b , c ; 
//     cin>>a>>b>>c ;

//     if(a>b){
//         if(a>c){
//             cout<<a;
//         }
//     }
//     else if (b>c){
//         if(b>a){
//             cout<<b ; 
//         }
//     }
//     else{
// 		cout<<c;
// 	}

//     return 0 ;
// }