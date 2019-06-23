#include <iostream>
#include<graphics.h>
#include<stdlib.h>
#include <windows.h>
using namespace std;


int main()

{
	system("color 0a");
   	cout<<"HELLO USER\n"; 
    cout<<" press the desired option \n 1. ATTENDANCE \n 2. QUIT\n";

  int ch;

   do{


 cin>>ch;

 switch(ch)

   {

	case 1: {	system("cls");system("color 5a");
	     		float ap;int tc;
                               do{

		 cout<<"please enter your current ATTENDANCE PERCENTAGE\n";



		cin>>ap;

                   	cout<<"please enter the current total number of classes\n";

		cin>>tc;
		 if(ap<0||ap>100){cout<<"please enter valid ATT%\n";}

 		}while(ap<0||ap>100)
;

			int pc,ac,temp1;
			pc=ap*tc/100;
			ac=tc-pc;
	do{ 
		temp1=391-pc;system("cls");system("color 9f");
 	cout<<" hit any option from below choices \n a. The no. of classes or days to reach 75%\nb.The number of classes can be bunked to reach your desired att%\nc.predict your att% if you're gonna absent for your desired no. of days or classes\nd.Quit"<<endl;;

     	 char aopt;

 	 cin>>aopt;

  	 switch (aopt)

 	 {
		case 'a' : system("cls");system("color 3e");
					if(tc+temp1>523)cout<<"sorry you can't get 75% attandance"<<endl;
    			   else
			cout<<temp1<<"classes to reach 75%"; break;

		case 'b': system("cls");system("color 8f");	float desatt2;
			cout<<"enter your desired attendance\n";
			cin>>desatt2;
			if(desatt2>100||desatt2<0){cout<<"invalid entry";break;}
			int bc;
			bc=522-((desatt2*522/100-pc)+tc);
			if(bc==0)cout<<"u can reach your desired att% if u don't bunk even single class"<<endl;
			else if(bc<0)cout<<"u can't reach your desired attandance even u don't bunk even a single class"<<endl;
			else cout<<bc<<"clases can be bunked";break;

		case 'c': system("cls");system("color 1c");int bc2;

			   cout<<"enter no.of classes u want to bunk"<<endl;
		 	   cin>>bc2;
			   cout<<"ur percentage will become- "<<(ap*tc)/(tc+bc2)<<endl;break;

		case 'd' : system("cls");system("color 7a");cout<<"thank u :)"<<endl;
			   exit(0);
			   getch();break;

		default :system("cls");system("color 9f");cout<<"invalid input"<<endl;break;

	}


	cout<<"\npress 1 to select other options or select 0 to terminate"<<endl;
		cin>>ch;
		system("cls");
		system("color 5a");


	 } while(ch==1);


exit(0);
	getch();

break;

    }


	 case 2:exit(0);

	           getch();

	 default : cout<<"INVALID INPUT";

	 }

		system("cls");system("color 6c");
	}while(ch>1||ch<3);


}
