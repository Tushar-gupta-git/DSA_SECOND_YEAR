#include <stdio.h>
 
int max_of_four(int a, int b, int c, int d){
 int lmao1 ;
 if(a<b)lmao1 =b;
 else lmao1 = a;
 int lmao2;
 if(c<d)lmao2 =d;
 else lmao2 = c;
 
 if(lmao2<lmao1)return lmao1;
 else return lmao2;
 
 
}
 
 
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
 
    return 0;
}
