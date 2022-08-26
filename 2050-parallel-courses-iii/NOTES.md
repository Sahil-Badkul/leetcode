while(!q.empty())
{
int ss = q.size();
for(int i=0;i<ss;i++)
{
int parentNode = q.front();q.pop();
// cout<<node<<" "<<adj[node].size();
for(long long int child : adj[parentNode])
{
indegree[child]--;
maxTime[child] = max(maxTime[child],maxTime[parentNode]+time[child-1]);
if(!indegree[child])
{
q.push(child);
}
}
}
}
long long int ans = -1;
for(long long int value : maxTime)
ans = max(ans , value);
return ans;
}
};
```