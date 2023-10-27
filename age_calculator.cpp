//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class calender{
    public:
    int year;
    int month;
    int day;
    int yob;
    int mob;
    int dob;
    int choice;
    calender(){
    	cout<<"Enter current date - \n";
        cout<<"Enter year - ";
        cin>>year;
        cout<<"Enter month - ";
        cin>>month;
        cout<<"Enter day - ";
        cin>>day;
        cout<<"1.Calculate Age \n";
        cout<<"2.Exit";
        cin>>choice;
        if(choice==1){
        cout<<"Enter year of birth - ";
        cin>>yob;
        cout<<"Enter month of birth - ";
        cin>>mob;
        cout<<"Enter date of birth - ";
        cin>>dob;}
		}
    
    int checker(){
        int year_diff,month_diff,day_diff;
        if(mob>month){
        year_diff=year-yob-1;}
        else{
		year_diff=year-yob;
		}
        month_diff=month-mob;
        if(month_diff<0){
        	month_diff=12+month_diff;
        }
        day_diff=day-dob;
        if(day_diff<0){	
		
        	day_diff=31+day_diff;
			}
		
		cout<<"Age = "<<year_diff<<" Years "<<month_diff<<" Months "<<day_diff<<" days ";}
};
int main(){
    calender c1;
    if(c1.choice==1){
	
    c1.checker();}
    else{
    	cout<<"Date - "<<c1.day<<" - "<<c1.month<<" - "<<c1.year;}
	
    return 0;
}