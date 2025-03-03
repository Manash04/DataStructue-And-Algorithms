class Solution {
public:
    long long myPow(long long x, long long n, long long mod) {
        if(n==0) return 1;
        if(n%2==0){
            long long y = myPow(x , n/2 , mod);
            return (y*y)%mod;
        }
        else{
            return ((x%mod)*(myPow(x,n-1 , mod))%mod)%mod;
        }
    }

    int countGoodNumbers(long long n) {
        long long mod = 1e9 +7;
        if (n == 0)
            return 0;
        long long even =(n+1)/2;
        long long odd=n/2;

        return (myPow(5, even , mod) * myPow(4, odd,mod))%mod;
    }
};