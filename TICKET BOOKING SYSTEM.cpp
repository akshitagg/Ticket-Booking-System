#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<iomanip>


using namespace std;

class Movie
{public:
 int a,b,c,d,j,i,h,f,g,e,k, age;
 int Totalseats;
 char ch1;
 char Name[50];
 char Phoneno[11];
 char Phoneno1[11];
 char* RetNo() { return Phoneno; }
 void MainMenu();
 
 void MovieMenu();
 void Bill();
 void Payment();
 void Food();
 void MovieDiscription();
 void Info();
 double calcost1();
 double  calcost6(), calcost3(),calcost4(),calcost5(),calcost7();
 double cost,cost1,cost3,cost2,cost4,cost5,cost6;
 void calcost2();
 void MovieTimings();
 void MovieDescription();
 Movie()
 { Totalseats=200;
   ch1='y';
   cost=0;
   cost1=0;
   cost2=0;
   cost3=0;
   cost4=0;
 }
 void MovieName();
 char Moviename[80];
 void FindTicket();
}M;

void intro()
{
 
 
 
cout<<"---------------------------------------------------------------EXPERIENTAL LEARNING ROJECT-------------------------------------------------------------"<<endl;

 cout<<"\n\n\n\n";
cout<<"         ********************************************************************************************************************************************"<<endl;
 
cout<<setw(25)<<"                                                        MOVIE TICKET BOOKING                     "<<endl;
}
void Movie::MainMenu()
{ intro();
  
  
do
  { cout<<"\n\n\n\n\n";
cout<<setw(25)<<" Movie Ticket Booking System "<<endl;


cout<<setw(30)<<"                                      <1> Book A Movie   "<<endl;


cout<<setw(30)<<"                                      <2> View Discription of Streaming Movies  "<<endl;


cout<<setw(30)<<"                                      <3> View Timings for Movies "<<endl;


cout<<setw(30)<<"                                      <4> Find Ticket  "<<endl;


cout<<setw(30)<<"                                      <5> Exit "<<endl;


     cout<<"                                     Enter Your Choice : "; cin>>a;
    switch(a)
    { case 1:MovieMenu(); break;
      case 2:MovieDescription(); break;
      case 3: system("CLS");
	      
	      cout<<"                  Your choice:3.MOVIE TIMINGS";cout<<"\n\n\n";
	      MovieTimings(); getch();
	      break;
      case 4:FindTicket(); break;
     
      case 5:exit(0); break;
      default:cout<<"\nInvalid Choice "; break;
    } system("CLS");
  }while(a!=1);
}

void Movie::MovieMenu()
{  
   
   system("CLS");
   cout<<"Your Choice: 1.BOOK A MOVIE ";
   cout<<"\n\n\n\n"; 
   
   cout<<"                              *******WELCOME TO BLUE STAR CINEMAS*******                                 "<<endl;

cout<<"																"<<endl;
   
   cout<<"                                      Latest Movies Streaming :                                 "<<endl;


cout<<"                                                                                "<<endl;

cout<<setw(30)<<"            <1>The Shawshank Redemption                             "<<endl;

cout<<"                                                                                "<<endl;

cout<<setw(30)<<"            <2> Forrest Gump                                        "<<endl;

cout<<"                                                                                "<<endl;

cout<<setw(30)<<"            <3> Walk The Line                                       "<<endl;

cout<<"                                                                                "<<endl;

cout<<setw(30)<<"            <4> The Fault In Our Stars                              "<<endl;

cout<<"                                                                                "<<endl;

cout<<setw(30)<<"            <5> Mr.Church                                           "<<endl;

	cout<<"***********************************************************************************************************************************************"<<endl;
cout<<"																		"<<endl;

cout<<"Enter Your Choice : ";

	cin>>b;system("CLS");
cout<<"                              MOVIE TIMINGS                                     "<<endl;
	MovieTimings();
	 cout<<"\n";
cout<<"Enter Your Choice : ";
	   cin>>e;
      system("CLS");

	cout<<"\n";cout<<"Which Type of Ticket You Want To Book :"<<endl;
	cout<<"																	"<<endl;

  
cout<<setw(30)<<"                        <1>VIP SEAT ( RS 1000 PER HEAD )"<<endl;
cout<<"  															"<<endl;
cout<<setw(30)<<"                        <2>GOLD SEAT( RS 800 PER HEAD )"<<endl;
cout<<"																"<<endl;  
cout<<setw(30)<<"                        <3>SILVER SEAT( RS 500 PER HEAD)"<<endl;
cout<<"																"<<endl;
cout<<setw(20)<<"*******************************************************************************************************************************************"<<endl;
       cout<<"															"<<endl;
          cout<<"Enter your Choice : ";
       cin>>c;

cout<<"																		"<<endl;
       cout<<"\n";cout<<"Enter The Number of The Tickets You Want To Book : ";
       cin>>d;

cout<<"																		"<<endl;
       cout<<"\n";cout<<"Do You Want Some Food Or Beverages ? : (Y/N) ";
       cin>>ch1;
    if(ch1=='y' || ch1=='Y')
      {  system("CLS");
	Food();
      }
     system("CLS");
  Info();
  calcost7();
   
 cout<<"															"<<endl;
     cout<<"\n";cout<<"Your Bill :";cout<<" \n";
  Bill();
     cout<<setw(30)<<"WANT TO PAY ONLINE "<<endl;
char rep;
  cin>>rep;
      if(rep=='y'||rep=='Y'){
  Payment();
}
else{
cout<<" THANKS FOR CHOOSING US , ENJOY YOUR MOVIE AND HAVE A NICE DAY!!!               ";
}
    }
