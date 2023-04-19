#include <bits/stdc++.h>
#include<vector>
using namespace std;
class solution{
	public:
	int rotate(vector<int> arr,int k){
		vector<int> temp(arr.size());
		for(int i=0;i<arr.size();i++){
		temp[(i+k)%arr.size()]=arr[i];
	}
	arr=temp;
		for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
		
	}
};
int main(){
	vector<int> arr;
	int k;
	solution s;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cin>>k;
	s.rotate(arr,k);
	return 0;
}
