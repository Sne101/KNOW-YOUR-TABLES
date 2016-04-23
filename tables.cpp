#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
	int ch,num1,num2,num3,ask,t1=0,t2=0,flag=0;
	string name;
	srand(time(NULL)); //function in order to genrate random no's each time the pgm is executed
	int flag1=0;
	cout<<"                   **************KNOW YOUR TABLES**************"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"KNOW YOUR TABLES is an Educational application for people to test their"<<endl<<" multiplication skills as well as Mug-Up tables ;)"<<endl;
	cout<<"ENTER YOUR NAME"<<endl;
	cin>>name;
	do
	{
	cout<<"Select your age group/Choose one among the following"<<endl;
	cout<<"1 : 4-7 "<<endl<<"2 : 8-12"<<endl<<"3 : The REST"<<endl<<"4 : THE GENIUS"<<endl<<"5 : WEAK"<<endl<<"6 : Learn Tables"<<endl<<"7 : Done for today,quit APp"<<endl;
	cin>>ch;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	switch(ch)
	{
	case 1:cout<<"Lets Multiply "<<name<<endl;
		cout<<"HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE"<<endl;
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if(ask<10)
		{
			cout<<"Don't be lazy,Minimum of ten questions should be attempted"<<endl;
			cout<<"-_- HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE, now"<<endl;
			flag1=1;
		}
		if(flag1==1)
		{
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		flag1=0;
		
		if(ask<10)
		{
			cout<<"Kidoo,go back to mamma"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			break;
		}
		}
		t1=ask/3;
		t2=t1+t1;
		cout<<"NOTICE : Depending on the right number of answer you will earn a TITLE"<<endl;
		//cout<<"ingenium,infirmatur,medium"<<endl;
		cout<<ask<<" - "<<t2+1<<" : Ingenium "<<endl;
		cout<<t2<<" - "<<t1+1<<" : Medium "<<endl;
		cout<<t1<<" - "<<0<<" : Infirmatur "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int i=0;i<ask;i++)
		{
		  num1=rand()%10;
		  num2=rand()%10;
		  cout<<"What is "<<num1<<" times "<<num2<<endl;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  cin>>num3;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  if((num1*num2)==num3)
		  {
			  cout<<"Well done "<<name<< ":)"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
			  flag++;
		  }
		  else
		  {
			  cout<<"OOpsie O_o "<<endl<<"RIGHT ANSWER "<<num1*num2<<endl<<"YOUR ANSWER "<<num3<<endl<<"NO Worries "<<name<<" ;)"<<endl;
			 // cout<<"Practise is all you need"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
		  }
		}
		cout<<"Total correct answers : "<<flag<<endl;
		//cout<<"--------------------------------------------------------------------------------"<<endl;
		if(flag <= ask && flag >=t2+1)
		{
			cout<<"VIOLA ,you have earned the Title Ingenium"<<endl;
			cout<<"Seems you are pretty good at tables 0 - 10"<<endl;
			cout<<"Suggestion : Better move to the next category ;)"<<endl; 
			cout<<"--------------------------------------------------------------------------------"<<endl;
		
		}
		else if(flag <=t2 && flag >=t1+1)
		{
			cout<<"Keep up the good work ,you have earned the Title medium"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		else
		{
			cout<<"Oh dear lad,you gotta practice ,for now you have earned the Title Infirmatur"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		  

		break;
	case 2:cout<<"Lets Multiply "<<name<<endl;
		cout<<"HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE"<<endl;
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if(ask<10)
		{
			cout<<"Don't be lazy,Minimum of ten questions should be attempted"<<endl;
			cout<<"-_- HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE, now"<<endl;
			flag1=1;
		}
		if(flag1==1)
		{
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		flag1=0;
		
		if(ask<10)
		{
			cout<<"Kidoo,go back to mamma"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			break;
		}
		}
		t1=ask/3;
		t2=t1+t1;
		cout<<"NOTICE : Depending on the right number of answer you will earn a TITLE"<<endl;
		//cout<<"ingenium,infirmatur,medium"<<endl;
		cout<<ask<<" - "<<t2+1<<" : Ingenium "<<endl;
		cout<<t2<<" - "<<t1+1<<" : Medium "<<endl;
		cout<<t1<<" - "<<0<<" : Infirmatur "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int i=0;i<ask;i++)
		{
		  num1=rand()%15;
		  num2=rand()%15;
		  cout<<"What is "<<num1<<" times "<<num2<<endl;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  cin>>num3;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  if((num1*num2)==num3)
		  {
			  cout<<"Well done "<<name<< ":)"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
			  flag++;
		  }
		  else
		  {
			  cout<<"OOpsie O_o "<<endl<<"RIGHT ANSWER "<<num1*num2<<endl<<"YOUR ANSWER "<<num3<<endl<<"NO Worries "<<name<<" ;)"<<endl;
			 // cout<<"Practise is all you need"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
		  }
		}
		cout<<"Total correct answers : "<<flag<<endl;
		//cout<<"--------------------------------------------------------------------------------"<<endl;
		if(flag <= ask && flag >=t2+1)
		{
			cout<<"VIOLA ,you have earned the Title Ingenium"<<endl;
			cout<<"Seems you are pretty good at tables 0 - 15"<<endl;
			cout<<"Suggestion : Better move to the next category ;)"<<endl; 
			cout<<"--------------------------------------------------------------------------------"<<endl;
		
		}
		else if(flag <=t2 && flag >=t1+1)
		{
			cout<<"Keep up the good work ,you have earned the Title medium"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		else
		{
			cout<<"Oh dear lad,you gotta practice ,for now you have earned the Title Infirmatur"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		break;
	case 3:cout<<"Lets Multiply "<<name<<endl;
		cout<<"HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE"<<endl;
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if(ask<10)
		{
			cout<<"Don't be lazy,Minimum of ten questions should be attempted"<<endl;
			cout<<"-_- HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE, now"<<endl;
			flag1=1;
		}
		if(flag1==1)
		{
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		flag1=0;
		
		if(ask<10)
		{
			cout<<"Kidoo,go back to mamma"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			break;
		}
		}
		t1=ask/3;
		t2=t1+t1;
		cout<<"NOTICE : Depending on the right number of answer you will earn a TITLE"<<endl;
		//cout<<"ingenium,infirmatur,medium"<<endl;
		cout<<ask<<" - "<<t2+1<<" : Ingenium "<<endl;
		cout<<t2<<" - "<<t1+1<<" : Medium "<<endl;
		cout<<t1<<" - "<<0<<" : Infirmatur "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int i=0;i<ask;i++)
		{
		  num1=rand()%25;
		  num2=rand()%25;
		  cout<<"What is "<<num1<<" times "<<num2<<endl;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  cin>>num3;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  if((num1*num2)==num3)
		  {
			  cout<<"Well done "<<name<< ":)"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
			  flag++;
		  }
		  else
		  {
			  cout<<"OOpsie O_o "<<endl<<"RIGHT ANSWER "<<num1*num2<<endl<<"YOUR ANSWER "<<num3<<endl<<"NO Worries "<<name<<" ;)"<<endl;
			 // cout<<"Practise is all you need"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
		  }
		}
		cout<<"Total correct answers : "<<flag<<endl;
		//cout<<"--------------------------------------------------------------------------------"<<endl;
		if(flag <= ask && flag >=t2+1)
		{
			cout<<"VIOLA ,you have earned the Title Ingenium"<<endl;
			cout<<"Seems you are pretty good at tables 0 - 25"<<endl;
			cout<<"Suggestion : Better move to the next category ;)"<<endl; 
			cout<<"--------------------------------------------------------------------------------"<<endl;
		
		}
		else if(flag <=t2 && flag >=t1+1)
		{
			cout<<"Keep up the good work ,you have earned the Title medium"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		else
		{
			cout<<"Oh dear lad,you gotta practice ,for now you have earned the Title Infirmatur"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		break;
	case 4:cout<<"Lets Multiply "<<name<<endl;
		cout<<"HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE"<<endl;
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if(ask<10)
		{
			cout<<"Don't be lazy,Minimum of ten questions should be attempted"<<endl;
			cout<<"-_- HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE, now"<<endl;
			flag1=1;
		}
		if(flag1==1)
		{
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		flag1=0;
		
		if(ask<10)
		{
			cout<<"Kidoo,go back to mamma"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			break;
		}
		}
		t1=ask/3;
		t2=t1+t1;
		cout<<"NOTICE : Depending on the right number of answer you will earn a TITLE"<<endl;
		//cout<<"ingenium,infirmatur,medium"<<endl;
		cout<<ask<<" - "<<t2+1<<" : Ingenium "<<endl;
		cout<<t2<<" - "<<t1+1<<" : Medium "<<endl;
		cout<<t1<<" - "<<0<<" : Infirmatur "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int i=0;i<ask;i++)
		{
		  num1=rand()%100;
		  num2=rand()%100;
		  cout<<"What is "<<num1<<" times "<<num2<<endl;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  cin>>num3;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  if((num1*num2)==num3)
		  {
			  cout<<"Well done "<<name<< ":)"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
			  flag++;
		  }
		  else
		  {
			  cout<<"OOpsie O_o "<<endl<<"RIGHT ANSWER "<<num1*num2<<endl<<"YOUR ANSWER "<<num3<<endl<<"NO Worries "<<name<<" ;)"<<endl;
			 // cout<<"Practise is all you need"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
		  }
		}
		cout<<"Total correct answers : "<<flag<<endl;
		//cout<<"--------------------------------------------------------------------------------"<<endl;
		if(flag <= ask && flag >=t2+1)
		{
			cout<<"VIOLA ,you have earned the Title Ingenium"<<endl;
			cout<<"TRUE GENIUS"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		
		}
		else if(flag <=t2 && flag >=t1+1)
		{
			cout<<"Keep up the good work ,you have earned the Title medium"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		else
		{
			cout<<"Oh dear lad,you gotta practice ,for now you have earned the Title Infirmatur"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		  
		break;
	case 5:cout<<"Lets Multiply "<<name<<endl;
		cout<<"HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE"<<endl;
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if(ask<10)
		{
			cout<<"Don't be lazy,Minimum of ten questions should be attempted"<<endl;
			cout<<"-_- HOW MANY QUESTIONS WOULD YOU LIKE TO SOLVE, now"<<endl;
			flag1=1;
		}
		if(flag1==1)
		{
		cin>>ask;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		flag1=0;
		
		if(ask<10)
		{
			cout<<"Kidoo,go back to mamma"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			break;
		}
		}
		t1=ask/3;
		t2=t1+t1;
		cout<<"NOTICE : Depending on the right number of answer you will earn a TITLE"<<endl;
		//cout<<"ingenium,infirmatur,medium"<<endl;
		cout<<ask<<" - "<<t2+1<<" : Ingenium "<<endl;
		cout<<t2<<" - "<<t1+1<<" : Medium "<<endl;
		cout<<t1<<" - "<<0<<" : Infirmatur "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int i=0;i<ask;i++)
		{
		  num1=rand()%5;
		  num2=rand()%5;
		  cout<<"What is "<<num1<<" times "<<num2<<endl;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  cin>>num3;
		  cout<<"--------------------------------------------------------------------------------"<<endl;
		  if((num1*num2)==num3)
		  {
			  cout<<"Well done "<<name<< ":)"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
			  flag++;
		  }
		  else
		  {
			  cout<<"OOpsie O_o "<<endl<<"RIGHT ANSWER "<<num1*num2<<endl<<"YOUR ANSWER "<<num3<<endl<<"NO Worries "<<name<<" ;)"<<endl;
			 // cout<<"Practise is all you need"<<endl;
			  cout<<"--------------------------------------------------------------------------------"<<endl;
		  }
		}
		cout<<"Total correct answers : "<<flag<<endl;
		//cout<<"--------------------------------------------------------------------------------"<<endl;
		if(flag <= ask && flag >=t2+1)
		{
			cout<<"VIOLA ,you have earned the Title Ingenium"<<endl;
			cout<<"Seems you are pretty good at tables 0 - 5"<<endl;
			cout<<"Suggestion : Better move to the next category ;)"<<endl; 
			cout<<"--------------------------------------------------------------------------------"<<endl;
		
		}
		else if(flag <=t2 && flag >=t1+1)
		{
			cout<<"Keep up the good work ,you have earned the Title medium"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		else
		{
			cout<<"Oh dear lad,you gotta practice ,for now you have earned the Title Infirmatur"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
		}
		  
		break;
	case 6:cout<<"Practice Time"<<endl;
		do
		{
			cout<<"1 : Learn a table"<<endl<<"2 : I'm done,Thanks!"<<endl;
			cin>>num2;
			switch(num2)
			{
			case 1:cout<<"Which Table you want to MUG-UP :P"<<endl;
		cin>>num1;
		cout<<"---------------------"<<endl;
		for(int i=0;i<20;i++)
		{
			cout<<num1<<"   X   "<<i<<"  =  "<<2*i<<endl;
		}
		cout<<"---------------------"<<endl;
		break;
			case 2:break;
			}
		}while(num2!=2);
	case 7: break;
	
	}
}while(ch!=7);
	system("pause");
	return 0;
	
}