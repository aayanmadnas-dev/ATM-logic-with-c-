#include<iostream>
using namespace std;

int main()
{
	int ent;
	cout<<"Welcome to Bank of Indore (Please Begin by entering :)"<<endl;
	cout<<"Please enter your PIN : ";
	int pn;
	cin>>pn;
	if(pn==1234){
		cout<<"What would you like to do : "<<endl;
	cout<<"1. Withdraw"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Check Balance"<<endl;
	cout<<"4. Change PIN"<<endl;
	int op;
	cin>>op;
	int amt;
	amt=6000;
	if(op==1)
	{
		cout<<"Enter amount to  withdraw : "<<endl;
		int wdr;
		cin>>wdr;
		cout<<"The Balance of "<<wdr<<" Rupees is succesfully withdrawed"<<endl;
		cout<<"Your new Balance is : "<<amt-wdr;
	}	
	else if(op==2)
	{
		cout<<"Enter amount to Deposit : "<<endl;
		int dpt;
		cin>>dpt;
		cout<<"The Balance of "<<dpt<<" Rupees is succesfully Deposited"<<endl;
		cout<<"Your new Balance is : "<<amt+dpt;
	}
	else if(op==3)
	{
		cout<<"Your balance is : "<<amt;
	}
	else if(op==4)
	{
		cout<<"Enter your current PIN : "<<endl;
		cin>>pn;
		if(pn==pn)
		{
			cout<<"Enter New Four digit PIN : "<<endl;
			int npn;
			cin>>npn;
			npn==pn;
			cout<<"Your PIN is Succesfully changed."<<endl;
			cout<<"Would you like to reset your operations?"<<endl;
			int rst;
			if(rst==1)
			{
				cout<<"Enter your new PIN : "<<endl;
			cin>>npn;
	if(npn==npn){
		cout<<"What would you like to do : "<<endl;
	cout<<"1. Withdraw"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Check Balance"<<endl;
	cout<<"4. Change PIN"<<endl;
	int op;
	cin>>op;
	int amt;
	amt=6000;
	if(op==1)
	{
		cout<<"Enter amount to  withdraw : "<<endl;
		int wdr;
		cin>>wdr;
		cout<<"The Balance of "<<wdr<<" Rupees is succesfully withdrawed"<<endl;
		cout<<"Your new Balance is : "<<amt-wdr;
	}	
	else if(op==2)
	{
		cout<<"Enter amount to Deposit : "<<endl;
		int dpt;
		cin>>dpt;
		cout<<"The Balance of "<<dpt<<" Rupees is succesfully Deposited"<<endl;
		cout<<"Your new Balance is : "<<amt+dpt;
	}
	else if(op==3)
	{
		cout<<"Your balance is : "<<amt;
	}
		}
		else {
			cout<<"You Enter wrong PIN";
		}
}
		else 
		{
			cout<<"Thank you for contacting us <3"<<endl;
		}
			}
}
	}
	else {
		cout<<"Wrong PIN :("<<endl;
	}	
}
