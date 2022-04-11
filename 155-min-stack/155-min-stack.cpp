class MinStack {
public:
    vector<int> v;
    multiset<int> ms;
    MinStack() {}
    
    void push(int val) {
        v.push_back(val);
        ms.insert(val);
    }
    
    void pop() {
        int val = v.back();
        v.pop_back();
        auto it = ms.find(val);
        ms.erase(it);
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *ms.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */