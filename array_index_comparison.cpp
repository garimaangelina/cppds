//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int var=0,var1,marks[5];
    for(int i=0;i<5;i++){
        cout<<"Enter marks of subject "<<i+1<<"-"<<endl;
        cin>>marks[i];
        var1=var1+marks[i];
    }
    var=var1/5;
    if(var>=90){
        cout<<"O";
    }
    else if(var>80){
        cout<<"A+";
    }
    else if(var>=70) {
        cout<<"A";
    }
    else if(var>=60) {
        cout<<"B+";
    }
    else if(var>=50) {
        cout<<"B";
    }
    else if(var>=40) {
        cout<<"C";
    }
    else{
        cout<<"Fail";
    }
}
