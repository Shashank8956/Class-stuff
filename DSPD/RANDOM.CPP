#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void test();

void main()
{
   int ran=0;
   int arr[3]={1,2,3};
   clrscr();
   srand(time(NULL));
   ran = rand()%3;
   switch(arr[ran])
   {
      case 1:   test();
		break;
      case 2:   test();
		break;
      case 3:   test();
		break;
   };
   getch();
}

void test()
{
   int ran=0, ran2=0;
   int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int arr1[3]={1,2,3};

   clrscr();
   srand(time(NULL));
   ran2 = rand()%3;
   switch(arr1[ran2])
   {
      case 1: cout<<402<<"."; break;
      case 2: cout<<408<<"."; break;
      case 3: cout<<411<<"."; break;
   };
   srand(time(NULL));
   ran = rand()%20;
   printf("%d",arr[ran]);
}