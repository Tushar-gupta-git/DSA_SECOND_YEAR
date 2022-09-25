#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
 int lmao = a;
 if(a>b){
     lmao = a;
     if(c>a){
         lmao =c;
        if (d>c) {
        lmao =d;
        }
     }
 }
 else {
 lmao = b;
     if(c>b){
         lmao =c;
        if (d>c) {
        lmao =d;
        }
     }
 }
 return lmao;   
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}