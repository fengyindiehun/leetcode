ass Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) {
            return result;
        }
        int row = matrix.size();
        int column = matrix[0].size();
        int count = row * column;
        int size = 0;
        int end_row = (row - 1) / 2;
        for (int i = 0; i <= end_row; ++i) {
            for (int a = i; a <= column-i-1; ++a) {
                result.push_back(matrix[i][a]);
                ++size;
            }
            if (size == count) break;
            for (int b = i+1; b <= row-i-1; ++b) {
                result.push_back(matrix[b][column-i-1]);
                ++size;
            }
            if (size == count) break;
            for (int c = column-i-2; c >= i; --c) {
                result.push_back(matrix[row-i-1][c]);
                ++size;
            }
            if (size == count) break;
            for (int d = row-i-2; d > i; --d) {
                result.push_back(matrix[d][i]);
                ++size;
            }
            if (size == count) break;
        }
        return result;
    }
};
