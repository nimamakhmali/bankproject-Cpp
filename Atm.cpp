#include <iostream>
using namespace std;
class account 
{
 private:
 int acno;
 char name[50];
 int deposit;
 char type;
 public:
 void create_account(int acno)
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
void menu();
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
  menu();
  cout<<endl;
 cout << "                        Nima Bank"<<"\n\n";
 return 0;
}

void menu()
{
  int num , ch ;
  do
  {
    		cout<<endl;
		cout<<"\n\n\n\t   MAIN MENU                                                                                     " ;
		cout<<"\n\n\t   01. NEW ACCOUNT                     --              EJAD HESAB .01                              " ;
		cout<<"\n\n\t   02. DEPOSIT AMOUNT                  --              SEPORDE(AFZAYESH) VAJH .02                  " ;
		cout<<"\n\n\t   03. WITHDRAW AMOUNT                 --              BARDASHT(KAHESH) VAJH .03                   " ;
		cout<<"\n\n\t   04. BALANCE ENQUIRY                 --              ESTELAM MOJODI .04                          " ;
		cout<<"\n\n\t   05. ALL ACCOUNT HOLDER LIST         --              FEHREST HESAB HA .05                        " ; 
		cout<<"\n\n\t   06. CLOSE AN ACCOUNT                --              BASTAN HESAB .06                            " ;
		cout<<"\n\n\t   07. MODIFY AN ACCOUNT               --              ESLAH HESAB .07                             " ;
		cout<<"\n\n\t   08. EXIT                            --              Khoroj .08                                  " ;
		cout<<"\n\n\n\t Select Your Option (1-8) ";
		cin>>ch;
		cout<<endl;
       

       switch (ch)
       {
       case 1:
           write_account();       
        break;
       case 2:
         cout<<"\n\n\tEnter The account No. : "; cin>>num;
         deposit_withdraw(num , 1);
         break;
       default:
        break;
       }

  }while(ch!=8);
}