class Solution {
public:
    long long mod = 1e9+7;

    long long power(long long base,long long exp){
        long long res = 1;
        while(exp>0){
            if(exp %2==1){
                res = (res * base)%mod;
            }
            base = (base * base)%mod;
            exp/=2;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long oddPos = n/2;
        long long evenPos = (n+1)/2;

        long long odd = power(4,oddPos);
        long long even = power(5,evenPos);
        return (odd * even) % mod;
    }
};