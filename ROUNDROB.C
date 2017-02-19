/*Something's wrong in TAT of process 2. Rest all correct. Fix it.*/

#include<stdio.h>
#include<conio.h>

struct pcb
{
   int pno, at, bt, ct, st;
   int tat, wt;
};

void main()
{
   struct pcb pro[4];
   int i, tq, tempbt, flag, round=0, lastbt;
   clrscr();
   printf("Enter the process no, arival time and burst time of the process:\n");
   for(i=0;i<4;i++)
      scanf("%d%d%d", &pro[i].pno, &pro[i].at, &pro[i].bt);

   printf("Enter the time quantum: \n");
   scanf("%d", &tq);

   pro[0].st = pro[0].at;                      //st=at
   pro[0].ct = pro[0].st + pro[0].bt;          //ct=st+at
   pro[0].tat= pro[0].ct - pro[0].at;	       //tat=ct-at
   pro[0].wt = 0;                              //wt=tat-bt

   while(flag!=0)
      { flag=0;
	round++;
	for(i=1;i<4;i++)
	  {
	    if(pro[i].bt==0)
	      continue;
	    pro[i].st = pro[i-1].ct;                     //st=at
	    if(round==1)                                 // Round 1
	      {  if(pro[i].bt>=tq)
		   { pro[i].ct = pro[i].st + tq;         //ct=st+bt
		     tempbt = pro[i].bt;
		     lastbt = tempbt;
		     pro[i].bt = pro[i].bt - tq;
		     if(pro[i].bt!=0)
		       flag=1;
		   }
		 else
		   { pro[i].ct = pro[i].st+pro[i].bt;
		     tempbt = pro[i].bt;
		     lastbt = tempbt;
		     pro[i].bt = pro[i].bt - pro[i].bt;
		   }
		 pro[i].tat= pro[i].ct - pro[i].at;	   //tat=ct-at
		 pro[i].wt = pro[i].tat - pro[i].bt;          //wt=tat-bt
	      }                                            //end round 1
	    else                                           //Round > 1
	      {
		if(pro[i].bt>=tq)
		   { pro[i].ct = pro[i].ct + pro[i].st + tq;         //ct=st+bt
		     tempbt = pro[i].bt;
		     lastbt = tempbt;
		     pro[i].bt = pro[i].bt - tq;
		     if(pro[i].bt!=0)
		       flag=1;
		   }
		 else
		   { pro[i].ct = pro[i].ct + pro[i].st + pro[i].bt;
		     tempbt = pro[i].bt;
		     lastbt = tempbt;
		     pro[i].bt = pro[i].bt - pro[i].bt;
		   }
		 pro[i].tat= pro[i].ct - pro[i].at;            	     //tat=ct-at
		 pro[i].wt = lastbt + pro[i].wt;                     //wt=tat-bt

	      }                                          //end round > 1
	  }
      }

   printf("Process No\tStart time\tCompletion time\tTAT\tWT\n");
   for(i=0;i<4;i++)
      {
	 printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", pro[i].pno, pro[i].st, pro[i].ct, pro[i].tat, pro[i].wt);
      }
   getch();
}





