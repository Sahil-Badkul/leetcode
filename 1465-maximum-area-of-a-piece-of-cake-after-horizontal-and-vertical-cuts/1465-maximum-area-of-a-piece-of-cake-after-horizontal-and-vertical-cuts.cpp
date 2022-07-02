typedef long long ll;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        int mod = 1e9+7;
        hc.push_back(0);
        hc.push_back(h);
        vc.push_back(0);
        vc.push_back(w);
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        ll maxHori = hc[0];
        ll maxVer = vc[0];
        for(int i = 1; i < hc.size(); i++) {
            maxHori = maxHori > hc[i]-hc[i-1] ? maxHori : hc[i]-hc[i-1];
        }
        for(int i = 1; i < vc.size(); i++) {
            maxVer = maxVer > vc[i]-vc[i-1] ? maxVer : vc[i]-vc[i-1];
        }
        return ((maxHori%mod) * (maxVer%mod))%mod;
    }
};