class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        int size = -1;
        for(auto &op : ops){
            if(op == "C"){
                record.pop_back();
                size--;
            }else if(op == "D"){
                int val = record[size]*2;
                record.push_back(val);
                size++;
            }else if(op == "+"){
                int sum = record[size-1] + record[size];
                record.push_back(sum);
                size++;
            }else{
                record.push_back(stoi(op));
                size++;
            }
        }
        int res = 0;
        for(auto &n : record) res += n;
        return res;
    }
};