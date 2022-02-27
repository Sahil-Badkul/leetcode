class Solution {
public:
    bool isLeap(int year){
        if(year % 4 == 0){
            if(year % 100 == 0 and year % 400 != 0){
                return false;
            }else{
                return true;
            }
        }
        return false;
    }
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int> monthOdd = {3,0,3,2,3,2,3,3,2,3,2,3};
        // year = 1998
        int mod400 = (year-1)%400;  // 338
        int mod100 = (mod400%100);  // 38
        int by100 = ((mod400/100) * 5) % 7; // calculate extra for cent = 1
        int by4 = mod100 + mod100/4;    // calculate extra for year => 48
        int totalExtra = (by100 + by4)%7;  // total extra
        int preMonth = 0;
        if(isLeap(year)){
            monthOdd[1] = 1;
        }
        for(int i = 0; i < month-1; i++){
            preMonth += monthOdd[i];
        }
        int extra = (totalExtra + preMonth + day) % 7;
        return days[extra];
        
    }
};