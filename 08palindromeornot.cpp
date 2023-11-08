#include<iostream>
using namespace std ; 

 int lengthofarr(char ch[1000]){
    int countofchar = 0  ; 
    while(ch[countofchar]!='\0'){
        countofchar++;
    }
    return countofchar;
 }

bool isPalindrome(char ch[1000]){
    int i = 0;
    int j = lengthofarr(ch) - 1 ;
    
    while(i<j){
    if(ch[i] == ch[j]){
        i++;
        j--;
    }  
    else{
        return false;
    }
    }

    return true ;
}

int main (){
    char ch[1000];
    // cin>>ch;
    cin.getline(ch,100);

    if(isPalindrome(ch) == true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0 ;
}