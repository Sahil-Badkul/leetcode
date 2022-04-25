}
}
int count = 0;
for(int i = 0; i < dsuf.size();i++){
if(dsuf[i] == -1){
count++;
}
}
return count;
}
​
//DRIVER CODE
​
int main(){
ios_base::sync_with_stdio(false); //(fast I/O)
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
vector<vector<int>> isConnected(n, vector<int> (n));
vector<int> dsuf(n);
for(int i = 0; i < n; i++)
for(int j = 0; j < n ; j++)
cin >> isConnected[i][j];
cout << findCircleNum(isConnected) << "\n";
return 0;
}
```