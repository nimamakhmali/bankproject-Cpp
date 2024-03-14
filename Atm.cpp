#include<iostream>
#include<fstream>
#include<ctype.h>
#include<iomanip>
#include<stdio.h>
#include <conio.h>
using namespace std;

class Account
{
private:
	int accountNumber;
	char name[50];
	int deposit;
	char type;
public:
	void create_account(int accno)
	{
		accountNumber = accno;
		cout<<"\nEnter The Name of The Account Holder : ";
		cin.ignore();
		gets(name);
		cout<<"\nEnter Type of The Account (C/S) : ";
		cin>>type;
		type=toupper(type);
		cout<<"\nEnter The amount: ";
		cin>>deposit;
		cout<<"\n\n\n === Account Created... ===";
	}	//function to get data from user

	void show_account()
	{
		cout<<"\nAccount No. : "<<accountNumber;
		cout<<"\nAccount Holder Name : ";
		cout<<name;
		cout<<"\nType of Account : "<<type;
		cout<<"\nBalance amount : "<<deposit;
	}	//function to show data on screen

	void modify()
	{
		cout<<"\nThe Account No."<<accountNumber;
		cout<<"\n\nEnter The Name of The Account Holder : ";
		cin.ignore();
		gets(name);
		cout<<"\nEnter Type of The Account (Checking/Saving) : ";
		cin>>type;
		type=toupper(type);
		cout<<"\nEnter The amount : ";
		cin>>deposit;
	}   //function to get new data from user

	void dep(int x){	//function to accept amount and add to balance amount
		deposit+=x;
	}

	void draw(int x){	//function to accept amount and subtract from balance amount
		deposit-=x;
	}

	void report(){	//function to show data in tabular format
		cout<<accountNumber<<setw(14)<<name<<setw(15)<<type<<setw(10)<<deposit<<endl;
	}

	int retaccountNumber(){	//function to return Account number
		return accountNumber;
	}

	int retdeposit(){	//function to return balance amount
		return deposit;
	}

	char rettype(){	//function to return type of Account
		return type;
	}

};

void welcome();
void persian_menu();
void english_menu();
void write_account();
void display_sp();
void modify_account();
void delete_account();
void display_all(int);
void deposit_withdraw();
void Titr();

int main()
{
	Titr();
	welcome();
	system("CLS");
	cout<<endl;
	return 0;
}


void english_menu()
{
  int num, ch;	
	do
	{
		cout<<endl;
		cout<<"\n\n\n\t   MAIN MENU                                                                                     " ;
		cout<<"\n\n\t   01. NEW ACCOUNT                     " ;
		cout<<"\n\n\t   02. DEPOSIT AMOUNT                  " ;
		cout<<"\n\n\t   03. WITHDRAW AMOUNT                 " ;
		cout<<"\n\n\t   04. BALANCE ENQUIRY                 " ;
		cout<<"\n\n\t   05. ALL ACCOUNT HOLDER LIST         " ; 
		cout<<"\n\n\t   06. CLOSE AN ACCOUNT                " ;
		cout<<"\n\n\t   07. MODIFY AN ACCOUNT               " ;
		cout<<"\n\n\t   08. EXIT                            " ;
		cout<<"\n\n\n\t Select Your Option (1-8) ";
		
		cin>>ch;
		cout<<endl;

		switch(ch)
		{
		case 1:

			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:

			break;

		case 7:

			break;

		case 8:

			break;
           
		default:

            break;
		}
		cout << "\n\n" << "--------------------------" <<endl;
		system("Pause");

		system("CLS");

	}while(ch!=8);


}
void persian_menu()
{
  int num, ch;	
	do
	{
		cout<<endl;
		cout<<"\n\n\n\t   MAIN MENU                                                                                     " ;
		cout<<"\n\n\t  EJAD HESAB .01                              " ;
		cout<<"\n\n\t  SEPORDE(AFZAYESH) VAJH .02                  " ;
		cout<<"\n\n\t  BARDASHT(KAHESH) VAJH .03                   " ;
		cout<<"\n\n\t  ESTELAM MOJODI .04                          " ;
		cout<<"\n\n\t  FEHREST HESAB HA .05                        " ; 
		cout<<"\n\n\t  BASTAN HESAB .06                            " ;
		cout<<"\n\n\t  ESLAH HESAB .07                             " ;
		cout<<"\n\n\t  Khoroj .08                                  " ;
		cout<<"\n\n\n\t Select Your Option (1-8) ";
		cin>>ch;
		cout<<endl;

		switch(ch)
		{
		case 1:

			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:
		
			break;

		case 6:

			break;

		case 7:


			break;

		case 8:

			break;

		default:
		    cout<<"Select Your Option (1-8): ";
            break;
		}

		cout << "\n\n" << "--------------------------" <<endl;
		system("Pause");

		system("CLS");

	}while(ch!=8);


}



























void welcome()
{
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t\t Hello  ((WELCOME)) \3 \n\n\n\t\t\t\t\t\t Please Select your language ";

    cout<<"\n\n\n\t\t\t\t\t\t 1-English  \t\t\t\t\t2-Persian"<<endl<<"\t\t\t\t\t\t\t\t\t\t";
	int x;
	cin>>x;
	if(x==1)
	{
		system("cls");
		english_menu();
	}
	if(x==2)
	{
		system("cls");
		persian_menu();
	}
  	cout <<"\n\n\n"<< "            \t\t\t\t\t\t((Nima Bank))"<<"\n\n";
  	getch();
   system("cls");
}