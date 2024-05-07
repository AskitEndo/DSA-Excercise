// Returns The number which appears only single time.
// LeetCode Link: https://leetcode.com/problems/single-number/
// Codeninja Link: https://www.naukri.com/code360/problems/find-the-single-element_6680465

#include<bits/Stdc++.h>
using namespace std;


// CodeNinja
int getSingleElement(vector<int> &arr){
	sort(arr.begin(),arr.end());
	for(int i =0;i<arr.size();i+=2){
		if(arr[i]!=arr[i+1]) return arr[i];
	}
	return 0;
}


// LeetCode
int singleNumber(vector<int>& nums) {
    unordered_map<int,int> data;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        data[nums[i]]++;
    }
    for (auto it:data){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,1,2,2,3,4,4,5,5};
    cout<<getSingleElement(v);
    return 0;
}