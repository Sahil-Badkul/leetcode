class Solution {
public:
bool check(string res, int l, int r){
while(r >= l){
if(res[l++] != res[r--]){
return false;
}
}
return true;
}
bool validPalindrome(string s) {
int n = s.size();
int l = 0, r = n - 1;
while(r >= l){
if(s[l] != s[r]){
return check(s,l,r-1) or check(s,l+1,r);
}
l++;
r--;
}
return true;
}
};