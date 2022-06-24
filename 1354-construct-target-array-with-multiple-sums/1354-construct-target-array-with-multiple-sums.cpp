class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq(target.begin(), target.end());
        auto total_sum = accumulate(begin(target), end(target), (long long)0);
        
        while(total_sum > 1 && pq.top() > total_sum / 2){
            auto curr = pq.top();
            pq.pop();
            total_sum -= curr;
            if(total_sum <= 1)
                return total_sum;
            pq.push(curr % total_sum);
            total_sum += curr % total_sum;
        }
        return total_sum == target.size();
    }
};

/*
1   1   =   2
1   2   =   3
3   2   =   5
3   5   =   8
8   5   =   13
target arr...

target, total_sum, curr_sum
*/