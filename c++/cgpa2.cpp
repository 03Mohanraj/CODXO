#include<iostream>
#include<conio.h>
using namespace std;
//First Function
void calculateGPA()
{   // SubScribe to MH Computer Academy
//https://www.youtube.com/watch?v=LRPbCtN1EbI&t=907s

   int NoOfSubs;
   double credits[NoOfSubs];
   double points[NoOfSubs];
   double sum=0;
   double total;
   double totalCredits=0;
   system("cls");
   cout<<"------------------------------------------------"<<endl;
   cout<<"|                GPA Calculator                |"<<endl;
   cout<<"------------------------------------------------"<<endl;
   cout<<"Enter No of Subjects: ";
   cin>>NoOfSubs;
   cout<<endl;
   for(int i=1;i<=NoOfSubs;i++)
   {
   	cout<<"Enter Credits of subjects:"<<i<<":";
   	cin>>credits[i];
   	cout<<"Enter Points of Subjects:"<<i<<":";
   	cin>>points[i];
   	cout<<"------------------------------------------------"<<endl;
   }
   for(int i=1;i<=NoOfSubs;i++)
   {
   	total=credits[i]*points[i];
   	sum +=total;
   }
   for(int i=1;i<=NoOfSubs;i++)
   {
   	totalCredits += credits[i];
   }
   cout<<endl<<endl;
   cout<<"Total Points: "<<sum<<endl;
   cout<<"Total Credits:"<<totalCredits<<endl;
   cout<<"Total GPA:"<<sum/totalCredits<<endl;
   
   cout<<"\n Press any key to go back to Main Menu...";
   getch();
   
   	
}
//Second Function
void calculateCGPA()
{
	int NoOfSems;
system("cls");
   cout<<"------------------------------------------------"<<endl;
   cout<<"|                CGPA Calculator                |"<<endl;
   cout<<"------------------------------------------------"<<endl;
   cout<<"Enter No of Semesters: ";
   cin>>NoOfSems;
   double semesters[NoOfSems];
   double semTotal=0;
   for(int i=1;i<=NoOfSems; i++)
   {
   	cout<<"Enter Semester #"<<i <<"GPA:";
   	cin>>semesters[i];
	   }	
	for(int i=1;i<=NoOfSems; i++)
	{
		semTotal += semesters[i];
	}
	cout<<"Your CGPA :"<<semTotal/NoOfSems <<endl;
	
	cout<<"\n Press any key to go back to Main Menu...";
	getch();
	   
}
//Third Function
void instructions()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"How to Calculate GPA and CGPA :"<<endl;
	cout<<"-------------------------------"<<endl<<endl;
	cout<<"GPA = Sum of (credit*point) / Total of credits "<<endl;
	cout<<"CGPA = Sum of GPA / Number of semesters "<<endl;
	cout<<endl<<endl;
	cout<<"Grade - Point Table : "<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"\tGrade \t\t 4.0 Scale"<<endl;
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"\tO \t\t 10.0 "<<endl;
	cout<<"\tA+\t\t 9.0 "<<endl;
	cout<<"\tA \t\t 8.0 "<<endl;
	cout<<"\tB+\t\t 7.0 "<<endl;
	cout<<"\tB \t\t 6.0 "<<endl;
	cout<<"\tC \t\t 5.0 "<<endl;
	cout<<"\tF \t\t 0.0 "<<endl;
	
	cout<<"\n Press any key to go back to Main Menu...";
	
	getch();
	
	
}
int main()
{
	do
	{
	
	system("cls");
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                CGPA Calculator                |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"1. Calculate GPA"<<endl;
	cout<<"2. Calculate CGPA"<<endl;
	cout<<"3. How to Calculate GPA?"<<endl;
	cout<<"4. Quit"<<endl<<endl;
	cout<<"Select Option:";
	char op=0;
     cin>>op;
     
     if(op == '1') calculateGPA();
     else if(op == '2') calculateCGPA();
     else if(op == '3') instructions();
     else if(op == '4') exit(0);
		
	}while(1);
	return 0;
	getch();
}
