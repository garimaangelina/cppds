//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main() {
    int arr1[10];
    
    for(int i=0;i<10;i++){
        cout<<"Enter number "<<i+1<<" - ";
        cin>>arr1[i];
    }
    int largest=arr1[0];
    int smallest=arr1[0];
    for(int i=0;i<10;i++){
        if(arr1[i]>largest){
            largest=arr1[i];
        }
        if(arr1[i]<smallest){
            smallest=arr1[i];
        }
        }
    cout<<"Largest= "<<largest<<endl;
     cout<<"Smallest= "<<smallest;
}