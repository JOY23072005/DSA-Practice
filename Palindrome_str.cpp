#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int low = 0,high = s.length()-1;
    while(low<high){
        while(!isalnum(s[low]) && low<high ) low++;   
        while(!isalnum(s[high]) && low<high ) high--;
        if(tolower(s[low])!=tolower(s[high])) return false;
        else {low++;high--;}
    }
    return true;
}

int main(){
    while(true){
        string n;
        cout<<"Enter palindrome string to check : ";
        getline(cin,n);
        cout<<isPalindrome(n)<<endl;
    }
}