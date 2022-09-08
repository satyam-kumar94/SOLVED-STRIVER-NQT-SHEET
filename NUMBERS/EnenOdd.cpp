#include <bits/stdc++.h>
using namespace std;
int remainder(int n){
    return(n%2);
}
int main(){
    int n;
    cout<<"Enter Number ";
    cin>>n;
    if(remainder(n) == 0){
        cout<< n <<   " Is Even ";
    }
    else{
        cout<< n <<  " Is Odd ";
    }
}