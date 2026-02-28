    #include <bits/stdc++.h>
    using namespace std;
    void printAllSubarrays_util(vector<int>&nums,int start,int end){
        if(end==nums.size()) return;
        for(int i=start;i<=end;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        printAllSubarrays_util(nums,start,end+1);
    }
    void subarray(vector<int>&nums){
        for(int start=0;start<nums.size();start++){
            int end=start;
        printAllSubarrays_util(nums,start,end);
        }
    }
    int main() {

        vector<int> nums{1,2,3,4,5};
        subarray(nums);

        return 0;
    }