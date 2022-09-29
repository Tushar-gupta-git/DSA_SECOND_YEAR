
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


void plusMinus(vector<int> arr) {
    double plus=0;
    double minus =0;
    double zero=0;
    
    for (int i=0; i<arr.size(); i++) {
        if (arr[i]>0) {
        plus = plus+1;
        }
        if (arr[i]<0) {
        minus = minus+1;
        }
        if(arr[i]==0)zero++;
    }
    // cout<< plus <<"\n " ;
    // cout<<minus << " ";
    // cout<< zero <<" "<<endl;
    cout<<plus/arr.size()<<endl;
    cout<<minus/arr.size()<<endl;
    cout <<zero/arr.size()<<endl;

}


int main()
{
   
    vector<int>myarr={1, -2, -7, 9 ,1 ,-8, -5}; 
    plusMinus(myarr);
 
    
    return 0;
}