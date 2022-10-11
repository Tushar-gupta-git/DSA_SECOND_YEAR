//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true


vector<int> breakingRecords(vector<int> scores) {
vector<int> ans;
int min =scores[0];
int max = scores[0];
int count1 = 0;
int count2=0;
for (int i = 0 ; i<scores.size(); i++) {
    if(scores[i]>max){
        max=scores[i];
        count1++;
    }
    else if(scores[i]<min){
        min=scores[i];
        count2++;
    }
}
ans.push_back(count1);
ans.push_back(count2);

return ans ;
}