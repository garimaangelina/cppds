//GARIMA ANGELINA
//PRN: 22070123042
#include<iostream>
using namespace std;
int main(){
    int dig,rem,q;
    cout<<"Enter a number - ";
    cin>>dig;
    q=dig/10;
    rem=dig%10;

   for(int i=0;i<2;i++){
        switch(q){
    case 0: cout<<"Zero ";
     break;
    case 1: cout<<"one "; 
    break;
    case 2: cout<<"Two" ; 
    break;
    case 3: cout<<"Three "; 
    break;
    case 4: cout<<"Four "; 
    break;
    case 5: cout<<"five "; 
    break;
    case 6: cout<<"Six ";
     break;
    case 7: cout<<"Seven "; 
    break;
    case 8: cout<<"eight "; 
    break;
    case 9: cout<<"nine ";
     break;
    }
    q=rem;

}
}