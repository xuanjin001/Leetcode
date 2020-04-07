# 56. Merge Intervals

https://leetcode.com/problems/merge-intervals/

Given a collection of intervals, merge all overlapping intervals.

#### Example 1:
```
Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
```
#### Example 2:
```
Input: [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
```
**NOTE:** input types have been changed on April 15, 2019. Please reset to default code definition to get new method signature.



### My Thought: 
Check if there is any cross, if there are, then merge 


### Code: 
```java
class Solution {
    public int[][] merge(int[][] intervals) {
        
    }

    private boolean overlap(int[][] intervals) {
        int begin = intervals[0][]; 
        int end = intervals[][0]; 
        int i=0, j=0; 

        for(int[][] interval: intervals) {
            if( (intervals[i][]>= begin && intervals[i][]<= end) || (intervals[][j]) >= begin && intervals[][j] <= end ) {

            }

        }
    }
}

``` 


## Solution

https://www.youtube.com/watch?v=qKczfGUrFY4

```java
class Solution {
    public int[][] merge(int[][] intervals) {
        if(intervals.length <= 1)
            return intervals; 

        Arrays.sort(intervals, (arr1, arr2) -> Integer.compare(arr1[0], arr2[0])); // compare array by array with the first element, the smaller first element ones will be put first 

        List<int[]> result = new ArrayList<int[]>(); //dynamic 
        int[] cur_interval = intervals[0]; 
        result.add(cur_interval); 
        int i = 0; 

        for(int[] interval :intervals){
            int cur_begin = cur_interval[0]; 
            int cur_end = cur_interval[1]; 
            int next_begin = interval[0]; 
            int next_end = interval[1];

            if(cur_end >= next_begin) {
                cur_interval[1] = Math.max(cur_end, next_end); //update the intervals with bigger bound

            }
            else {
                cur_interval = interval; 
                result.add(cur_interval); 
            }
            
            i++; 
        }
        

        return result.toArray(new int[result.size()][]); //change the list back to array
    }
}

``` 


