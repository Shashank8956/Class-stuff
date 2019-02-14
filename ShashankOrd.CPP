#include<iostream.h>
#include<conio.h>

char a[26]; 		//Only for lower case char						      

int ord(char ch){
    int ascii = 0;
    for(int i = 0; i<26; i++)
	if(ch == a[i]){
	    ascii = 65+i;
	}
    return ascii;
}

void main(){
   char ch = 'g';
   int flag = 0;
   for(int i=0; i<26; i++)
	a[i] = 97+i;
   flag = ord(ch);
   if(flag==0)
	cout<<"Invalid character";
   else
	cout<<flag;
   getch();
}






































