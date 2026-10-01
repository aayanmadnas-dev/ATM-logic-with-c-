#include<iostream>
using namespace std;

class Balance
{
	public:
		int balance ;
		void blc()
		{
			balance=10000;
			cout<<"YOUR BALANCE IS "<<balance<<" RUPEES.";
		}
};
class withdraw : public Balance
{
	public:
		void wdr(){
			int wdr;
		cout<<"ENTER AMOUNT TO BE WITHDRAW : ";
		cin>>wdr;
		cout<<"YOUR WITHDRAW OF AMOUNT "<<wdr<<" RUPEES IS DONE."<<endl;
		int nblc;
		balance=10000;
		nblc = balance-wdr;
		cout<<"YOUR NEW BALANCE IS "<<nblc<<" RUPEES."<<endl;
	}
};

class Deposit : public Balance
{
	public:
		void dpt(){
			int dpt;
		cout<<"ENTER AMOUNT TO BE DEPOSIT : ";
		cin>>dpt;
		cout<<"YOUR DEPOSIT OF AMOUNT "<<dpt<<" RUPEES  IS DONE."<<endl;
		int nblc;
		balance=10000;
		nblc = balance+dpt;
		cout<<"YOUR NEW BALANCE IS "<<nblc<<" RUPEES."<<endl;
	}
};

class Changepn
{
	public:
		int npn;
		void newpn()
		{
			cout<<"ENTER YOUR NEW PIN : ";
			cin>>npn;
			cout<<"YOUR PIN HAS BEEN SUCCESFULLY CHANGED."<<endl;
		}
};

int main()
{
	cout<<"WELCOME TO THE BANK OF INDORE"<<endl;
	long long trueacc;
	trueacc = 12345678;
	long long truepn;
	truepn = 1234;
	cout<<"PLEASE ENTER YOUR ACCOUNT NUMBER : "<<endl;
	long long acc;
	cin>>acc;
	cout<<"PLEASE ENTER YOUR PIN : "<<endl;
	int pn;
	cin>>pn;
	if(acc==trueacc && pn==truepn)
	{
		cout<<"HOW CAN WE HELP YOU : "<<endl;
	cout<<"1. WITHDRAW"<<endl;
	cout<<"2. DEPOSIT"<<endl;
	cout<<"3. CHECK BALANCCE"<<endl;
	cout<<"4. CHANGE PIN"<<endl;
	int op;
	cin>>op;
			if(op==1)
		{
		withdraw wdr;
		wdr.wdr();
		}
			else if(op==2)
		{
			Deposit dpt;
			dpt.dpt();
		}
			else if(op==3)
		{
			Balance blc;
			blc.blc();
		}
			else if(op==4)
		{
			cout<<"ENTER YOUR CURRENT PIN : ";
			cin>>pn;
			if(pn==truepn)
			{
				Changepn cpn;
				cpn.newpn();
			}
			else
			{
				cout<<"YOU ENTERED A WRONG PIN."<<endl;
			}
		}	
	}
	else
	{
		cout<<"YOU ENTERED WRONG DETAILS"<<endl;	
	}
}
