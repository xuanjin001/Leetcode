# 347. Top K Frequent Elements

https://leetcode.com/problems/top-k-frequent-elements/

Given a non-empty array of integers, return the k most frequent elements.

#### Example 1:
```
Input: nums = [1,1,1,2,2,3], k = 2

Output: [1,2]
```

#### Example 2:
```
Input: nums = [1], k = 1

Output: [1]
```

#### Note:

* You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
* Your algorithm's time complexity **must be** better than O(n log n), where n is the array's size.


### My Thought: 
Use something similar to 136. 
have a hashmap to save the array, and counting the frequency. 
The trickey part is we need to find the highest frequency. 


### My Code: (Not working) 
```java
class Solution {
    public List<Integer> topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>(); 
        int[] order = new int[nums.length]; 
        List<Integer> result = new ArraysList<Integer>(); 

        if(nums.length <= 1 && k=1) return nums[0]; 

        for(int num : nums) {
            if(map.containsKey(num)) {
                int count = map.get(num); 
                count++; 
                map.put(num, count); 
            }
            else {
                map.put(num, 1); 
            }
        }

        for(int i=0; i<nums.length; i++) {
            order[i] = map.get(nums[i]); 
        }

        //get the most frequent one 

        order.sort(); 
        int order_size = order.length; 

        for(int i=nums.length; i>k; i--) {
            int value = map.get(nums[i]); 
            if(value == order[order_size]) result.add(nums[i]); 
        }

        return result; 
        
    }
}

```    



## Solution

https://www.youtube.com/watch?v=t0Cq6tVNRBA



```java
class Solution {
  public List<Integer> topKFrequent(int[] nums, int k) {
    // build hash map : character and how often it appears
    HashMap<Integer, Integer> count = new HashMap();
    for (int n: nums) {
      count.put(n, count.getOrDefault(n, 0) + 1);
    }

    // init heap 'the less frequent element first'
    PriorityQueue<Integer> heap =
            new PriorityQueue<Integer>((n1, n2) -> count.get(n1) - count.get(n2));

    // keep k top frequent elements in the heap
    for (int n: count.keySet()) {
      heap.add(n);
      if (heap.size() > k)
        heap.poll();
    }

    // build output list
    List<Integer> top_k = new LinkedList();
    while (!heap.isEmpty())
      top_k.add(heap.poll());
    Collections.reverse(top_k);
    return top_k;
  }
}
```



