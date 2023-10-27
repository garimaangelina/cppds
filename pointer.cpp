//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int var,b; float fvar;
    int *ptr=&var;
    float *floatptr=&fvar;//the data type of variable must be same as that of he pointer
    //it tells compiler about the datatype of vlue stored on that location
    cout<<"Enter a number=";
    cin>>var;
    cout<<"Value of vriable - "<<var<<endl;
    cout<<"Value stored in this pointer- "<<*ptr<<endl;
    cout<<"Location of variable - "<<ptr<<endl;
    cout<<"Location of pointer- "<<&ptr<<endl;
    // & gives addres of vaiable
    // * indicates value of variable 
    cout<<"Enter a float number=";
    cin>>fvar;
    cout<<"/n/n Value of variable - "<<fvar<<endl;
    cout<<"Value stored in this pointer- "<<*floatptr<<endl;
    cout<<"Location of variable - "<<floatptr<<endl;
    cout<<"Location of pointer- "<<&floatptr;
}