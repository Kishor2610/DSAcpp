//Find Missing And Repeating

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        for(int i = 0; i < n; i++){
            arr[abs(arr[i]) - 1] *= -1;
        }
        int* ans = new int[2];
        int len = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                ans[len++] = i + 1;
            }
        }
        // ans[1] should be missing
        for(int i = 0; i < n; i++){
            if(abs(arr[i]) == ans[1]){
                swap(ans[0], ans[1]);
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
