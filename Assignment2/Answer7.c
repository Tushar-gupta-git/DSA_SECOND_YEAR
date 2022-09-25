int main() {
	
    int n;
    scanf("%d", &n);
    int ans = 0;
  while(n>0){
      int rem = n%10;
      ans = ans+rem;
       n = n/10;
  }
  printf("%d", ans);
    return 0;
}