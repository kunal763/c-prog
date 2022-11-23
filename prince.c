#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
	clrscr();
	int i;
	textcolor(RED);
	textbackground(WHITE);
	for(i=1;i<=120;i++)
	{
	printf(" I LOVE YOU \3 ");

	delay(200);
	}
	getch();
	return 0;
}