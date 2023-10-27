//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
	int number,temprory;
	cout<<"number of elements - "; cin>>number;
	
	int test_array[number];
	
	for(int iterator=0;iterator<number;iterator++){
		cout<<"Enter element  "<<iterator+1<<" - ";
		cin>>test_array[iterator];
	}
	
	for(int iterator=0;iterator<number-1;iterator++){
		for(int n_iterator=0;n_iterator<number-1;n_iterator++){
			
			if(test_array[n_iterator]>test_array[n_iterator+1]){
				
			
				temprory=test_array[n_iterator];
				test_array[n_iterator]=test_array[n_iterator+1];
				test_array[n_iterator+1]=temprory;
			}
		}
	}
	for(int iterator=0;iterator<number;iterator++){
		cout<<"Element "<<iterator+1<<"-"<<test_array[iterator]<<endl;
	}
	
	
}
