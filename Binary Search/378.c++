/*
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n - 1][n - 1];

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0, col = n - 1;

            // Count how many numbers are ≤ mid
            for (int row = 0; row < n; row++) {
                while (col >= 0 && matrix[row][col] > mid) {
                    col--;  // Move left if number is greater
                }
                count += (col + 1);  // Elements in this row that are ≤ mid
            }

            if (count < k) low = mid + 1;
            else high = mid;
        }

        return low;
    }
};

*/