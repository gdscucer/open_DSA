class Solution {
public:
    int Occurences(vector<int>& nums, int n, int key, string find)
    {
        int s = 0, e = n-1, ans = -1;
        int mid = s+(e-s)/2;
        
        while(s<=e)
        {
            if(nums[mid] == key)
            {
                ans = mid;
                (find == "first")? e = mid - 1 : s = mid + 1;
            }
            
            else if(nums[mid] > key)
            {
                e = mid-1;
            }
            else if(nums[mid] < key)
            {
                s = mid+1;
            }
            
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        pair<int,int> p;
        p.first = Occurences(nums,n,target,"first");
        p.second = Occurences(nums,n,target,"last");
        vector<int> ans;
        ans.push_back(p.first);
        ans.push_back(p.second);
        
        return ans;
        
    }
};
