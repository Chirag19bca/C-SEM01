#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,k=1;
clrscr ();
for (i=1;i<=3;i++)
{
    for (j=1;j<=i;j++)
    {
    printf("%d",k);
    k++;
    }
    printf("\n");
}
 getch ();
}
