//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class calender{
    public:
    int year;
    int month;
    int day;
    calender(){
    	cout<<"Enter current date - ";
        cout<<"Enter year - ";
        cin>>year;
        cout<<"Enter month - ";
        cin>>month;
        cout<<"Enter day - ";
        cin>>day;
    }
    int checker(){
        cout<<"Entered Date - "<<day<<" - "<<month<<" - "<<year<<endl;
        if(year%4==0 & year%400==0){
            cout<<"Year is leap";
            }
        else{
            cout<<"Year is not leap";
        }
         
    }
};
int main(){
    calender c1;
    c1.checker();
    return 0;
}