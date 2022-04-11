class MinStack {
public:
    stack<int> s1, s2;
    MinStack() {}
    
    void push(int val) {
        if(s1.empty()){
            s2.push(val);
        }else if(val <= s2.top()){
            s2.push(val);
        }
        s1.push(val);
    }
    
    void pop() {
        if(s1.empty()) return;
        if(s1.top() == s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
       if(s1.empty()) return -1;
        return s1.top();
    }
    
    int getMin() {
       if(s1.empty()) return -1;
        return s2.top();
    }
};

/*
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
/*
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */