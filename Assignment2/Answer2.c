#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
char a;
scanf("%c ", &a);
char b[100];
scanf("%s " , &b);
char s[100];
scanf("%[^\n]%*c", &s);
printf("%c\n", a);
printf("%s\n", b);
printf("%s", s);

  
    return 0;
}