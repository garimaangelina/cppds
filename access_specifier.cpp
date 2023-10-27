//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class cube{
    public: //access specifier
    double height=2.0;
    double width=3.0;
    double length=4.0;
 };
int main(){
    cube c1;
    cout<<"Enter length - ";
    cin>>c1.length;
    cout<<"Enter width - ";
    cin>>c1.width;
    cout<<"Enter height - ";
    cin>>c1.height;
    double vol=(c1.height)*(c1.width)*(c1.length);
    cout<<"volume= "<<vol;

}