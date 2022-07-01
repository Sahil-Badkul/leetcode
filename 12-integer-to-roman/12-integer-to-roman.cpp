class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> sym = {{1, "I"}, {4, "IV"}, {5, "V"},{9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"},{90, "XC"}, {100,"C"},{400, "CD"}, {500, "D"},{900, "CM"} ,{1000, "M"}};
        vector<int> val = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int n = val.size();
        string ans = "";
        int i = n-1;
        while(num > 0){
            if(num >= val[i]){
                num -= val[i];
                ans += sym[val[i]];
            }else{
                i--;
            }
        }
        return ans;
    }
};