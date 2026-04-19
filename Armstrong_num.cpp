#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n){
    
    if(n<100 || n>=1000) return false;

    int sum_cube = 0;
    int copy=n;
    while(copy!=0){
        int dig = copy%10;
        sum_cube += dig*dig*dig;
        copy/=10;
    }
    if(sum_cube==n) return true;
    return false;
}

int main(){
    cout<<armstrongNumber(153)<<endl;
    cout<<armstrongNumber(372)<<endl;
    cout<<armstrongNumber(100)<<endl;
}