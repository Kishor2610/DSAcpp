//find duplicate in array gfg

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ind;
        set<int> s;
        sort(arr,arr+n);
       // int a[n]={};

        for(int i = 0; i <n-1; i++)
        {
			
            if(arr[i] == arr[i+1])
            {
                s.insert(arr[i]);
                
            }
        }
        if(s.size()==0){
                    return {-1};
            }
        
        for(auto i:s){
            ind.push_back(i);
        }
        // return duplicate value
        return ind;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
