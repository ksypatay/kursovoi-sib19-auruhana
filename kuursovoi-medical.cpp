#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>

void menu();
using namespace std;
class one
{
	 public:
	 virtual void get()=0;
	 virtual void show()=0;	 
};


class info:public one
{
    public:
	char name[50],time[50];
	int num,age;
	void get()
	   {
	   	cin.sync();
		cout<<"\n Esiminizdi tirkeniz =";
		cin.getline(name,50);
		
		cout<<"\n Uakytty tirkeniz =";
		cin.getline(time,50);
		cout<<"\n Jasynyz =";
		cin>>age;
		cout<<"\n Nomirinizdi tirkeniz =";
		cin>>num;
		}
		void show()
		{
			cout<<"\n Esimi = "<<name;
			cout<<"\n Jasy ="<<age;
			cout<<"\n Nomeri ="<<num;
			cout<<"\n Uakyty ="<<time;
		}
		
};

class asel:public info
{
	public:
	info a;
	void get()
	{
	    system("cls");
		ofstream out("Asel.txt",ios::app|ios::binary);
		a.get();
		out.write((char*)&a,sizeof(info));
		out.close();
		cout<<"Sizdin jazbanyz saktaldy ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("Asel.txt");
		if(in==NULL)
		{
			cout<<"\n\nAkparat jok ";
			cout<<"\n\n\t\tJalgastyru ushin kez-kelgen batyrmany basynyz : ";
			getch();
			menu();
			
		}
		else{
		
		while(!in.eof())
		{
         in.read((char*)&a,sizeof(a));
       	a.show();
		}
		in.close();
		getch();
		menu();
	}}
};
class aibek:public info
{
	public:
	info a;
	void get()
	{
	    system("cls");
		ofstream out("Aibek.txt",ios::app|ios::binary);
		a.get();
		out.write((char*)&a,sizeof(info));
		out.close();
		cout<<"Sizdin jazbanyz saktaldy ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("Aibek.txt");
		if(in==NULL)
		{
			cout<<"Akparat jok ";
			cout<<"\nJalgastyru ushin kez-kelgen batyrmany basynyz : ";
			getch();
			menu();
			
		}
		else
		{
		
		while(!in.eof())
		{
         in.read((char*)&a,sizeof(a));
	    a.show();
		}
		in.close();
		cout<<"Jalgastyru ushin enter basynyz =";
		getch();
		menu();
	}}
	
};
class jaksylyk:public info
{
	public:
	info a;
	void get()
	{
		system("cls");
		ofstream out("Jaksylyk.txt",ios::app|ios::binary);
		a.get();
		out.write((char*)&a,sizeof(info));
		out.close();
		cout<<"Sizdin jazbanyz saktaldy ";
		getch();
		menu();
	}
		void show()
	{
		ifstream in("Jaksylyk.txt");
		if(in==NULL)
		{
			cout<<"Akparat jok ";
			cout<<"\nJalgastyru ushin kez-kelgen batyrmany basynyz : ";
			getch();
			menu();
			
		}
		else
		{
		
		while(!in.eof())
		{
         in.read((char*)&a,sizeof(info));

	
		a.show();
		}
		in.close();
	}}
	
};
class staff:public one
{
	public:
		
	char all[999];
	char name[50],age[20],sal[30],pos[20];;
	
	void get()
	{
		ofstream out("staff.txt",ios::app);
		{   system("cls");
			cin.sync();
			cout<<"\n Esiminizdi engiziniz = ";
			cin.getline(name,50);
			cout<<"\n Jasynyzdy engiziniz  = ";
			cin.getline(age,20);
			cout<<"\n Jalakynyzdy engiziniz = ";
			cin.getline(sal,30);
			cout<<"\n Mamandygynyzdy engiziniz =";
			cin.getline(pos,20);
			
		}
		out<<"\n Esimi = "<<name<<"\n Jasy = "<<age<<"\n Jalakysy = "<<sal<<"\n Mamandygy = "<<pos;
		out.close();
		cout<<"\n\nSizdin jazbanyz saktaldy :\n\t\t\tJalgastyru ushin kez-kelgen batyrmany basynyz  ";
		getch();
		menu();
	}
	void show()
	{
		
	  ifstream in("staff.txt");
	  if(!in)
	  {
	  	cout<<"Kate";
	  }
	  while(!(in.eof()))
	  {
	  	in.getline(all,999);
	  	cout<<all<<endl;
	  	
	  	
	  }	
	  in.close();
	  cout<<"\n\n\t\t\tJalgastyru ushin kez-kelgen batyrmany basynyz : ";
	  getch();
	  menu();
	}
	
};

