//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    char str1[]="SIT_E&TC";
    char str2[]={'S','I','T','_','E','&','T','C','\0'};
    cout<<str1<<endl;
    cout<<str2<<endl;
    char str3[100];
    cout<<"Enter a string - ";
    cin.get(str3,100);
    cout<<str3<<endl;
    char *sptr=str3;
    int counter=0,a=0;
    while(a==0){
        if(*sptr=='\0'){
            a=1;
        }
        else{
            if(*sptr!=' '){
            counter++;}
        }
        sptr++;
    }
    cout<<"Number of characters= "<<counter;
}