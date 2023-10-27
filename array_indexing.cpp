//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int arr1[10];
    int num;
    
    for(int i=0;i<10;i++){
        cout<<"Enter number "; 
        cin>>arr1[i];
    }
     for(int i=0;i<10;i++){
        cout<<arr1[i]; 
     }
     cout<<"Enter number to find"; 
     cin>>num;
     for(int i=0;i<10;){
        if (arr1[i]==num){
            cout<<"Present at"; cout<<arr1[i]; i++; }
        else
                cout<<"not present";
               
        
           
     }
 
     
}