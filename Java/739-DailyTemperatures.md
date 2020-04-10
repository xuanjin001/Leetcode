# 739. Daily Temperatures

https://leetcode.com/problems/daily-temperatures/

Given a list of daily temperatures `T`, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature. If there is no future day for which this is possible, put `0` instead.

For example, given the list of temperatures `T = [73, 74, 75, 71, 69, 72, 76, 73]`, your output should be [`1, 1, 4, 2, 1, 1, 0, 0]`.

Note: The length of `temperatures` will be in the range `[1, 30000]`. Each temperature will be an integer in the range `[30, 100]`.

### My Thought: 
have a loop going through the array, and get each element and see if the 
This is a window sliding type of problem 

### Code: My own solution!!! This worked!!! --> need better solution, this one runs too slow 
```java
class Solution {
    public int[] dailyTemperatures(int[] T) {
        int[] result = new int[T.length]; 
        int[] tmp = new int[T.length]; 

        for(int i=0; i<T.length; i++) {
            tmp = Arrays.copyOfRange(T, i, T.length); 
            result[i] = findHighTemp(tmp);
            //tmp = []; 
        }

        return result; 
    }

    public int findHighTemp(int[] T) {
        int index=0; 
        int current = T[0]; 
        for(int i=1; i<T.length; i++) {
            if(T[i]> current ) {
                index = i; 
                break;
            }
            else continue; 
        }
        return index; 
    }
}

```    


## Solution




