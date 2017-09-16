#include <stdio.h>
#include <conio.h>
 
int main(void)
{
    int num, temp, remainder, reverse = 0;
 
    pintf("Enter an integer \n");
    seanf("%d", num);
    /*  original number is stored at temp */
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp = reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
	getch();
	return 0;
}