#include<iostream>
#include<conio.h>
#include<string.h>
#include <ctime>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
using namespace std;
int nopat=0,room_no=10;
char* dt;
struct patient
{
	string name,age,address,kin_name,kin_ph,special,dname,time;
}p[10];
void add(){
	system("cls");
	 cout<<setw(20)<<"Name:";
	 cin>>p[nopat].name;
	 cout<<endl;
	  cout<<setw(20)<<"Age:";
	  cin>>p[nopat].age;
	  cout<<endl;
	  cout<<setw(20)<<"Address:";
	   cin>>p[nopat].address;
	   cout<<endl;
	    cout<<setw(20)<<"Kin_Name:";
	    cin>>p[nopat].kin_name;
	    cout<<endl;
	     cout<<setw(20)<<"Kin_ph:";
	     cin>>p[nopat].kin_ph;
	     cout<<endl;
	  again:
	     cout<<setw(30)<<"Specialist"<<endl;
	    cout<<setw(30)<<"a.General Physician"<<endl;
	     cout<<setw(30)<<"b.Cardiologist"<<endl;
	      cout<<setw(30)<<"c.Dermatologist"<<endl;
	       cout<<setw(30)<<"d.ENT Specialist"<<endl;
	        cout<<setw(30)<<"e.Orthopaedic"<<endl;
	    char cha;
	    cin>>cha;
	    switch(cha)
	    {
			case 'a':p[nopat].special="General Physician";
			p[nopat].dname="Dr.Alexa";
			break;
			case 'b':p[nopat].special="Cardiologist";
			p[nopat].dname="Dr.Siri"; 
			break;
			case 'c':p[nopat].special="Dermatologist";
			p[nopat].dname="Dr.Cortona";
			break;
			case 'd':p[nopat].special="ENT Specialist";
			p[nopat].dname="Dr.Bixby";
			break;
			case 'e':p[nopat].special="Orthopaedic";
			p[nopat].dname="Dr.Sophia";
			break;
			default:system("cls");
			goto again;
			break;
		}
		p[nopat].time=dt;
		cout<<p[nopat].name<<p[nopat].age<<p[nopat].address<<p[nopat].kin_name<<p[nopat].kin_ph<<p[nopat].special<<p[nopat].dname<<p[nopat].time<<endl;
		nopat++;
	
}

int main(){
	//patient p[10];
	string lid="a";
	string pass="1";
	string loginid,ps;
   time_t now = time(0);
    dt = ctime(&now);
   system("color 3");
   cout<<setw(95)<<"Date: "<<dt;
   cout<<setw(50)<<"Hospital"<<endl;
   cout<<setw(50)<<"--------"<<endl;
   cout<<setw(500)<<"Login:";
   cin>>loginid;
   cout<<setw(20)<<"Password:";
   cin>>ps;
   if(lid==loginid&&pass==ps)
   system("cls");
   else{
   
   cout<<"Invaild Loginid or Password";
   exit(0);}
rep:
cout<<setw(95)<<"Date: "<<dt;
   cout<<setw(50)<<"Hospital"<<endl;
   cout<<setw(50)<<"--------"<<endl;
   cout<<setw(30)<<"1.ADD NEW PATIENT"<<endl;
   cout<<setw(30)<<"2.PATIENT LIST"<<endl;
   cout<<setw(30)<<"3.PATIENT DETAILS"<<endl;
   cout<<setw(30)<<"4.DISCHARGE PATIENT"<<endl;
   int ch;
   cin>>ch;
  switch(ch){
  	case 1:add();
  	goto rep;
  	break;
  	/*case 2:list();
  	break;
  	case 3:details();
  	break;
  	case 4:dischr();
  	break;*/
  	default :cout<<"invalid option"<<endl;
  	system("cls");
  	goto rep;
  	break;
  }
   return 1;
}
