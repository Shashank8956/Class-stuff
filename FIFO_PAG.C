#include<stdio.h>
#include<conio.h>

void main()
{
   int i, pg_flt=0, j, pg[30], n, f, fr[5] = {-1, -1, -1, -1, -1}, last;
   clrscr();
   printf("Enter the no. of pages: ");
   scanf("%d", &n);
   printf("Enter the page no: ");
   for(i=0;i<n;i++)
      scanf("%d", &pg[i]);
   printf("Enter no. of frames: ");
   scanf("%d", &f);

   printf("\n\nReference String\t\tPage Frame\n");

   for(i=0;i<n;i++)
     { j=0;
       while(fr[j]!=pg[i] && j<f)
	  j++;
       if(fr[j]==pg[i])
	 {
	   printf("\n%d\t\t\t\t", pg[i]);
	   for(j=0;j<f;j++)
	      printf("%d ", fr[j]);
	   continue;
	 }
       else
	 {
	    for(j=0;j<f;j++)
	      {
		 if(fr[j]==-1)
		   {
		     fr[j] = pg[i];
		     last = j;
		     pg_flt++;
		     break;
		   }
		 else
		   {
		     if(last!=(f-1))
		       {
			 fr[last+1] = pg[i];
			 last=last+1;
			 pg_flt++;
			 break;
		       }
		     else
		       {
			  fr[0] = pg[i];
			  last=0;
			  pg_flt++;
			  break;
		       }
		   }
	      }
	 }
       printf("\n%d\t\t\t\t", pg[i]);
       for(j=0;j<f;j++)
	  printf("%d ", fr[j]);
       printf(" -> F");
     }
   printf("\nTotal no of page fault is: %d", pg_flt);
   getch();
}