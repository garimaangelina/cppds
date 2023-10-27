//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class cube{
    public: //access specifier
//cannot access private or protected element outside class.
    double height=2.0;
    double width=3.0;
    double length=4.0;
 };
int main(){
    cube c1;
    double vol=(c1.height)*(c1.width)*(c1.length);
    cout<<"volume= "<<vol;

}