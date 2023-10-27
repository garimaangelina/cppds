//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main(){
    int c,d;
    cout<<"Enter a -  ";
    cin>>c;
    cout<<"Enter b - ";
    cin>>d;
    int *cp=&c, *dp=&d;
    cout<<"Original numbers- "<<"c= "<<*cp<<" , d= "<<*dp<<endl;
    swap(cp,dp);
    cout<<"Swapped numbers- "<<"c= "<<*cp<<" , d= "<<*dp<<endl;
}
void swap(int *a,int *b){
    int t;
    t=*a; 
    *a=*b; 
    *b=t;
} 