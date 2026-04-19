#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0) return false;
    int revnum = 0;
    int copy = x;
    while(copy!=0){
        int dig = copy % 10;
        copy/=10;
        if(revnum >= INT_MAX/10) return false;
        revnum = revnum*10+dig;
    }
    if(revnum==x) return true;
    return false;
}

int main(){
    cout<<isPalindrome(121)<<endl;
    cout<<isPalindrome(-121)<<endl;
    cout<<isPalindrome(10)<<endl;
}