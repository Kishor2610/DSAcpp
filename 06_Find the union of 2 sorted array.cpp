#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0;
        set<int>s;
        while(i<n){
            s.insert(a[i]);
            i++;
        }
        i=0;
        while(i<m){
            s.insert(b[i]);
            i++;
        }
        return s.size();
    }
    /*
    int intersection(int a[],int n,int b[],int m) {
    //vector<int> s;
    
    int i=0,j=0;
    while(i<n&&j<m){
	if(a[i]==b[j]){
    s.insert(a[i]);
    i++;
    j++;
}
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        }
        return s;
    }*/
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    cout<<endl;
	   // cout<<ob.intersection(a,n,b,m)<<endl;
	}
	
	return 0;
}
