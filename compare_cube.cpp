//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class cube{
    public: //access specifier
    double height=2.0;
    double width=3.0;
    double length=4.0;

    cube(){
        cout<<"Enter length - ";
        cin>>length;
        cout<<"Enter width - ";
        cin>>width;
        cout<<"Enter height - ";
        cin>>height;
       // double vol=(c1.height)*(c1.width)*(c1.length);
       // cout<<"volume= "<<vol;
       }
    double vol_calculator(){
        double vol=(height)*(width)*(length);
        cout<<vol<<endl;
        return vol;
    }
 };
int main(){
    cube c1;
    double vol=c1.vol_calculator();
    if(vol>50){
        cout<<"Cube is large";
         }
         else{
        cout<<"Cube is small";
         }
        return vol;
    }