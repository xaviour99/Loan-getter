#include<iostream.h>
//using namespace std;
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
class loan
	{
	protected:
	int DOB;
	char name[15];
	double salary;
	char PAN[15];
	char bankac[50];
	int status;
	int time;
	double rep;
	double remaining;
	double installment;
	double interest;
	public:
	double loanamt;
	double ab;
	public:
	void get_details();
	void display_records();
	void returnm();
	int returns();
	};
class repay:public loan
{
	public:
	friend repay verification(repay);
	void abcd()
	{
	cout<<"Hello world";}

	};
void loan::returnm()
{
//cout<<"hi";
	if(loanamt<100000)
	{
	time=3;
	}
	else
	{
	time=6;
	cout<<"Your time period for returning the amount is "<<time<<" months and the intrest will be 3% of the loan amount\n";
	cout<<"\nIf you fail to pay within "<<time<<" months\n";
	cout<<"\nYou have to pay 12% of your loan intrest for every 15days is "<<(loanamt*12)/100<<" as your amount is \n"<<loanamt;
} }
int loan::returns()
{
	if(loanamt!=0)
       //	cout<<loanamt;
	{
		if(time==3&&loanamt>0)
		       {installment=loanamt/3;
			       //	cout<<installment<<"\n";
			       cout<<"\n"<<"Installment"<<" "<<"interest amount\n";
			for(int j=0;j<3;j++)
			       {       //	cout<<"lets repay your loan \n";
				//cout<<"Enter how much you want to return \n";
			       //	cout<<installment<<"\n";
				interest=((loanamt*3)/100);
				cout<<installment<<"\t\t"<<interest<<"\n";
				loanamt=loanamt-installment;
				//cout<<loanamt;
				}
		       }
		else
		{
			cout<<"\n"<<"Installment amount"<<" "<<"Interest amount\n";

			for(int j=0;j<=6;j++)
				{
			       //	cout<<"lets repay your loan \n";
				//cout<<"Enter how much you want to return \n";
				interest=((loanamt*3)/100);
				cout<<installment<<"\t"<<interest<<"\n";
			       //	cin>>installment;
				loanamt=loanamt-installment;}
		}}return loanamt;}

int main()
{
	repay o1;
	int ch;
	clrscr();
	while(1)
	{
		cout<<"\nMenu:\n1:Get the data\n2:Verify\n3:Display\n4:Repay\n5:Exit";
		cout<<"\nEnter your choice \n";
		cin>>ch;

			switch(ch)
			{
			case 1: o1.get_details();
			break;
			case 2:o1=verification(o1);
			break;
			case 3:	o1.display_records();
			break;
			case 4:o1.returnm();
			o1.returns();
			break;
			case 5:exit(0);
			break;
			default:break;
			}
		}
}
void loan::get_details()
{
	cout<<"enter your age \n" ;
	cin>>DOB;
	cout<<"enter your name \n";
	cin>>name;
	cout<<"Enter your salary \n";
	cin>>salary;
	cout<<"Enter your PAN number \n";
	cin>>PAN;
	cout<<"enter your bank ac number \n";
	cin>>bankac;
}
repay verification(repay n)
{
 //loan m;
 if((strlen(n.PAN))==10)
 {
	if((n.DOB>18)&&(n.salary>9999))
		n.status=1;
	else
		n.status=0;

 }
 if(n.status==1)
 {
	if(n.salary>30000)
	{
		cout<<"\nYou're eligible for the loan, your bank acount is \n"<<n.bankac<<"\nYour limit amount for the loan is amt 200000,you can choose any amt in this limit\n";
		cout<<"\nYour intrest for your loan will be 3%. \nAnd if you fail to pay the loan late the late intrest will be 12% for 15 days";
		cout<<"\nEnter how much money do you need? \n";
		cin>>n.ab;
		if(n.ab<=200000)
	       {	n.loanamt=n.ab; }
	else
	{cout<<"\nYOU'RE NOT ELIGIBLE FOR SUCH A AMOUNT\n";
	n.loanamt=0;}
	 }
	else
	{
	 cout<<"\nYou're eligible for the loan, your bank acount \n"<<n.bankac<<"\nYour limit amount for the loan is amt 100000,you can choose any amt in this limit\n";
	 cout<<"\nYour intrest for your loan will be 3%. \nAnd if you fail to pay the loan late the late intrest will be 12% for 15 days";
	cout<<"\nEnter how much money do you need? \n";
	cin>>n.ab;
	if(n.ab<=100000)
	n.loanamt=n.ab;
	else
       {	cout<<"\nYOU'RE NOT ELIGIBLE FOR SUCH A AMOUNT\n";
       n.loanamt=0;	}}
  }
 else
 cout<<"\nSorry we could'nt process your request may be your pan number or your age is not valid to get loan or may be your salary too \n";

 return n;
}

void loan::display_records()
{
 cout<<"--------------------\n";
 cout<<"name\t"<<name<<"\n";
 cout<<"Pan\t"<<PAN<<"\n";
 cout<<"Bankac\t"<<bankac<<"\n";
 cout<<"loanamount\t"<<loanamt<<"\n";
 cout<<"Thank you\n";
 cout<<"------------------------\n";
 }
