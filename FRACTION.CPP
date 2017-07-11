#include<iostream.h>
#include<conio.h>

class Frac
{
  private:
     int n, d;

  public:
     Frac(){n=0; d=0;}
     void in()
     {
       cout<<"Enter the numerator and denominator: ";
       cin>>n>>d;
     }

     void calc(Frac f1, Frac f2)
     {
       n=((f1.n*f2.d) + (f2.n*f1.d));
       d=f1.d*f2.d;
     }

     void out()
     {
       cout<<endl<<n<<"/"<<d;
     }
};

void main()
{
  clrscr();
  Frac ff1, ff2, ff3;
  ff1.in();
  ff1.out();
  ff2.in();
  ff2.out();
  ff3.calc(ff1, ff2);
  ff3.out();
  getch();
}




