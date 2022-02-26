class Solution {
public:
    int removeElement(vector<int>& A, int B) {
        int i = 0;
    int n = A.size();
    for(int j = 0; j < n; j++){
        if(A[j] != B){
            A[i] = A[j];
            i++;
        }
    }
    return i;
    }
};