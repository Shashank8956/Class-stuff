#include<iostream.h>
#include<conio.h>

class string
{
   private:
      char str[10];

   public:
      string()
      {
	for(int i=0; i<10;i++)
	  str[i]='\0';
      }

      void in()
      {
	 cout<<"Enter the string\n";
	 cin>>str;
      }

      void length()
      {  int cnt=0, i=0;
	 while(str[i]!='\0')
	   {
	      cnt++;
	      i++;
	   }
	 cout<<"\nLength: "<<cnt;
      }

      void copy(string ss)
      {   int i=0;
	  while(ss.str[i]!='\0')
	  {
	     str[i]=ss.str[i];
	     i++;
	  }
      }

      void compare(string ss, string ss1)
      {
	  int i=0, sum1=0, sum2=0;
	  while(ss.str[i]!='\0' && ss1.str[i]!='\0')
	  {
	     sum1 = ss.str[i]+sum1;
	     sum2 = ss1.str[i]+sum2;
	  }
	  if(sum1>sum2)
	     cout<<"1st string is greater";
	  else if(sum1<sum2)
	     cout<<"2nd string is greater";
	  else
	     cout<<"Both equal";
      }

      void out()
      {
	cout<<"\nAfter copy: "<<str;
      }
};

void main()
{
   clrscr();
   string s1, s2, s3;
   s1.in();
   s1.length();
   s2.copy(s1);
   s2.out();
   s3.compare(s1,s2);
   getch();
}