/*


class Solution {
public:
    int mod = 1e9 + 7; 
    int pow(long long a, long long b) {
        if (b == 0)
            return 1;
        long long temp = pow(a, b / 2);
        if (b % 2 == 0) {
            return (temp * temp) % mod;
        }
        return ((temp * temp) % mod * a) % mod;
    }
    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = n - odd;
        long long p1 = pow(4, odd) % mod;
        long long p2 = pow(5, even) % mod;
        return (p1 * p2) % mod;
    }
};

*/