
//REMOVE DUPLICATES FROM SORTED ARRAY
/*class Solution {
public:int removeDuplicates(vector<int>& nums) {
       int  i=0;
        for(int j=1;j<nums.size();j++)
        {
           if(nums[j]!=nums[i])
           {
            nums[i+1]=nums[j];
            i++;
           }
        }
        return i+1;

    }

};
//ROTATE ARRAY K TIMES TOWARDS RIGHT
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
     k = k % n;

    reverse(nums.begin(), nums.begin() + n - k);
    reverse(nums.begin() + n - k, nums.end());
    reverse(nums.begin(), nums.end());
    }
};
//missing number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int xor1=0;
     int N=nums.size();
      int xor2=N;
      for(int i=0;i<N;i++)
      {
        xor1=xor1^(i);
        xor2=xor2^nums[i];
      }
      return xor1^xor2;
    }
};
//SINGLE NUMBER
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++)
        {
            xorr=xorr^nums[i];
        }
        return xorr;

    }
};

//TWO SUM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int c;
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = mp.find(complement);

            if (it != mp.end()) {
                return {it->second, i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};


*/

