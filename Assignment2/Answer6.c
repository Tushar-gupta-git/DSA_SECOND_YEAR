#include <stdio.h>


int main()
{
   int a;
   scanf("%d" , &a); 
     char arr [11][11]={"zero" ,"one" ,"two", "three" , "four" , "five" , "six" , "seven" , "eight" ,  "nine"  };
   
   if(a<10)printf("%s" , arr[a]);
   else printf("Greater than 9");

    // Write Your Code Here

    return 0;
}

