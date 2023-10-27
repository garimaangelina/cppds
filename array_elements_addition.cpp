//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
int main(){
    int i,j,rows_matrix1,column_matrix1,rows_matrix2,column_matrix2;
    cout<<"Enter No. of Rows (Matrix 1)- ";
    cin>>rows_matrix1;
    cout<<"Enter No. of Columns (Matrix 1)- ";
    cin>>column_matrix1;
    cout<<"Enter No. of Rows (Matrix 2)- ";
    cin>>rows_matrix2;
    cout<<"Enter No. of Columns (Matrix 2)- ";
    cin>>column_matrix2;
    int matrix1[rows_matrix1][column_matrix1],matrix2[rows_matrix2][column_matrix2];
    cout<<"Enter Matrix 1"<<endl;
    for(i=0;i<rows_matrix1;i++){
        for(j=0;j<column_matrix1;j++){
            cout<<"Enter element "<<i<<j<<" - ";
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter Matrix 2"<<endl;
    for(i=0;i<rows_matrix2;i++){
        for(j=0;j<column_matrix2;j++){
            cout<<"Enter element "<<i<<j<<" - ";
            cin>>matrix2[i][j];
        }
    }
    if(rows_matrix1==rows_matrix2 && column_matrix1==column_matrix2){
    for(i=0;i<rows_matrix2;i++){
        cout<<endl;
        for(j=0;j<column_matrix2;j++){
            cout<<matrix1[i][j]+matrix2[i][j]<<"\t";
        }
    }}
    else{
        cout<<"Invalid Order!! Matrix Can't be added.";
    }
}