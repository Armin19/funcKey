#include<iostream.h>
#include<conio.h>

char funckey( int &T)
{
char c=getch();
if (c==0)
{
T=1;
c=getch();
}
else
T=0;
return c;
}
void main()
{
int T;
clrscr();
char c=0;
while(c!=27)
{
c=funckey(T);
cout<<"func:"<<T<<endl<<"ASCII:"<<" "<<c<<'\n';
}
}