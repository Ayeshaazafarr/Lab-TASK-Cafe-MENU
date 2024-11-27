#include<iostream>
using namespace std;
int main(){
	int choice;
	double totalbill=0.0;
	
	do{
		cout<<" CAFE MENU  "<<endl;
		cout<<"1-Tea   $2"<<endl;
		cout<<"2-Coffee   $3"<<endl;
		cout<<"3-Sandwich   $5"<<endl;
		cout<<"4-Burger  $7"<<endl;
		cout<<"5-Exit"<<endl;
		cout<<"Enter your choice";
		cin>>choice;
		
		switch(choice){
		
	  case 1:
	  	totalbill+=2; break;
	  	
	  	case 2:
	  		totalbill+=3; break;
	  		
	  		case 3: 
	  		totalbill+=5; break;
	  		
	  	case 4: 
	  	 
	  	totalbill+=7; break;
	  	
	  	case 5 :
	  		cout<<"Exit"<<endl;
	  	default :
	  		cout<<"Invalid Choice";
	}
	}while(choice!=5);
	cout<<"Your totalbill is "<<totalbill<<endl;
	
	
	
	return 0;
}
