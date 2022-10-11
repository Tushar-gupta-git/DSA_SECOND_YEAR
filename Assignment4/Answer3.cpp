https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple = 0;
    int orange = 0;
    for(int i = 0 ; i<apples.size();i++){
        apples[i]=a+apples[i];
        if(apples[i]<=t && apples[i]>=s){
            apple++;
        }
    }
    for(int i = 0 ; i<oranges.size();i++){
        oranges[i]=b+oranges[i];
        if(oranges[i]<=t && oranges[i]>=s){
            orange++;
        }
    }
    cout<<apple<<endl;
    cout<<orange;

}