//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int number,limit,multiplier,counter=1;
    cout<<"Enter the number - ";
    cin>>number;
    cout<<"Enter limit - ";
    cin>>limit;
    while(counter<=limit){
        cout<<number<<"*"<<counter<<"="<<counter*number<<endl;
        counter++;}
}