class FreqStack {
public:
    int maxFreq;        // For reference to maximum frequent element
    unordered_map<int,int> mp;      // For storing the freq of an element
    unordered_map<int, stack<int>> mpSt;    // For storing occurance of all same freq element like 3,4,6,7 all have same freq.
    FreqStack() {
        maxFreq = 0;
    }
    void push(int x) {
        mp[x]++;        // updating element freq.
        if(maxFreq < mp[x]) maxFreq = mp[x];    // updating max freq.
        mpSt[mp[x]].push(x);    // updating stack with same freq.
    }
    int pop() {
        int currTop = mpSt[maxFreq].top();  // picking most recent element with max freq.
        mpSt[maxFreq].pop();    // deleting that.
        mp[currTop]--; 
        if(mpSt[maxFreq].empty()){      // If stack is empty then remove key related to that stack.
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