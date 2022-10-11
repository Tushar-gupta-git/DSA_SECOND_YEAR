//https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true


string kangaroo(int x1, int v1, int x2, int v2) {
    string lmao = "NO";
    int sum =x1;
    int sum2 = x2;
    while(sum2>sum){  // mentioned x2 can never be smaller than x1 
        sum= sum+v1;
        sum2= sum2+v2;
        if(sum==sum2){
            lmao = "YES";
            return lmao;
        }
    }
    return lmao;

}
