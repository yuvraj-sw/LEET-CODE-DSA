class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> v(r + 1, 1);
        long long c = 1;
        for (int i = 1; i < r; i++) {
            c = c * (r - i + 1) / i;
            v[i] = c;
        }
        return v;
    }
};