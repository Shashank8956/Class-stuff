#include<iostream.h>
#include<conio.h>

class col
{
   private:
     int year;
     char branch[5];
   public:
     col()
     {
	year=0;
	for(int i=0;i<5;i++)
	  branch[i]='\0';
     }

     void inCs()
     {
	cout<<"Enter Year: ";
	cin>>year;
	cout<<"Enter branch: ";
	cin>>branch;
     }

     void inCe()
     {
	cout<<"Enter department: ";
	cin>>branch;
     }

     void outCs()
      {
	 cout<<"\nYear: "<<year;
	 cout<<"\nBranch: "<<branch;
      }

     void outCe()
      {
	 cout<<"\nDepartment: "<<branch;
      }
};

class mgmt
{
   private:
     int sal, fee;

   public:
     mgmt()
       {
	  sal=0;
	  fee=0;
       }

     void inMs()
       {
	  cout<<"Enter fee: ";
	  cin>>fee;
       }

     void inMe()
       {
	  cout<<"Enter Salary: ";
	  cin>>sal;
       }

     void outMs()
       {
	  cout<<"\nFees: "<<fee;
       }

     void outMe()
       {
	  cout<<"\nSalary: "<<sal;
       }
};

class emp: private col, mgmt
{
   private:
     int id;
     char name[25];
   public:
     emp()
       {
	  col::col();
	  mgmt::mgmt();
	  id=0;
	  for(int i=0;i<25;i++)
	    name[i];
       }

     void in()
       {
	  cout<<"Enter name: ";
	  cin>>name;
	  cout<<"Enter id: ";
	  cin>>id;
	  inMe();
	  inCe();
       }

     void out()
       {
	  cout<<"\nName: "<<name;
	  cout<<"\nID: "<<id;
	  outMe();
	  outCe();
       }

};

class stud: private col, mgmt
{
  private:
     int roll;
     char name[25];
   public:
     stud()
       {
	  col::col();
	  mgmt::mgmt();
	  roll=0;
	  for(int i=0;i<25;i++)
	    name[i];
       }

     void in()
       {
	  cout<<"\nEnter name: ";
	  cin>>name;
	  cout<<"Enter Roll: ";
	  cin>>roll;
	  inMs();
	  inCs();
       }

     void out()
       {
	  cout<<"\nName: "<<name;
	  cout<<"\nRoll: "<<roll;
	  outMs();
	  outCs();
       }
};

void main()
{
   clrscr();
   emp e1;
   stud s1;
   cout<<"Employee details:\n";
   e1.in();
   cout<<"\n\nStudent details:\n";
   s1.in();
   clrscr();
   cout<<"Employee details:";
   e1.out();
   cout<<"\n\nStudent details:";
   s1.out();
   getch();
}