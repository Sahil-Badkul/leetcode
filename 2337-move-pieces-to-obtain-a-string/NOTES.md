```
bool canChange(string start, string target) {
unordered_map<char, int> chars1, chars2;
for(char& ch: start)
chars1[ch]++;
for(char& ch: target)
chars2[ch]++;
​
if(chars1 != chars2) return false;
​
int n = start.size();
​
//move from right to left for 'R' changes
for(int i=n-1; i >= 0; i--){
if(start[i] == target[i]) continue;
​
char req = target[i];
if(req == 'R'){
int j = i;
while(j >= 0 && start[j] == '_'){
start[j] = target[j];
j--;
}
if(j < 0 || start[j] == 'L') return false;
start[j] = '_';
i = j + 1;
}
}
​
//move from left to right for 'L' changes
for(int i=0; i < n; i++){
if(start[i] == target[i]) continue;
​
char req = target[i];
if(req == 'L'){
int j = i;
while(j < n && start[j] == '_'){
start[j] = target[j];
j++;
}
if(j == n || start[j] == 'R') return false;
start[j] = '_';
i = j - 1;
}
}
return true;
}
```