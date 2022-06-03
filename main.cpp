#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
char arr [10] {48,49,50,51,52,53,54,55,56,57};
int w2=0;
int ii,ii2;
bool bazande;
char x=16;
char r2=88 ;
char r=79 ;
string pl1 ;
string pl2;
bool gameover = false;

void shecl () {

	char a= 205 ;
	char b= 186 ;
	char c= 206;
	char d= 200;
	char e= 203;
	char f= 202;
	char g= 188;
	char h= 187;
	char i= 185;
	char j= 201;
	char k= 204;


	cout<<endl<<endl<<endl;
	cout<<"                    "<<j<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<e<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<e<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<h;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"     "<<arr[1]<<"    "<<b<<"     "<<arr[2]<<"    "<<b<<"     "<<arr[3]<<"    "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<k<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<c<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<c<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<i;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"     "<<arr[4]<<"    "<<b<<"     "<<arr[5]<<"    "<<b<<"     "<<arr[6]<<"    "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<k<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<c<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<c<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<i;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"     "<<arr[7]<<"    "<<b<<"     "<<arr[8]<<"    "<<b<<"     "<<arr[9]<<"    "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<b<<"          "<<b<<"          "<<b<<"          "<<b;
	cout<<endl<<"                    "<<d<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<f<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<f<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<g<<endl;

}

void nobat () {



	if (w2%2==0) {
		cout<<"player 1 please choice square => ";

		int ii;
		cin>>ii;

		if (w2%2==0 ) {
			arr[ii]=r2;
		}
		if (ii>9 || ii<1) {
			system ("cls");
			cout<<endl<<endl<<endl<<"                         player < "<<pl1<<" > pleas choice true namber";
			sleep(2);
		}
	}

	if (w2%2==1) {
		cout<<"player 2 please choice square => ";

		int ii;
		cin>>ii;

		if (w2%2==1) {
			arr[ii]=r;
		}
		if (ii>9 || ii<1) {
			system ("cls");
			cout<<endl<<endl<<endl<<"                         player < "<<pl2<<" > pleas choice true namber";
			sleep(2);
		}
	}
	
{

	if (w2==ii) {
			w2=ii2;
			}
			else if (w2==ii2) {
				w2=ii;
			}
	
			else if (arr[ii] != r2 && arr[ii] != r) {
			
			   w2 = ii; 
			    arr[ii] = r;
			  
		    
            
		    w2++;
		}
	  
	  else  {
	        system ("cls");
	  		cout<<"this space has been filled before ...";
			sleep(2);
		}
}

	system ("cls");
	w2++;
	}


void shart () {


	if
	(  arr[1]==r2 && arr[2]==r2 && arr[3]==r2
	        || arr[4]==r2 && arr[5]==r2 && arr[6]==r2
	        || arr[7]==r2 && arr[8]==r2 && arr[9]==r2
	        || arr[1]==r2 && arr[4]==r2 && arr[7]==r2
	        || arr[2]==r2 && arr[5]==r2 && arr[8]==r2
	        || arr[3]==r2 && arr[6]==r2 && arr[9]==r2
	        || arr[1]==r2 && arr[5]==r2 && arr[9]==r2
	        || arr[3]==r2 && arr[5]==r2 && arr[7]==r2
	) {
		system("cls");
		cout<<"                                         "<<pl1<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"wwwwwiiiiiiiinnnnnnn"<<endl;
		sleep(2);
		gameover = true;
	}


	if
	( arr[1]==r && arr[2]==r && arr[3]==r
	        || arr[4]==r && arr[5]==r && arr[6]==r
	        || arr[7]==r && arr[8]==r && arr[9]==r
	        || arr[1]==r && arr[4]==r && arr[7]==r
	        || arr[2]==r && arr[5]==r && arr[8]==r
	        || arr[3]==r && arr[6]==r && arr[9]==r
	        || arr[1]==r && arr[5]==r && arr[9]==r
	        || arr[3]==r && arr[5]==r && arr[7]==r
	) {
		system("cls");
		cout<<"                                         "<<pl2<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"wwwwwiiiiiiiinnnnnnn"<<endl;
		sleep(2);
		gameover = true;
	}

}

void akhar () {

	if (arr[1] != 49 && arr[2] != 50 && arr[3] == 51 &&
	        arr[4] != 52 && arr[5] != 53 && arr[6] != 54 &&
	        arr[7] != 55 && arr[8] != 56 && arr[9] != 57) {
		system("cls");
		cout<<"                                       < "<<pl1<<" > and < "<<pl2<<" > are both winning ";
		gameover = true;
	}

}


int main () {

system ("color 0b");

	cout<<"player 1 please choice your name"<<x;
	getline (cin,pl1);
	cout<<"player 2 please choice your name"<<x;
	getline (cin,pl2);
	cout<<pl1<<pl2;
	system ("cls");




	while (!gameover) {


		cout<<"player 1"<<x<<pl1;
		cout<<endl<<"player 2"<<x<<pl2;

		shecl();
		nobat();
		shart();


	}
}