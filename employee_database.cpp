//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
struct employee
{
	char name[20];
	int age;
	float salary;
	char dept[20];
}emp[100];
int main(){
	int n;
	printf("Enter number of records - "); scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\t\t Employee %d \n",i+1);
		printf("Enter name - ");scanf("%s",&emp[i].name);
		printf("Enter age - ");scanf("%d",&emp[i].age);
		printf("Enter salary - ");scanf("%f",&emp[i].salary);
		printf("Enter department - ");scanf("%s",&emp[i].dept);
	}
	printf("\t\tRecords  - ");
	for(int i=0;i<n;i++){
		printf("\t\t Employee %d \n",i+1);
		printf("Name - %s \n",emp[i].name);
		printf("Age - %d \n",emp[i].age);
		printf("Salary - %f \n",emp[i].salary);
		printf("Department - %s \n",emp[i].dept);
	}
	
}