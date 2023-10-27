//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;

void bubble_sorter(int number,int parameter_array[100]);

int main(){
	int size,temprory,number;
	cout<<"number of elements - "; cin>>size;
	
	int test_array[size];
	
	for(int iterator=0;iterator<size;iterator++){
		cout<<"Enter element  "<<iterator+1<<" - ";
		cin>>test_array[iterator];
	}
	
	bubble_sorter(size,test_array);
	
}

void bubble_sorter(int number,int parameter_array[]){
	int temprory;
	for(int iterator=0;iterator<number-1;iterator++){
		for(int n_iterator=0;n_iterator<number-1;n_iterator++){
			
			if(parameter_array[n_iterator]>parameter_array[n_iterator+1]){
				
			
				temprory=parameter_array[n_iterator];
				parameter_array[n_iterator]=parameter_array[n_iterator+1];
				parameter_array[n_iterator+1]=temprory;
			}
		}
	}
	for(int iterator=0;iterator<number;iterator++){
		cout<<"Element "<<iterator+1<<"-"<<parameter_array[iterator]<<endl;
	}
}