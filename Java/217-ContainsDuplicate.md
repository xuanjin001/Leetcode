# 217. Contains Duplicate

https://leetcode.com/problems/contains-duplicate/

Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

#### Example 1:
```
Input: [1,2,3,1]
Output: true
```

#### Example 2:
```
Input: [1,2,3,4]
Output: false
```

#### Example 3:
```
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
```


### My Thought: 


### Code: I made it too complicated 
```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>(); 

        for(int num:nums) {
            if(map.containsKey(num)) {
                int count = map.get(num); 
                //count++; 
                map.put(num, count++); 
            }
            else {
                map.put(num, 1); 
            }
        }

        List<Integer> list = new ArrayList<Integer>(); 
        list = map.values(); 

        int i = 0; 
        boolean flag = false; 
        while(i<list.size()) {
            if(list.get(i)==1) 
                flag = true; 
            else 
                flag = false; 
        }

        return flag; 
    }
}

```    


## Solution
```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        if(nums.length==1) return false; 
        
        Set<Integer> set = new HashSet<Integer>(); 

        for(int num:nums) {
            if(set.contains(num))
                return true; 
            set.add(num); 
            
        }

        
        return false; 
    }
}
```

#### Logic: 

#### Notes: 


