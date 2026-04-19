#include <bits/stdc++.h>
using namespace std;

int reverse( int x){
        int newNum = 0;
        while(x){
            int dig = x%10;
            x/=10;

            if (newNum > INT_MAX / 10 || (newNum == INT_MAX / 10 && dig > 7)) {
                return 0; // Overflow
            }
            if (newNum < INT_MIN / 10 || (newNum == INT_MIN / 10 && dig < -8)) {
                return 0; // Underflow
            }

            newNum=newNum*10+dig;
        }
        return newNum;
    }
int main(){
    cout<<reverse(1534236469)<<endl;
    // cout<<reverse(123)<<endl;
    cout<<reverse(-123)<<endl;
    // cout<<reverse(120)<<endl;
    return 0;
}