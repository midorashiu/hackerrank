//https://www.hackerrank.com/challenges/diagonal-difference/problem
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    int leftrightsum = 0;
    int rightleftsum = 0;
    
    for (int n = 0; n<arr_rows; n++){
        leftrightsum += arr[n][n];
        rightleftsum += arr[n][arr_columns-1-n];
    }
    
    return abs(leftrightsum-rightleftsum);
}