class Solution {
public:
    int minPartitions(string n) {
        //we have to just return maximum elemetn
        return *max_element(n.begin(), n.end()) - '0';
    }
};