class MinStack {
    Stack<Pair<Integer, Integer>> st = new Stack<>();
    int mini;
    public MinStack() {
        
    }
    
    public void push(int val) {
        int x; 
        if(st.isEmpty()){
            x = val;
        }else{
            x = Math.min(val, st.peek().getValue());
        }
        Pair p = new Pair(val, x);
        st.add(p);
    }
    
    public void pop() {
        st.pop();
    }
    
    public int top() {
        return st.peek().getKey();
    }
    
    public int getMin() {
        return st.peek().getValue();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */