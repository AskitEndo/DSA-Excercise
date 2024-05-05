// Removes Duplicates from an Array
// CodeNinja Link: https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	vector<int> v = arr;
    sort(v.begin(), v.end());
	int cnt=n;
	for(int i = 0;i<n-1;i++){
		if(v[i]==v[i+1]&&cnt!=0){
			cnt--;
		}
	}return cnt;
}

int main()
{
    vector<int> num ={12,3,4,4,4,4,4,4,5,6,7,1,2};
    cout<<removeDuplicates(num,13);
    return 0;
}