//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int res = 0;
        int cntNeg = 0;
        int cntZero = 0;
        for(int i = 0; i < N; i++){
            if(arr[i] > 0){
                res += arr[i]-1;
            }else if(arr[i] < 0){
                cntNeg++;
                res += (-1-arr[i]);
            }else{
                cntZero++;
            }
        }
        if(cntNeg % 2 == 0 || cntZero > 0){
            res += cntZero;
        }else{
            res += 2;
        }
        return res;
    }
    // 2 9 8 -2 4 -5 1 
    // 1 8 7 1 3 4 0
    // -2 -4 -2 -6 -4 1
    // 1 3 1 5 3 0  + 2
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends