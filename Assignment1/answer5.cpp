#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a; 
    cin>>a;
    int arr [a];
    for(int i =0 ; i<a ; i++){
        cin>>arr[i];
    }
    int j=a-1;
    for(int i =0 ; i<j ;i++){
        //swapping the front and back lmao
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        
    }
    for(int i = 0 ; i<a ;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
