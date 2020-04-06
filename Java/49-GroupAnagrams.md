# 49. Group Anagrams

https://leetcode.com/problems/group-anagrams/

Given an array of strings, group anagrams together.

#### Example:
```
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```
#### Note:

* All inputs will be in lowercase.
* The order of your output does not matter.


### My Thought: 
* Use hashmap to do this part 

Key would be the string with all letters that's contained, the value will be all the words

When outputing the results, just return values 

### Code: 
```java
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<String> wordKey = new ArrayList<String>();
        List<List<String>> result = new ArrayList<List<String>>(); 
        Map<String, List<String> > map = new HashMap<String, List<String> >(); 

        for(int i=0; i<strs.length; i++) {
            //sort the string
            String tmp = strs[i]; 
            char[] chars = tmp.toCharArray();
            Arrays.sort(chars); 
            String tmp_sorted = new String(chars);  
            
            List<String> value = new ArrayList<String>();
            //value = map.getOrDefault(tmp_sorted); 
            value = map.get(tmp_sorted);
            if(value != null) {
                value.add(tmp); 
                map.put(tmp_sorted, value); 
                wordKey.add(tmp_sorted); 
            }
            else if(value == null) {
                List<String> value_tmp = new ArrayList<String>();
                value_tmp.add(strs[i]); 
                map.put(tmp_sorted, value_tmp); 
                wordKey.add(tmp_sorted); 
                }
            
            
        }

        for(String str:wordKey) {
            result.add(map.get(str)); 
        }

        return result; 

        
    }
}

```

## Solution
```java
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String> > map = new HashMap<String, List<String> >(); 

        //for(int i=0; i<strs.length; i++) {
        for(String str:strs) {
            char[] chars = str.toCharArray();//convert to a char array 
            Arrays.sort(chars);
            
            String key = String.valueOf(chars); //convert back to string

            if(!map.containsKey(key)) {
                map.put(key, new ArrayList()); //create the slot 
            }
            
            map.get(key).add(str); //add in the key matched value 
            
            
        }


        return new ArrayList(map.values()); //return and convert into an ArrayList 

        
    }
}
```



