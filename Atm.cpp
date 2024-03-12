#include <iostream>
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
 void create_account(int accountNumber)
 {

 }
 void show_account()
 {

 }
 void modify()
 {

 }
 void dep()
 {

 }
 void draw()
 {

 }
 void report()
 {

 }
 int retacno()
 {

 }
 int retdeposit()
 {

 }
 char rettype()
 {

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
	do
	{
	}while(true);
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