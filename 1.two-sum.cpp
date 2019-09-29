/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
/*        int size = nums.size(); 
        //int result[size]; 
        vector<int> result;  
        for(int i=0; i<size; i++){
            for(int j=1; j<=size-1; j++) {
                if(target==nums[i]+nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
            
        }
        return result; */

        //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < nums.size(); i++) {
		int numberToFind = target - nums[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind]);
			result.push_back(i);			
			return result;
		}

            //number was not found. Put it in the map.
		hash[nums[i]] = i;
	}
	return result;
    }

};

