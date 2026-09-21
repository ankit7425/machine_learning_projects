class Solution {
public:
    bool isSumOfTwoPrimes(int n) {
        // Your code goes here
      for (int i =2; i<n; i++){
        if (isPrime(i)&&isPrime(n-i))
        return True;
      }return False;
};