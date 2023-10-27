//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class cube{
    public: //access specifier
    double height=2.0;
    double width=3.0;
    double length=4.0;

    void volume(){
        cout<<"Enter length - ";
        cin>>length;
        cout<<"Enter width - ";
        cin>>width;
        cout<<"Enter height - ";
        cin>>height;
       // double vol=(c1.height)*(c1.width)*(c1.length);
       // cout<<"volume= "<<vol;
       }
    void calculator(){
        double vol=(height)*(width)*(length);
        cout<<"Volume - "<<vol;
    }
 };
int main(){
    cube c1;
    c1.volume();
    c1.calculator();
}