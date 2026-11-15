class Solution {
public:
    using ll = long long;
    ll m = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        int even_count = 1;
        int odd_count = 0;
        int sum = 0;
        ll result = 0;
        for (auto& it : arr) {
            sum += it;
            if (sum % 2 == 0) {
                result = (result + odd_count) % m;
                even_count++;
            }
            else {
                result = (result + even_count) % m;
                odd_count++;
            }
        }
        return result;
    }
};