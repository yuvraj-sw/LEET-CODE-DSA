import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] a, int t) {
        int n = a.length;
        int[][] p = new int[n][2];
        for (int i = 0; i < n; i++) {
            p[i][0] = a[i];
            p[i][1] = i;
        }
        Arrays.sort(p, (x, y) -> Integer.compare(x[0], y[0]));
        int l = 0, r = n - 1;
        while (l < r) {
            int s = p[l][0] + p[r][0];
            if (s == t) {
                return new int[] { p[l][1], p[r][1] };
            } else if (s < t) {
                l++;
            } else {
                r--;
            }
        }
        return new int[] {};
    }
}
