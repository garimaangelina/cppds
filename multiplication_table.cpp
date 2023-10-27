//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int number,limit,multiplier;
    cout<<"Enter the number - ";
    cin>>number;
    cout<<"Enter limit - ";
    cin>>limit;
    for(int multiplier=1;multiplier<=limit;multiplier++){
        cout<<number<<" * "<<multiplier<<" = "<<number*multiplier<<endl;}
}