#include<iostream>
using namespace std;
int main ()
{
  int balance=17000, choice, amount, withdraw;
  
  do {
  	cout<<"1. Check Balance"<<endl;
	cout<<"2. Deposit Money"<<endl;
	cout<<"3. Withdraw Money"<<endl;
	cout<<"4. Exit"<<endl;  
	
	cout<<" Enter your choice:"<<endl;
	cin>>choice;
	
	switch(choice){
	 case 1:
	 	cout<<"Current Balance: "<<balance<<endl;
	 	break;
	
	case 2:
		cout<<"Enter the amount to deposit:"<<endl;
		cin>>amount;
		if( amount >0)
		{
		balance+=amount;
		cout<<"Current Balance: "<<balance<<endl;
	    }
	    else
	    {
	    	cout<<"ERROR!"<<endl; 
	    	continue;
	    }
		break;
		
	case 3:
		cout<<"Enter the amount to withdraw:"<<endl;
		cin>>withdraw;
		if (withdraw >0)
		{
		 if (withdraw<=balance)
		 { 
	      balance -=withdraw;
		  cout<<"Withdrawing "<<withdraw<<endl;
		 }
	    }
	    else
		{
	      cout<<"ERROR!"<<endl;
	      continue;
		}
		 break;
		 
	case 4:
		cout<<"Exiting..."<<endl;
		break;
		
	default:
		cout<<"Invalid choice.Try Again"<<endl;
		break;
	}
  }while(choice!=4);
	
	
	
	
	return 0;
}
