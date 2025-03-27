// Your code here...
int isPrime(int n) {
    if (n < 2) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i < n-1; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
