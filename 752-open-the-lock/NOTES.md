if(s == target)
return counts;
​
for(int i=0; i<4; i++)
{
string temp1,temp2 ;
temp1=s.substr(0,i) + to_string((s[i] - '0' + 1)%10) + s.substr(i+1);
temp2=s.substr(0,i) + to_string((s[i] - '0' - 1 + 10)%10) + s.substr(i+1);
ss
if(dead.find(temp1) == dead.end() && visited.find(temp1) == visited.end())
{
q.push({temp1, counts+1});
visited.insert(temp1);
}
​
if(dead.find(temp2) == dead.end() && visited.find(temp2) == visited.end())
{
q.push({temp2, counts+1});
visited.insert(temp2);
}
​
}
}
​
return -1;
}
};
```