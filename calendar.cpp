//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class calender{
    public:
    int year;
    calender(){ //constructor
        cout<<"Enter year - ";
        cin>>year;
    }
    int checker(){
        if(year%4==0 && year%400!=0){
            cout<<"Year is leap";
            }
        else{
            cout<<"Year is not leap";
        }
    return 0;
    }
};
int main(){
    calender c1;
    c1.checker();
    return 0;
}