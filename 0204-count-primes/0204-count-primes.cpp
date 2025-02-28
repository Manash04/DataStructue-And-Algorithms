class Solution {
public:
    int countPrimes(int n) {
         if (n <= 2) return 0;
         
        vector<bool>Primes(n,true);
        Primes[0]=false;
        Primes[1]=false;

        for(int i=2; i*i<n; i++){
            if(Primes[i]){
                for(int j=i*i; j<n; j+=i){
                        Primes[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            if(Primes[i]){
                cnt++;
            }
        }return cnt;
    }
};