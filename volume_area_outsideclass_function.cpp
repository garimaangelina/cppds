//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class Rectangle{
	private:
		double width,length;
	public:
		double Area();
	Rectangle(){
		cout<<"Enter Width- "; cin>>width;
		cout<<"Enter length- "; cin>>length;
	}
};
double Rectangle::Area(){
	return width*length;
}
main(){
	Rectangle r1;
	cout<<r1.Area();
}
