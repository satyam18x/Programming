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

//optimal solution
class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Step 1: Mark rows and columns
        for(int i = 0; i < n; i++) {

            if(matrix[i][0] == 0) {
                col0 = 0;
            }

            for(int j = 1; j < m; j++) {

                if(matrix[i][j] == 0) {

                    // Mark row
                    matrix[i][0] = 0;

                    // Mark column
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 2: Traverse and set zeroes
        for(int i = 1; i < n; i++) {

            for(int j = 1; j < m; j++) {

                if(matrix[i][0] == 0 || matrix[0][j] == 0) {

                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Handle first row
        if(matrix[0][0] == 0) {

            for(int j = 0; j < m; j++) {

                matrix[0][j] = 0;
            }
        }

        // Step 4: Handle first column
        if(col0 == 0) {

            for(int i = 0; i < n; i++) {

                matrix[i][0] = 0;
            }
        }
    }
};