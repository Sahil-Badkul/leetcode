typedef long long ll;
class Solution {
public:
    ll tripAtGivenTime(vector<int> &time, ll givenTime){
        ll trips = 0;
        for(auto &t : time){
            trips += (givenTime/t);
        }
        return trips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll low = 1, high = 1e14;
        while(low < high){
            ll mid = low + (high-low)/2;
            if(tripAtGivenTime(time, mid) >= totalTrips){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};