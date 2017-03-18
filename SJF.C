#include<stdio.h>
#include<conio.h>

struct pcb
{
   int pno, at, bt, st, ct, tat, wt;
};

void main()
{
   int i, j, temp;
   float tempTAT, tempWT;
   struct pcb p[5];
   clrscr();
   printf("Enter the process no, arival time, burst time: \n");
   for(i=0;i<5;i++)
     {
	scanf("%d%d%d", &p[i].pno, &p[i].at, &p[i].bt);
     }

   p[0].st = p[0].at;
   p[1].ct = p[0].bt + p[0].st;
   p[0].ct = p[1].ct;
   p[0].tat = p[1].ct - p[0].at;
   p[0].wt = p[0].tat - p[0].bt;
   tempTAT = p[0].tat;
   tempWT = p[0].wt;

   for(i=2;i<5;i++)
     { for(j=1;j<i;j++)
	 {
	    if(p[i].bt < p[j].bt)
	      {
		 temp=p[i].pno;
		 p[i].pno=p[j].pno;
		 p[j].pno=temp;

		 temp=p[i].at;
		 p[i].at=p[j].at;
		 p[j].at=temp;

		 temp=p[i].bt;
		 p[i].bt=p[j].bt;
		 p[j].bt=temp;
	      }
	 }

     }

   for(i=1;i<5;i++)
     {
       p[i].st = p[i-1].ct;
       p[i].ct = p[i].bt + p[i].st;
       p[i].tat = p[i].ct - p[i].at;
       p[i].wt = p[i].tat - p[i].bt;
       tempTAT = tempTAT + p[i].tat;
       tempWT = tempWT + p[i].wt;
     }

   printf("\n\nProcess no\tStart time\tCompletion time\tTAT\tWaiting time\n");

   for(i=0;i<5;i++)
     {
	printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].pno, p[i].st, p[i].ct, p[i].tat, p[i].wt);
     }
   printf("\nAverage turn around time: %f", tempTAT/5);
   printf("\nAverage waiting time: %f", tempWT/5);
   getch();
}
