/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */
class Solution {
public:
    /*int countPrimes(int n) {
        // https://www.geeksforgeeks.org/prime-numbers/
        int counter =0; 
        int i=1; 

        if(n<=2) return 0; 
        else {
            while(i<n) {
                if(isPrime(i))
                counter++; 
                
                i++; 
            }
            
        }
        return counter; 
    }

    bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} */

int countPrimes(int n) {
            if(n<=2)  return 0;
            vector<bool>  check(n, false);
            
            int result=1;
            int upper=sqrt(n);
            for(int i=3; i<n; i+=2){
                if(!check[i]){
                    result++;
                    if(i>upper) continue;
                    for(int j=i*i; j<n; j+=i){
                        check[j]=true;
                    }
                }
            }
            return result;
        }

};

