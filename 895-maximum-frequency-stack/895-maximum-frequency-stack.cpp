class FreqStack {
public:
    int maxFreq;
    unordered_map<int,int> mp;
    unordered_map<int, stack<int>> mpSt;
    FreqStack() {
        maxFreq = 0;
    }
    void push(int x) {
        mp[x]++;
        if(maxFreq < mp[x]) maxFreq = mp[x];
        mpSt[mp[x]].push(x);
    }
    int pop() {
        int currTop = mpSt[maxFreq].top();
        mpSt[maxFreq].pop();
        mp[currTop]--;
        if(mpSt[maxFreq].empty()){
            mpSt.erase(maxFreq);
            maxFreq--;
        }
        return currTop;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */