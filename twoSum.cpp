class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int max=0,a;
         unordered_map<int,int> m;
        
        vector<int> v,q,w;
        for(int i=0; i<nums.size(); i++){
             m[nums[i]]++;
            if(nums[i]<=target/2){
                v.push_back(nums[i]);
            }
            if(m[nums[i]]>1 && target%2==0 && nums[i]==target/2){
                a=nums[i];
                
                }
        }
        if(m[a]>1 && target%2==0 && a==target/2){
                for(int i=0; i<nums.size(); i++){
                    if(a==nums[i] && w.size()<3){
                        w.push_back(i);
                    }
                }
                return w;
                }
        for(int i=0; i<v.size(); i++){
            if(m[target-v[i]]==1 && (target-v[i])!=v[i]){
                q.push_back(v[i]);
                q.push_back(target-v[i]);
               
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(q[0]==nums[i]) w.push_back(i);
            if(q[1]==nums[i]) w.push_back(i);
        }
         return w;
    }
};