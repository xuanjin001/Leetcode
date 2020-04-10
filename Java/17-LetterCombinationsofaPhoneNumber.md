# 17. Letter Combinations of a Phone Number

https://leetcode.com/problems/letter-combinations-of-a-phone-number/

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![17_Telephone-keypad2](img/17_Telephone-keypad2.png)

#### Example:
```
Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
```

#### Note:

Although the above answer is in lexicographical order, your answer could be in any order you want.


<br>

### My Thought: 
1. save data into a map `<int, list<Sting> >`
2. pass this into a backtracking problem 

### Code: 
```java
class Solution {
    public List<String> letterCombinations(String digits) {
        
        Map<Integer, List<String> > map = new Map<Integer, List<String> >(); 
        List<String> letterList = new List<String>(); 
        
        letterList.clear(); 

        letterList.add(a); 
        letterList.add(b); 
        letterList.add(c); 
        map.put(2, letterList); 
        letterList.clear(); 

        // 2
        letterList.add(a); 
        letterList.add(b); 
        letterList.add(c); 
        map.put(2, letterList); 
        letterList.clear(); 

        // 3
        letterList.add(d); 
        letterList.add(e); 
        letterList.add(f); 
        map.put(3, letterList); 
        letterList.clear(); 

        // 4
        letterList.add(g); 
        letterList.add(h); 
        letterList.add(i); 
        map.put(4, letterList); 
        letterList.clear(); 

        // 5
        letterList.add(j); 
        letterList.add(k); 
        letterList.add(l); 
        map.put(5, letterList); 
        letterList.clear(); 

        // 6
        letterList.add(m); 
        letterList.add(n); 
        letterList.add(o); 
        map.put(6, letterList); 
        letterList.clear(); 

        // 7
        letterList.add(p); 
        letterList.add(q); 
        letterList.add(r);
        letterList.add(s); 
        map.put(7, letterList); 
        letterList.clear(); 

        // 8
        letterList.add(t); 
        letterList.add(u); 
        letterList.add(v); 
        map.put(8, letterList); 
        letterList.clear(); 

        // 9
        letterList.add(w); 
        letterList.add(x); 
        letterList.add(y);
        letterList.add(z); 
        map.put(9, letterList); 
        letterList.clear(); 

        for(char c:digits) {
            Integer.parseInt(c); 
        }
        letterList = map.get()

    }

    private void backtracking() {
        // base case

        // decison point 
    }
}

```    


## Solution
```java
class Solution {
  Map<String, String> phone = new HashMap<String, String>() {{
    put("2", "abc");
    put("3", "def");
    put("4", "ghi");
    put("5", "jkl");
    put("6", "mno");
    put("7", "pqrs");
    put("8", "tuv");
    put("9", "wxyz");
  }};

  List<String> output = new ArrayList<String>();

  public void backtrack(String combination, String next_digits) {
    // if there is no more digits to check
    if (next_digits.length() == 0) {
      // the combination is done
      output.add(combination);
    }
    // if there are still digits to check
    else {
      // iterate over all letters which map the next available digit
      String digit = next_digits.substring(0, 1);
      String letters = phone.get(digit);
      for (int i = 0; i < letters.length(); i++) {
        String letter = phone.get(digit).substring(i, i + 1);
        // append the current letter to the combination and proceed to the next digits
        backtrack(combination + letter, next_digits.substring(1));
      }
    }
  }

  public List<String> letterCombinations(String digits) {
    if (digits.length() != 0)
      backtrack("", digits);
    return output;
  }
}
```

https://www.youtube.com/watch?v=imD5XeNaJXA

```java
class Solution {
    public List<String> letterCombinations(String digits) {
        LinkedList<String> output = new LinkedList<String>(); //a queue

        if(digits.length() == 0) return output; //there is nothing

        output.add(""); 

        String[] char_map = new String[] {"0", "1","abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 

        for(int i=0; i<digits.length(); i++) {
            int index = Character.getNumericValue(digits.charAt(i)); 

            while(output.peek().length() == i) {
                String permutation = output.remove(); 

                for(char c:char_map[index].toCharArray()) {
                    output.add(permutation + c); 
                }
            }
        }
        
        return output; 
    }
}
```

Explanation: 

```java
class Solution {
    public List<String> letterCombinations(String digits) {

        LinkedList<String> ans = new LinkedList<String>(); 
        
        if(digits.isEmpty()) return ans; 

        String[] mapping = new String[] {"0", "1","abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
        ans.add(""); 

        for(int i=0; i<digits.length(); i++) {
            int x = Character.getNumericValue(digits.charAt(i)); 

            System.out.print("i -> ");
            System.out.println(i); 

            while(ans.peek().length()==i) {
                String t = ans.remove(); 
                System.out.print("t->"); 
                System.out.println(t); 

                for(char s : mapping[x].toCharArray()) {
                    System.out.print("t+s -> "); 
                    System.out.println(t+s); 
                    ans.add(t+s); 
                }
            } 

        }

        return ans; 
    }
}

#### Logic: 

#### Notes: 


