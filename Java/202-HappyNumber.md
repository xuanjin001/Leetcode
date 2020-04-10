# 202. Happy Number 

https://leetcode.com/problems/happy-number/

Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

#### Example: 

```
Input: 19
Output: true
Explanation: 
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
```


### My Thought: 


### Code: not working 
```java
class Solution {
    public boolean isHappy(int n) {

        return calc(n)==1; 

        
    }

    public int calc(int nums) {
        int result = 0; 

        while(result != 1){
            String str = Integer.toString(nums);
            for(String s : str) {
                int num = Integer.parseInt(str); 
                result = result + num^2; 
            }
            
        }
    }
}

```    

#### Notes:
https://www.baeldung.com/java-number-of-digits-in-int



## Solution

https://tinyfool.org/2019/08/leetcode-202-happy-number/

```java
class Solution {
    public boolean isHappy(int n) {
        
        List<Integer> nums; 
        HashSet<Integer> set = new HashSet<>(); 
        while(n>1) {
            if(set.contains(n))
                return false; 
            else
                set.add(n); 
            nums = split(n); 
            n = combine(nums); 
        }

        if(n==1) return true; 
        else return false; 
    }

    List<Integer> split(int n) {
        ArrayList<Integer> nums = new ArrayList<Integer>(); 
        int x = n; 

        while(x>=10) {
            int remain = x % 10; 
            x = x/10; 
            nums.add(remain); 
        }
        if(x>0)
            nums.add(x); 
        
        return nums; 
    }

    int combine(List<Integer> nums) {
        int s = 0; 
        for(int num:nums) {
            s += num*num; 
        }
        return s; 
    }
}

```   

https://blog.csdn.net/xudli/article/details/45267247


```java
public class Solution {
    public boolean isHappy(int n) {
        if(n<=0) return false; 

        long ln =n; 
        Set<Long> set = new HashSet<Long>(); 

        while(ln<=Integer.MAX_VALUE) {
            if(set.contains(ln)) return false; 
            else
                set.add(ln); 
            
            ln = digitSquare(ln); 
            
            if(ln == 1) return true; 
        }

        return false; 
    }

    private long digitSquare(long ln) {
        long sum = 0; 
        while(ln!=0){
            sum += Math.pow(ln%10, 2); //power function
            ln /= 10; 
        }
        return sum; 
    }
}
```

https://www.cnblogs.com/yrbbest/p/4493542.html

https://techlarry.github.io/Leetcode/202.%20Happy%20Number/

```java
public boolean isHappy(int n) {
    HashSet set = new HashSet();
    while (n != 1) { 
        if(!set.add(n)) return false; // if n already exist in the set, it return false 
        int nt = n, digit;
        n = 0;
        //seperate n into digits 
        while (nt != 0) {
            digit = nt % 10;
            n += digit*digit;
            nt /= 10;
        }
    }
    return true;
}
```

I would usually consider the opposite test: 
```java
if (!set.add(entry)) { // entry already present, possibly a case you want to handle

}
```


#### Note: hashset
https://www.callicoder.com/java-hashset/

* HashSet cannot contain duplicate values
* HashSet allows `null` value
* HashSet is an unordered collection. It does not maintain the order in which the elements are inserted 
* HashSet internally uses a HashMap to store its elements 
* HashSet is not thread-safe. If multiple threads try to modify a HashSet at the sametime, then the final outcome is not-deterministic. You must explicitly synchronize concurrent access to a HashSet in a multi-threaded environment. 

