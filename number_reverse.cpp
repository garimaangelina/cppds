//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int number,remainder,quoitent,newnumber=0;
    cout<<"Enter the number - ";
    cin>>number;
    for(int counter=4;counter>0;counter--){
        remainder=number%10;
        number=number/10;
        cout<<remainder;
        newnumber=newnumber+(remainder*(10^counter));
    }
    cout<<newnumber;

}