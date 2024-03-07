class Solution{
public:
    int isPrime(int N){
        
    if (N == 2) {
        return true;
    }
        
    if (N <= 1 || N % 2 == 0) {
        return false;
    }

    // Check for odd divisors from 3 to the square root of the number
    for (int i=3; i*i<=N; i+=2) {
        if (N % i == 0) {
            // If the number is divisible, it is not prime
            return false;
        }
    }

    // If no divisors are found, the number is prime
    return true;
    }
};
