#include <stdio.h>
int main() 
{
int i,j;
char ch='A';
char ws1='a';
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%2c%c",ch,ws1);
        ch++;
        ws1++;
    }
    printf("\n");
}
 return 0;
}
