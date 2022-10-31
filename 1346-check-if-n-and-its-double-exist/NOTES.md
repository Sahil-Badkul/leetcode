bool checkIfExist(vector<int>& a) {
sort(a.begin(), a.end());
int n = a.size();
​
for(int i = 0; i < n; i++) {
if(a[i] >= 0) {
if((i != n-1) && (binary_search(a.begin()+i+1, a.end(), 2*a[i]))) return true;
}else{
if( (i>0) && (binary_search(a.begin(), a.begin()+i, 2*a[i])) ) return true;
}
}
return false;
}