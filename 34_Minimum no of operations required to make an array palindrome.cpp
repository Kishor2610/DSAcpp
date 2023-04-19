//Minimum no of operations required to make an array palindrome.

#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int N,num;
       for(int i=0; i<n; i++){
           N=a[i];
           num=0;
           while(N!=0){
           num=(num*10)+N%10;
           N=N/10;
            }
       if(a[i]!=num)
           return 0;
       }
   return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
