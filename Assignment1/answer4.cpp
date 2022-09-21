#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string arr[] = {"zero" , "one", "two " , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"  };
   int start , end ;
   cin>>start >>end;
   for(int i = start ;i <= end ;i++){
      if(i<=9)cout<<arr[i]<<"\n";
       else{
           if(i%2==0){
               cout<<"even"<<"\n";
           }
           else {
           cout<<"odd"<<"\n";
           }}
       
   }
    return 0;
}
