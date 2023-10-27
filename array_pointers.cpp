//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,1,2,4};
    int *arrptr=&arr[0];
    for(int i=0;i<5;i++){
        cout<<*arrptr<<"\t";
        cout<<arrptr<<endl;
        arrptr++; //pointer++ does not mean addition of 1
    }
    cout<<"Float Array"<<endl;
    double farr[5]={4.25,5.145,1.78,42.48,4.20};
    double *farrptr=&farr[0];
    for(int i=0;i<5;i++){
        cout<<*farrptr<<"\t";
        cout<<farrptr<<endl;
        farrptr++; //pointer++ does not mean addition of 1
    }
}