
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int queue[max_size],front=-1,rear=-1;
/*------ Function Prototype------------*/
void insert();
void del();
void display();
/*-------------------------------------*/
 int main()
{
        int choice;
        do{
 
                printf("\n\n--------QUEUE OPERATIONS-----------\n");
                printf("1.Insert\n");
                printf("2.Delete\n");
                printf("3.Display\n");
                printf("4.Exit\n");
                printf("-----------------------");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1: 
                                        insert();
                                        break;
                        case 2:
                                        del();
                                        break;
                        case 3:
                                        display();
                                        break;
                        case 4:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=4);
        return 0;
}
void insert() //Inserting an element in to the queue
{
        int item;
        if(rear==(max_size-1))
        {
                printf("\nQueue Overflow:");
        }
        else
        {
                printf("Enter the element to be inserted:\t");
                scanf("%d",&item);
                rear=rear+1;
                queue[rear]=item;
 
                if(front==-1)
                        front=0;
        }
 
}//end of insert()
void del()      //deleting an element from the queue
{
        int item;
        if(front==-1)
        {
                printf("\nQueue Underflow:");
        }
        else
        {
                item=queue[front];
                printf("\nThe deleted element: %d\t",item);
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                {
                        front=front+1;
                }
        }
}//end of del()
void display()  //To display the queue elements
{
        int i;
        if(front==-1)
        {
                printf("\nQueue is Empty:");
        }
        else
        {
                printf("\nThe queue elements are:\n" );
                for(i=front;i<=rear;i++)
                {
                        printf("%d\t",queue[i]);
                }
        }
 
}//end of display(