void Movie::MovieDescription()
{ int z;
  system("CLS");
  

cout<<setw(30)<<"           <1>The Shawshank Redemption                             "<<endl;

cout<<setw(30)<<"           <2> Forrest Gump                                        "<<endl;

cout<<setw(30)<<"           <3> Walk The Line                                       "<<endl;

cout<<setw(30)<<"           <4> The Fault In Our Stars                              "<<endl;

cout<<setw(30)<<"           <5> Mr.Church                                           "<<endl;
cout<<"****************************************************************"<<endl;
cout<<"Enter Your Choice : "; cin>>z;
system("CLS");

if(z==1)
{
cout<<"                 THE SHAWSHANK REDEMPTION";
cout<<"\n\n";
cout<<"             The Shawshank Redemption is a 1994 American drama film written and directed by  ";
cout<<"             Frank Darabont, and based on the Stephen Kingnovella Rita Hayworth and Shawshank";
cout<<"             Redemption. The film tells the story of banker Andy Dufresne (Tim Robbins), who ";
cout<<"             is sentenced to life in Shawshank State Penitentiary for the murder of his wife ";
cout<<"             and her lover, despite his claims of innocence. While The Shawshank Redemption  ";
cout<<"             received positive reviews at release, it was a box office disappointment, owing ";
cout<<"             to competition from other films such as Pulp Fiction.[1] The film received      ";
cout<<"             multiple award nominations (including seven Oscar nominations) and highly       ";
cout<<"             positive reviews from critics for its acting, story, and realism.               ";
cout<<"             In 1947 Portland, Maine, banker Andy Dufresne is convicted of murdering his wife";
cout<<"             and her lover, and he is sentenced to two consecutive life sentences at the     ";
cout<<"             Shawshank State Penitentiary. Andy is befriended by contraband smuggler, Ellis  ";
cout<<"             Red Redding, an inmate serving a life sentence. Red procures a rock hammer for ";
cout<<"             Andy and later a large poster of Rita Hayworth for him. Working in the prison   ";
cout<<"             laundry,Andy is regularly assaulted by the Sisters and their leader,Bog severely";
} else if(z==2)
{   
cout<<"FORREST GUMP";
cout<<"\n\n";
cout<<"Forrest Gump is a 1994 American drama film based on the novel Forrest Gump by  ";
cout<<"Winston Groom.The story shows several decades in the life of Forrest Gump , a  ";
cout<<" slow witted but kind hearted & athletically genius from Alabam,who witnesses, ";
cout<<" and in some cases influences, some of the defining events of the latter half  ";
cout<<"of the 20th century in the United States; more specifically, the period between";
cout<<" Forrest's birth in 1944 and 1982. The film differs substantially from Winston ";
cout<<"Groom's novel, including Gump's personality and several events that were       ";
cout<<"depicted.                                                                      ";
cout<<"Principal photography took place in late 1993, mainly in Georgia,North Carolina";
cout<<"and South Carolina. Extensive visual effects were used to incorporate the      ";
cout<<"protagonist into archived footage and to develop other sc enes. A comprehensive";
cout<<"soundtrack was featured in the fi lm, using music intended to pinpoint specific";
cout<<"time peri ods portrayed on screen. Its commercial release made it a top-selling";
cout<<"soundtrack, selling over 12 million copi es worldwide.                         ";
}else if(z==3)
{  
cout<<"WALK THE LINE";
cout<<"\n\n";
cout<<"Walk the Line is a 2005 American biographical drama film directed by James      ";
cout<<"Mangold and based on the early life and career of singer Johnny Cash. The film  ";
cout<<"stars Joaquin Phoenix, Reese Witherspoon, Ginnifer Goodwin, and Robert Patrick. ";
cout<<"The film focuses on Cash's early life, his romance with June Carter, and his    ";
cout<<"ascent to the country music scene, as based on his autobiographies. The         ";
cout<<"screenplay was written by Mangold and Gill Dennis. The film's production budget ";
cout<<" is estimated to have been US$28 million.                                       ";
cout<<"In 1968, as an audience of inmates at Folsom State Prison cheer for Johnny Cashs";
cout<<"band, he waits backstage near a table saw, reminding him of his early life.In   ";
cout<<"1944, Johnny, then known as J.R., is raised on a cotton farm in Dyess, Arkansas ";
cout<<"with his brother Jack, father Ray, and mother Carrie. J.R. is known for his     ";
cout<<"singing of hymns, while his brother Jack trains himself to become a pastor.     ";
}else if(z==4)
{  
cout<<"THE FAULT IN OUR STARS ";
cout<<"\n\n";
cout<<"The Fault in Our Stars is a 2014 American romantic drama film directed by Josh  ";
cout<<"Boone, based on the novel of the same name by John Green. The film stars Shailen";
cout<<"Woodley, Ansel Elgort, and Nat Wolff, with Laura Dern, Sam Trammell, and Willem ";
cout<<"Dafoeplaying supporting roles.Woodley plays Hazel Grace Lancaster,a sixteen-year";
cout<<"old cancer patient who is forced by her parents to attend a support group, where";
cout<<"she meets and subsequently falls in love with Augustus Waters, another cancer   ";
cout<<"patient, played by Elgort.                                                      ";
cout<<"Development of The Fault in Our Stars began in January 2012 when Fox 2000, a    ";
cout<<"division of 20th Century Fox, optioned the rights to adapt the novel into a     ";
cout<<"feature film. Principal photography began on August 26, 2013, in Pittsburgh,    ";
cout<<"Pennsylvania, with a few additional days in Amsterdam, The Netherlands, before  ";
cout<<"concluding on October 16, 2013. Pittsburgh doubled for all of the scenes set in ";
cout<<"Indianapolis, Indiana, the novel's setting, as well as for some interior scenes ";
cout<<"set in Amsterdam.                                                               ";
}else if(z==5)
{  
cout<<"Mr.CHURCH";
cout<<"\n\n";
cout<<" Mr. Church is a 2016 American dramedy film directed by Bruce Beresford and     ";
cout<<" written by Susan McMartin. The film stars Eddie Murphy as the title character  ";
cout<<" with Britt Robertson, Xavier Samuel, Lucy Fry, Christian Madsen and Natascha   ";
cout<<" McElhone also starring. The film debuted on April 22, 2016, at the Tribeca Film";
cout<<" Festival[3] and was released on September 16, 2016, by Cinelou Releasing and   ";
cout<<" Freestyle Releasing.Charlotte Charlie Brooks  lives with her single            ";
cout<<" mother Marie Brooks (Natascha McElhone) in a small beat-up apartment. She is   ";
cout<<" awakened by cooking that smells like heaven, to find a stranger named Mr. Henry";
cout<<" Joseph Church . Charlie does not like this mysterious man in her house.        ";
cout<<" Marie agrees with Charlie to get rid of him until she finds out he was hired by";
cout<<" Marie's deceased ex-lover to take care of her for six months because she has   ";
cout<<" breast cancer and only has six months to live.                                 ";
}
 getch();
}
void Movie::FindTicket()
{ ifstream fin;
  fin.open("Movie.dat",ios::app|ios::binary);
  Movie M1;
  int f=0;
  char Phone[10];
  cout<<"\n\r Enter Your Phone Number : "; 
   cin>>Phoneno;
  while(fin.read((char*)&M1,sizeof(Movie)))
  { if(strcmp(M1.Phoneno,Phone))
    { f=1;
      cout<<"\n\rYour Ticket : "; M1.Bill();
      break;
    }
  }
  if(!f) { cout<<"Ticket Not Found"; getch(); }
  fin.close();
}
void Movie::MovieTimings()
{     
       

cout<<setw(50)<<"                                <1> 10:30 AM                                            "<<endl;

cout<<"																	"<<endl;

cout<<setw(50)<<"                                <2> 11:45 AM                                            "<<endl;

cout<<"																	"<<endl;

cout<<setw(50)<<"                                <3> 2:15  PM                                            "<<endl;

cout<<"																	"<<endl;

cout<<setw(50)<<"                                <4> 7:30  PM                                            "<<endl;

cout<<"																	"<<endl;

cout<<setw(50)<<"                                <5> 11:45 PM (LAST SHOW)                                "<<endl;

}
void Movie::Food()
{     
	      


cout<<setw(50)<<"                         Welcome To The Food Counter                            "<<endl;

cout<<"														"<<endl;

cout<<setw(50)<<"                        <1> Snacks                                              "<<endl;

cout<<"														"<<endl;

cout<<setw(50)<<"                        <2> Beverages                                           "<<endl;

cout<<"														"<<endl;

cout<<setw(50)<<"                        <3> Best Combo's                                        "<<endl;

cout<<"														"<<endl;

		cout<<"\n"; cout<<"Enter your choice : ";
	      cin>>f;
    if(f==1)
    {
cout<<"                        <1>Burger - RS 60                                       "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <2>Pizza - RS 120                                       "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <3>Hotdog- RS 70                                        "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <4>Popcorn-Depend On Size                               "<<endl;

cout<<"													"<<endl;

	cout<<"\n"; cout<<"Enter your choice : ";
      cin>>g;
     if(g==4)
       {
cout<<"                 Enter the size of Popcorn Pack You Need ? :                                     "<<endl	;

cout<<"                                                                                "<<endl;

cout<<"                        <1> Small- RS 40                                        "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <2> Medium- RS 70                                       "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <3> Large-Rs 100                                        "<<endl;

cout<<"															"<<endl;

	cout<<"\n"; cout<<"Enter your choice : ";
       cin>>h;
       }
      }
     if(f==2)
       {
cout<<"                        <1> Pepsi- RS 60                                        "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <2> Cold Coffee- RS 120                                 "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <3> Coffee - RS 70                                      "<<endl;

cout<<"													"<<endl;

	cout<<"\n"; cout<<"Enter your choice : ";
	cin>>j;
       }
     if(f==3)
       {
cout<<"                        <1> Pepsi(300 ML) + Burger -: RS 120                    "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <2> Cold Coffee + Pizza-: RS 220                        "<<endl;

cout<<"                                                                                "<<endl;

cout<<"                        <3> Coffee + Popcorn(Small)-:RS 100                     "<<endl;

cout<<"													"<<endl;

       cout<<"Enter your choice : ";
       cin>>k;
       }
     cout<<"\n";cout<<"Enter How much Meal Pieces You Want : "<<endl;
     cin>>i;

}
    void Movie::Info()
      {    
	   
cout<<"                   Enter Your Name :          "<<endl;
	   cin>>Name;

cout<<"											"<<endl;

cout<<" Enter Your Phone Number (10 Digit Max ) -:   "<<endl;
	   cin>>Phoneno;

cout<<"															"<<endl;

cout<<" Enter Your Age -:                       "<<endl;
	   cin>>age;
     }
  double Movie:: calcost1()
  {
  if(c==1)
  {  cost1=d*1000;
  }
  else if(c==2)
	{
	cost1=d*800;
	}
   else
       cost1=d*500;
 cout<<"Ticket Cost: "<<cost1<<endl;
 return cost1;

 }
 void Movie::calcost2()
 {
  switch(f)
  {
   case 1:calcost3();
	break;
   case 2:calcost4();
	break;
   case 3:calcost5();
	break;
   default:break;

  }
  }
 double Movie::calcost3()
 {
 if(g==1)
   {
	cost2=i*60;
   }
   else if(g==2)
	  {
		 cost2=i*120;
	  }
   else if(g==3)
	{
		cost2=i*70;
	}
   else if(g==4)
	 {
		cost2=calcost6();
	 }
       cout<<"Snacks Cost: "<<cost2<<endl;
    return cost2;
 }

 double Movie::calcost6()
 {
 if(h==1)
 {
	cost6=i*40;
 }
 else if(h==2)
      {
	cost6=i*70;
       }
 else if(h==3)
      {
	 cost6=i*100;
      }

   cout<<"Snacks Pop: "<<cost6<<endl;
   return cost6;
}
double Movie::calcost4()
{   if(j==1)
    {
	 cost3=i*60;
     }
    else if(j==2)
    {
	cost3=i*120;
     }
    else if(j==3)
     {
     cost3=i*70;
     }

    cout<<"    Drinks: "<<cost3<<endl;
   return cost3;
 }

