//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class Rectangle{  //Main class
	private:
		double width,length;
	public:
		double Area();
	Rectangle(){
		cout<<"Enter Width- "; cin>>width;
		cout<<"Enter length- "; cin>>length;
	}
};
class Cube:public Rectangle{ //sub class of main class 'Rectangle'
	private:
		double height;
	public:
		double volume();
	Cube(){
	   cout<<"Enter height- "; cin>>height;	
	}
}; 

double Rectangle::Area(){ // '::' operator is used for scope resolution 
	return width*length;
}
double Cube::volume(){
	return Area()*height;
}
main(){
	Cube c1;
	cout<<"Volume - "<<c1.volume()<<endl;
	//Rectangle r1;
	cout<<"Area - "<<c1.Area();
}
