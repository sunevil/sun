#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(NULL));
int a=rand()%100+1;
int x;
again:
printf("Guess a figure beween 1 and 100:");
scanf("%d",&x);
if(x==a)
{
	printf("Right!!");
	return 0;
}
else if(x<a)
{
	printf("less than the right one.\ntry again\n");
	goto again;
}
else
{
	printf("more than the right one.\ntry again\n");
	goto again;
}
return 0;
}

