//https://www.hackerrank.com/challenges/2d-array/problem
int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int *sums = malloc(16*sizeof(int));
    int count =0;
    for(int i=0;i<arr_rows-2;i++){
        for(int j=0; j<arr_columns-2;j++){
            for (int n=0;n<3;n++){
                sums[count] += arr[i][j+n];
                sums[count] += arr[i+2][j+n];
            }
            sums[count] += arr[i+1][j+1];
            count ++;
        }
        
    }
    //find max
    int max = sums[0];
    for (int n=0; n<16; n++){
        if (sums[n]>max){
            max = sums[n];
        }
    }
    return max;
}