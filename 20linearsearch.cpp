#include<iostream>
using namespace std ; 

int main(){
    
    // int n ; 
    // cin>>n ; 
    // int arr[n]; //0 waste but not a good programming practice 
     
    // //good programming practice
    // int arr[1000000];
    // int n ; 
    // cin>>n ; 
    
    //first approach
    int arr[100];
    int n ; //5 -->95 waste 
    cin>>n;
    for(int i = 0 ; i <=n-1 ; i++){
        cin>>arr[i];
    }
    
    int element ;
    cout<<"enter the element you want to search : ";
    cin>>element;
    
    int i ; //to increase scope we declared here and not in for loop
    for(i = 0 ; i <=n-1 ; i++){
        if(arr[i]==element){
        cout<<"element is present at index "<<i<<endl;; 
        break;   
        }
    }

    if(i==n){
    cout<<"element is not present ";
    }

    return 0 ; 
    

    //2nd approach 
    //  int arr[100];
    // int n ; 
    // cin>>n;
    // for(int i = 0 ; i <=n-1 ; i++){
    //     cin>>arr[i];
    // }
    
    // int element ;
    // cout<<"enter the element you want to search : ";
    // cin>>element;
    
    // int i ; //to increase scope we declared here and not in for loop
    // for(i = 0 ; i <=n-1 ; i++){
    //     if(arr[i]==element){
    //     cout<<"element is present at index "<<i<<endl;; 
    //     return 0 ; 
    //     }
    // }

    // cout<<"element is not present ";

    //ps. first approach is better than 2nd 
    
}