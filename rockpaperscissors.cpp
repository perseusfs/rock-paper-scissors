#include<iostream>
#include<cstdlib>
#include<string>
#include<time.h>
#include<conio.h>
#define LIMIT 5 //change this for longer or shorter games
using namespace std;

string randomize(){
	srand(time(0));
	string choices[]={"rock","paper","scissors"};
	string random;
	for(int i=0;i<2;i++)
		random=choices[rand()%3];
	return random;
}
int main(void){
	cout<<"Welcome\n"<<"Press Any Key"<<endl;
	getch();
	cout<<"Game Developer: ufs61   Coder: ufs61   Thanks to ufs61\n"<<"\nValid Inputs : Rock, Paper, Scissors\n"<<endl;
	cout<<"Enter Your Choice to Start"<<endl;
	cout<< string(5,'\n');
	srand (time(0)); //random seed initializer
	int sayac1=0, sayac2=0;
	string arr[]={"rock","paper","scissors"};
	string choice;
	while(sayac1<LIMIT || sayac2<LIMIT){
	cin>>choice;
	if(choice == arr[0])	cout<<"you : "<<arr[0];
	if(choice == arr[1])	cout<<"you : "<<arr[1];
	if(choice == arr[2])	cout<<"you : "<<arr[2];
	
	string answer=randomize();
	cout<<"  "<<"computer : "<<answer<<endl;
	
	if(choice== "paper" && answer =="paper"){
	cout<<" draw"<<endl; 
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
}
	if(choice== "rock" && answer =="rock"){
	cout<<" draw"<<endl;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
}
	if(choice== "scissors" && answer =="scissors"){
	cout<<" draw"<<endl;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
}
	if(choice== "scissors" && answer =="paper"){
	cout<<"you win"<<endl;
	sayac1++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(choice== "scissors" && answer =="rock"){
	cout<<"you lost"<<endl;
	sayac2++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(choice== "rock" && answer =="scissors"){
	cout<<"you win"<<endl;
	sayac1++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(choice== "rock" && answer =="paper"){
	cout<<"you lost"<<endl;
	sayac2++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(choice== "paper" && answer =="rock"){
	cout<<"you win"<<endl;
	sayac1++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(choice== "paper" && answer =="scissors"){
	cout<<"you lost"<<endl;
	sayac2++;
	cout<<"skor -> "<<sayac1<<"-"<<sayac2<<endl;
	}
	if(sayac1 == LIMIT || sayac2 == LIMIT){
		cout<<"game over";
		return 0;
	}
}
}
