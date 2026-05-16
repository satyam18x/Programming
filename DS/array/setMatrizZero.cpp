//Brute force
class Solution {
public:

    void markRow(vector<vector<int>>& matrix, int n, int m, int i) {

        for(int j = 0; j < m; j++) {

            if(matrix[i][j] != 0)
                matrix[i][j] = -1;
        }
    }

    void markCol(vector<vector<int>>& matrix, int n, int m, int j) {

        for(int i = 0; i < n; i++) {

            if(matrix[i][j] != 0)
                matrix[i][j] = -1;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // Mark rows and columns
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == 0) {

                    markRow(matrix, n, m, i);
                    markCol(matrix, n, m, j);
                }
            }
        }

        // Convert -1 into 0
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == -1) {

                    matrix[i][j] = 0;
                }
            }
        }
    }
};

//Better solution
class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // Find zeroes
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == 0) {

                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Set zeroes
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(row[i] == 1 || col[j] == 1) {

                    matrix[i][j] = 0;
                }
            }
        }
    }
};