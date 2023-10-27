//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class cube{
    private: //access specifier
    double height=2.0;
    public:
    double width=3.0;
    double length=4.0;
    cube(){ //constructor which is called by itself as soon as oject is created.
        cout<<"Enter length - ";
        cin>>length;
        cout<<"Enter width - ";
        cin>>width;
        cout<<"Enter height - ";
        cin>>height;
    }
    double vol_calculator(){
        double vol=(height)*(width)*(length);
        //cout<<vol<<endl;
        return vol;
    }
    double update(){ //setter - sets value of a private variable
    cout<<"Update Height- ";
    cin>>height;
    return 0;
    }
    double printer(){ //getter -  gets value of a private variable in public 
        return height;
    }
    ~cube(){   //constructor which is called by itself as soon as oject is created. 
               //it destroys the variables and clears the memory
        cout<<"Dectructor Executed Sucessfully.";}
};
 int main(){
    cube c1;
    double vol=c1.vol_calculator();
    cout<<"Volume- "<<vol<<endl;
    c1.update();
    double updated_vol=c1.vol_calculator();
    cout<<"Updated Volume= "<<endl;
    cout<<updated_vol<<endl;
    double h=c1.printer();
    cout<<"Height = "<<h<<endl;
    }