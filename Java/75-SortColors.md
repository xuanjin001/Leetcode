# 75. Sort Colors

https://leetcode.com/problems/sort-colors/

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

```
Example:
Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```

##### Follow up:

> * A rather straight forward solution is a two-pass algorithm using counting sort.
> * First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
> * Could you come up with a one-pass algorithm using only constant space?

<br/>

### My Thought: 
In the end, this is a sort problem. Just use any sort. 

### Code: 
```java
class Solution {
    public void sortColors(int[] nums) {
        int end = nums.length; 

        mergeSort(nums, end); 

    }

    // helper function recursive
    public static void mergeSort(int[] a, int n) {

    if (n < 2) {
        return;
    }
    int mid = n / 2;
    int[] l = new int[mid];
    int[] r = new int[n - mid];
 
    for (int i = 0; i < mid; i++) {
        l[i] = a[i];
    }
    for (int i = mid; i < n; i++) {
        r[i - mid] = a[i];
    }
    mergeSort(l, mid);
    mergeSort(r, n - mid);
 
    merge(a, l, r, mid, n - mid);
}

    // merge
    public static void merge(int[] a, int[] l, int[] r, int left, int right) {
  
    int i = 0, j = 0, k = 0;
    while (i < left && j < right) {
        if (l[i] <= r[j]) {
            a[k++] = l[i++];
        }
        else {
            a[k++] = r[j++];
        }
    }
    while (i < left) {
        a[k++] = l[i++];
    }
    while (j < right) {
        a[k++] = r[j++];
    }
}

}

```    

### My Notes
* https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/tutorial/


## Solution





