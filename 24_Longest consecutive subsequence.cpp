//Longest consecutive subsequence
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s{arr, arr+N};
      int res = 1;
      for(auto x : s){
          if(s.find(x-1) == s.end()){ //to check starting point of subsequence
              int curr = 1;
              while(s.find(x+curr) != s.end()){
                  curr++;
              }
              res = max(curr,res);
          }
      }
      return res;

    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
