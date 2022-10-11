https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=true

// 8 test cases are failed

string appendAndDelete(string s, string t, int k) {
    bool lol = false;
    int i =0;
    int length = t.size();
        while(!lol && i<length){
            if(t[i]!=s[i]){
            lol = true;
            }
            i++;  
        }
        i--;
        int count  = 0;
        count = t.size()-i;
        // cout<<count<<" ";
        count = count + s.size()-i;
        // cout<<count<<" ";
        if(!lol){
            count = s.size()+1+s.size();
        }
        if(count==k){
           cout<<count;
           return "Yes";
           
        }else {
            cout<<count;
        return "No";
        }


}