class information
{
	public:
	void drinfo()
	{
    system("cls");
	system("color F3");
	cout<<"\n___________________________________________________________________________\n";
	cout<<"\t\t[Akparat pen jumys uakyttary tomende korsetilgen]\n";
	cout<<"-----------------------------------------------------------------------------\n";
	cout<<"\t\t Dr.Asel (Dermatolog)\n\n";
	cout<<"\t\t\t [Uakyty]:\n\n";
	cout<<"\t Duisenbi - Juma \t\t 09:00 - 17:00\n";
	cout<<"\t Senbi           \t\t 09:00 - 13:00\n";
	cout<<"\t Jeksenbi        \t\t Demalys\n";
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\t\t Dr.Aibek (Hirurg)\n\n";
	cout<<"\t\t\t [Uakyty]:\n\n";
	cout<<"\t Duisenbi - Juma  \t\t 10:00 - 18:00\n";
	cout<<"\t Senbi            \t\t Demalys\n";
	cout<<"\t Jeksenbi         \t\t 10:00 - 16:00\n";
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\t\t Dr.Jakyslyk (Urolog)\n\n";
	cout<<"\t\t\t [Uakyty]:\n\n";
	cout<<"\t Duisenbi - Sarsenbi \t\t 08:00 - 14:00\n";
	cout<<"\t Beisenbi            \t\t Demalys\n";
	cout<<"\t Juma - Jeksenbi     \t\t 11:00 - 18:00\n";
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\nJalgastyru ushin kez-kelgen batyrmany basynyz: ";
	getch();
	menu();
	
	}
};
void call_dr()
{
    system("cls");
	int tandau;
	cout<<"\n\n\n\t\t Dr.Asel-di tandau ushin 1-di basynyz \n\n\t\t Dr.Aibek-ti tandau ushin 2-ni basynyz \n\n\t\t Dr.Jaksylyk-ty tandau ushin 3-ti basynyz ";
	cin>>tandau;
	
	one *ptr;
	asel s3;
	aibek s4;
	jaksylyk s5;
	if(tandau==1)
	{
	ptr=&s3;
	ptr->get();

   } 
   if(tandau==2)
   {
   	ptr=&s4;
   	ptr->get();
  
   	
	} 
	if(tandau==3)
	{
	ptr=&s5;
	ptr->get();

	}
	
else {
	
	cout<<"Keshiriniz, kate tandau :";
	}
}

void pinfoshow()
{
    system("cls");
	int tandau;
	cout<<"\n\n\t 1 - Dr.Aseldi tandau ushin 1 basynyz \n\n\t 2 -  Dr.Aibekti tandau ushin 2 basynyz \n\n\t 3 - Dr.Jaksylyk tandau ushin 3 basynyz ";
	cout<<"Tandau jasanyz :";
	cin>>tandau;
	one *ptr;
	asel s3;
	aibek s4;
	jaksylyk s5;
	if(tandau==1)
	{
		ptr=&s3;
		ptr->show();
	}
	else if(tandau==2)
	{
		ptr=&s4;
		ptr->show();
	}
	else if(tandau==3)
	{
		ptr=&s5;
		ptr->show();
	}
	else 
	{
		cout<<"Keshiriniz, kate tandau : ";
		getch();
		menu();
		
	}
	
}

void menu()
{
	    system("cls");
	    system("color F3");
	    cout<<"\n Kalalyk Auruhana";
        cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
        
        cout<<"\n\n\n\n\n\n\n";
        
        cout<<"\t\t    |__________________________________________|   \n";
        cout<<"\t\t    |                                          |   \n";
        cout<<"\t\t    |               BASTAPKY MAZIR             |  \n";
        cout<<"\t\t    |    [[[   Kalalyk Auruhana Juiesi    ]]]  |\n";
        cout<<"\t\t    |__________________________________________|   \n";
        
        cout<<"\n____________________________________________________________________________________\n";
		
     	cout<<"\n\n\t1 - Darigerler turaly akparat ushin 1 basynyz:\n\n";
		cout<<"\t2 - Darigerge jazylu ushin 2 basynyz:\n\n";
		cout<<"\t3 - Kyzmetkerler turaly akparat saktau ushin 3 basynyz:\n\n";
		cout<<"\t4 - Pasientterdi kabyldau mazirin tekseru ushin 4 basynyz:\n\n ";
		cout<<"\t5 - Kyzmetkerler mazirin tekseru ushin 5 basynyz:\n\n";
	
		
	
		cout<<"\n____________________________________________________________________________________\n";
		cout<<"\n\n\t\t Tandau jasanyz : ";
		information a;
		one *ptr;
		staff b;
		int c;
		cin>>c;
		if(c==1)
		{
			a.drinfo();
		}
		else if(c==2)
		{
	    	call_dr();	
		}
		else if(c==3)
		{
			ptr=&b;
			ptr->get();
			
		}
		else if(c==4)
		{
			pinfoshow();
		}
		else if(c==5)
		{
			ptr=&b;
			ptr->show();
		}

		else
		{
			cout<<"Keshiriniz, kate tandau : ";
		}
		
}


int main()
{
		menu();

}

