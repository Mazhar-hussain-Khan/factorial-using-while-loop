/* Mazhar Hussain    Registration number:20Mdele098
20Mdele098@uetmardan.edu.pk   */
/* program to find factorial of a number using while loop*/
#include<stdio.h>
int main()
{
	int factorial=1,number;//initializing and declaring variable//
	
	printf("enter only positive number for finding factorial:\n ");//asking to enter positive number //
	scanf("%d",&number);//saving number//
	
	int i;//declaring variable//
	i=number;// one variable value equals to other//
	
	while (i>0)
	{
		factorial=factorial*i;//calculating factorial//
		--i;// decrement i by 1, repeat until i > 0 that is i = 1
	}
	printf("the factrial of a number is %d",factorial);//displaying factorail//
	return 0;
}

