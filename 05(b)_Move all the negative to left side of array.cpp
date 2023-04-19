//MOVE ALL negative numbers TO left OF ARRAY
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int movezeros(vector<int> arr){
	int i=0;
	for(int j=0;j<arr.size();j++){
		if(arr[j]<0){//if we want negative number to right side take arr[j]>=0
			swap(arr[j],arr[i]);
			i++;
		}
	}
	cout<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int m;
	vector<int> arr;
	arr.push_back(-12);
	arr.push_back(11);
	arr.push_back(-13);
	arr.push_back(0);
	arr.push_back(6);
	arr.push_back(-7);

	
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	movezeros(arr);
    cout<<endl;
	return 0;
}
