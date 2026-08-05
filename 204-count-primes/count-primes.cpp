/*class Solution {
public:
    bool isprime(int n) 
    {
        if (n <= 1) 
        {
            return false;
        }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
    int countPrimes(int n) 
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(isprime(i))
            {
                count++;
            }
        }
        return count;
    }
};*/
class Solution {
public:
    int countPrimes(int n) 
    {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i < n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrime[i]) 
            {
                count++;
            }
        }
        return count;
    }
};