#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<windows.h>
int h=0,m=0,s=0;
char ch='p';

void main()
{
void watch();
watch();

while(1)
{
if(kbhit())
ch=getch();
if(ch=='s'||ch=='S')
break;
if(ch=='e'||ch=='E')
exit(0);
}


while(1)
{
watch();
sleep(1);

if(kbhit())
ch=getch();

if(ch=='r'||ch=='R')
{
h=m=s=0;
watch();

while(1)
{
if(kbhit())
ch=getch();
if(ch=='s'||ch=='S')
break;
if(ch=='e'||ch=='E')
exit(0);
}
}
else
if(ch=='p'||ch=='P')
while(1)
{
if(kbhit())
ch=getch();
if(ch=='s'||ch=='S')
break;
if(ch=='e'||ch=='E')
exit(0);
if(ch=='r'||ch=='R')
{
ch='c';
h=m=s=0;
watch();
}
}
else
if(ch=='e'||ch=='E')
exit(0);

if(s!=59)
s++;
else
{
s=0;
if(m!=59)
m++;
else
{
m=0;
h++;
}
}
}
}

void watch()
{
system("cls");
printf("\n\n\t\t\t\t\tStopwatch \n\n\t\t\t\t\t");

printf("%02d:%02d:%02d",h,m,s);

printf("\n\n\n\t\t\t\t\tPress Key");
printf("\n\t\t\t\t\t---------------");
printf("\n\n\n\t\t\t\t\ts -> Start");
printf("\n\n\n\t\t\t\t\tp -> Pause");
printf("\n\n\n\t\t\t\t\tr -> Reset");
printf("\n\n\n\t\t\t\t\te -> Exit");
}
