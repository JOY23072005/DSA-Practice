class Solution {
public:
    long long mod = 1e9+7;

    long long power(long long base,long long exp){
        if(exp==0) return 1;
        if(base==1 || base==0) return base;
        if(exp % 2==1){
            return ( base * power(base,exp-1) ) % mod;
        }
        long long half = power(base,exp/2);
        return ( half * half ) % mod;
    }

    int countGoodNumbers(long long n) {
        long long oddPos = n/2;
        long long evenPos = (n+1)/2;

        long long odd = power(4,oddPos);
        long long even = power(5,evenPos);
        return (odd * even) % mod;
    }
};