double Movie::calcost5()
{  if(k==1)
    {
	cost4=i*120;
    }else if(k==2)
    {
	cost4=i*220;
    }
    else if(k==3)
    {
	cost4=i*100;
    }

    cout<<"    Combo: "<<cost4<<endl;
   return cost4;
}
void Movie::Bill()
{ system("CLS");
  
  
  cout<<setw(30)<<"************************************************** BLUE STAR CINEMAS********************************************************************  "<<endl;
  
  cout<<setw(30)<<"                                   Your Name:- "<<Name<<endl;

cout<<"														"<<endl;
  
  cout<<setw(30)<<"                               Your Phone Number:- "<<Phoneno<<endl;
  
cout<<"														"<<endl;

MovieName();

cout<<"														"<<endl;
  
  cout<<setw(30)<<"                                   Movie Name:-"<<Moviename<<endl;

cout<<"														"<<endl;

  
  cout<<setw(30)<<"                                Your Total Bill Is \n\r"<<calcost7()<<endl;
  getch();
}
double Movie::calcost7()
{
   calcost2();
     cost=calcost1()+calcost3()+calcost4()+calcost5();

cout<<"Total Cost: "<<cost<<endl;
   return cost;
}
void Movie:: Payment()
{

		cout<<"\n\t\t\t\t"<<"Paying :"<<calcost7()<<"\n";
		
		
			cout<<"\t\t\t\tName of the card holder: "<<endl;
			char n[10];
			cin>>n;

cout<<"															"<<endl;

			cout<<"\n\t\t\t\tEnter the card number: "<<endl;
			char Card[16];
			cin>>Card;

cout<<"															"<<endl;

			cout<<"\t\t\t\tExpiry(MM/YYYY)[EXPIRY YEAR ABOVE 2021 ACCEPTED]"<<endl;
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"   /";
			cin>>expiryyy;
			
			 while(expiryyy<=2021){
				
				
					cout<<"\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				
			};
			char password[3];

cout<<"												"<<endl;

        cout<<setw(30)<<"ENTER THE CVV : "<<endl;
           cin>>password;
  while(strlen(password)!=3)
 {
          cout<<"Please enter a valid CVV"<<endl;
            cin>>password;
}  ;
			
					
  cout<<setw(50)<<"YOUR PAYMENT IS SUCCESSFUL"<<endl;
		
	getch();
	
}
void Movie:: MovieName()
{   
    
      if(b==1)
      {
       strcpy(Moviename,"The Shawshank Redemption");

       }
       else if(b==2)
      {
	strcpy(Moviename,"Forrest Gump");
      }
      else if(b==3)
      {strcpy(Moviename,"Walk The Line");
      }
      else if(b==4)
      {strcpy(Moviename,"The Fault In Our Stars");
      }
     else if(b==5)
      {strcpy(Moviename,"Mr.Church");
      }
      else
      cout<<"Wrong choice ";

}

int main()
{ char ch2='Y';
  system("CLS");

 cout<<"\n";
 
 while(ch2=='Y'||ch2=='y')
 { system("CLS");
   M.MainMenu();
   
   cout<<"\n\n\n";
   cout<<"Do you want to book more tickets:";
   cin>>ch2;
 }
 ofstream  fout;
 fout.open("Movie.dat",ios::app|ios::binary);
 fout.write((char*)&M,sizeof(M));
 fout.close();
 /**/
 getch();
}
