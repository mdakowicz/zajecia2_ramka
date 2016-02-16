#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;


int gotoxy( int x, int y ) 
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );
}

policz()
{
	char znak='a';
	system("cls");
	cout<<"policz"<<endl;
	cout<<endl<<"Wcisnij k aby wrocic do menu."<<endl;
	znak=getch();
	while (znak!='k')
	{
		znak=getch();
	}	
}

dodaj()
{
	char znak='a';
	system("cls");
	cout<<"dodaj"<<endl;
	cout<<endl<<"Wcisnij k aby wrocic do menu."<<endl;
	znak=getch();
	while (znak!='k')
	{
		znak=getch();
	}	
}

zapisz()
{
	char znak='a';
	system("cls");
	cout<<"zapisz"<<endl;
	cout<<endl<<"Wcisnij k aby wrocic do menu."<<endl;
	znak=getch();
	while (znak!='k')
	{
		znak=getch();
	}	
}

pomoc()
{
	char znak='a';
	system("cls");
	cout<<"pomoc"<<endl;
	cout<<endl<<"Wcisnij k aby wrocic do menu."<<endl;
	znak=getch();
	while (znak!='k')
	{
		znak=getch();
	}	
}

rysuj_menu()
{
	int y=4;
	int x=10;
	
	gotoxy(30,3);
	cout<<"Pomoc nauczyciela"<<endl;
	
	gotoxy(x,y);	
	for (int i=1; i<20; i++) {cout<<(char)186;y=y+1;gotoxy(x,y);}
	cout<<(char)200;
			
	for (int i=1; i<60; i++) {cout<<(char)205;x=x+1;gotoxy(x,y);}
	cout<<(char)188;
		
	gotoxy(x,y-1);
	for (int i=1; i<20; i++) {cout<<(char)186;y=y-1;gotoxy(x,y);}
	cout<<(char)187;
	
	gotoxy(x-1,y);
	for (int i=1; i<60; i++) {cout<<(char)205;x=x-1;gotoxy(x,y);}
	cout<<(char)201;
		
	gotoxy(30,6);
	cout<<"1: Dodaj";
	gotoxy(30,10);
	cout<<"2: Policz";
	gotoxy(30,14);
	cout<<"3: Zapisz";
	gotoxy(30,18);
	cout<<"4: Pomoc";
	gotoxy(30,22);
	cout<<"5: Zamknij";
	cout<<endl;	
}


int main ()
{
	int y=4;
	int x=10;
	bool wyjscie = false;
	char wybor;

	while (!wyjscie) // dopóki warunek prawdziwy, wykonuj kod
	{    

		system("cls");		
		rysuj_menu();
		wybor=getch();
		
		switch(wybor)
		{
			case '1':
				dodaj(); break;
			case '2':
				policz(); break;
			case '3':
				zapisz(); break;
			case '4':
				pomoc(); break;
			case '5':
				wyjscie=true; break;
			default:
				system("cls");
				cout << "Wybierz ktoras z opcji" << endl; 
				system("pause");
				system("cls");
				break;
		}
		gotoxy(x+10,y+20);
		
	}
	system("cls");
	gotoxy(30,3);
	cout<<"Zegnaj"<<endl;

	return 0;
}

