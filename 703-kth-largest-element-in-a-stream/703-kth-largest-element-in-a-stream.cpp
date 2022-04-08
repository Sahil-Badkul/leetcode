class KthLargest {
public:
    priority_queue<int, vector<int>, greater<>> pq;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(auto &x : nums){
            pq.push(x);
            if(pq.size() > size) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > size) pq.pop();
        return pq.top();
    }
};
/*
class KthLargest {
private:
    multiset<int, greater<int>> ms;
    int k = 0;
    int kthval(){
       int x = k, val;
        for(auto &it : ms){
            if(x == 0) break;
            val = it;
            x--;
        }
        return val;
    }
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto &x : nums){
            ms.insert(x);
        }
    }
    
    int add(int val) {
        ms.insert(val);
        return kthval();
    }
};
*/
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */