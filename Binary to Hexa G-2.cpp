
//program in C++ to convert a binary number to hexadecimal number.

#include <iostream>
#include <math.h>
using namespace std;

void display();
int binary();
void groupm();
void about();
void exit();

int main()
{
	fira:
	 	int f = 0;
	system ("color 8f");
	system ("title Binary to hexadecimal converter");
	system ("cls");

	display();
	{
		int a = 0;
		cin>>a;
		if (a==1)
		binary();
		if (a==2)
		groupm();
		if (a==3)
		about();
		if (a>4)
		cout <<"\a\a\a\aThere is no number("<<a<<") in the list pleas enter the number (1-4)!!";
		if (a==4)
		goto chaw;
	}
  
  cout <<"\n\n>> >> ";
  cout <<"Back to MENU press(1).. or QUIT(2): ";
  cin>>f;
  if (f==1)
  goto fira;
  if (f==2)
  cout <<"Thank you for using this program\n";
  {
  	system ("exit");
  }
  
	chaw:
		{
			system ("pause");
		}
	
}

void display()
{
	cout <<"\n <-Binary To Hexadecimal Converter->\n ===================================\n"<<endl<<endl;
	cout <<"\t MENU\n\t ----\n";
	cout <<"\n\t 01. CONVERTER\n"<<endl;
	cout <<"\t 02. GROUP MEMBERS\n"<<endl;
	cout <<"\t 03. ABOUT\n"<<endl;
	cout <<"\t 04. Exit\n"<<endl;
	cout <<"\n>> ";
	cout <<"Select Your Option !! (1-4): ";
	
}

int binary()
{
	klay:
		 int c = 0;
	system ("cls");
	system ("color 6f");
	cout <<"\n Converter\n"<<endl;
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "\n Convert a binary number to hexadecimal number:\n";
	cout << " ----------------------------------------------\n";
	cout << "\n Input a binary number: ";
	cin>> binaryNumber;
  
  while (binaryNumber > 0) 
  {
   	rem = binaryNumber % 2;
   	dec = dec + rem * i;
   	i = i * 2;
   	binaryNumber = binaryNumber / 10;
  }
   i = 0;
 
  while (dec != 0) 
  {
   	hex[i] = dec % 16;
   	dec = dec / 16;
   	i++;
  }
  
  cout<<" The hexadecimal value: ";
  
  for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9) 
		{
	    	cout<<(char)(hex[j] + 55)<<" ";
		} 
		else
		{
	    	cout<<hex[j]<<"";
		}
	}
  
  cout <<"\n\n>> Convert agin press(1).. to continue press(any-num-key): ";
  cin>>c;
  cout << "-------------------------------------------------------------\n";
  if (c==1)
  goto klay;
  
}

void groupm()
{	
	system ("cls");
	system ("color 6e");
	cout <<"\n\n Group Members\t\tID\n -------------\t\t--\n";
	cout <<"\n 1.Abdela Zynu          0866\n";
	cout <<"\n 2.Firomsa Umer         0521\n";
	cout <<"\n 3.Demeke Mkoanent      0729\n";
	cout <<"\n 4.Gmechis chala        0604\n";
	cout <<"\n 5.Natnael Tefera       0605\n";
	cout <<"\n 6.Biruk Tadele         0476\n";
	cout <<"\n 7.Muluken                  \n";
	
}

void about()
{
	system ("color 6e");
	system ("cls");
	cout <<"\n About \n";
	cout <<" -----\n";
    cout <<"\n [program version - 1.0003]\n";
	cout <<" copy right @2012 E.C / 2019 G.C\n";
	cout <<" Program Devloper <Group Two>\n";
	cout <<" Devloped date 13-30-2019 G.C";
	cout <<" Laste Update Monday, June, 15, 2020 G.C";
	
}



