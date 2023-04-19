#include<bits/stdc++.h>
//#include<vector>
//#include<iostream>
using namespace std;
int kthlarge(vector<int> nums,int k){
	sort(nums.begin(),nums.end());
    cout<<nums[nums.size()-k];
}
int main()
{
	int k;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	cin>>k;
	kthlarge(nums,k);
    
	return 0;
}
