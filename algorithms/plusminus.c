//https://www.hackerrank.com/challenges/plus-minus/problem
void plusMinus(int arr_count, int* arr) {
    int poscount = 0;
    int negcount = 0;
    int zerocount = 0;
    
    for(int i=0; i<arr_count; i++){
        if (arr[i]>0){
            poscount++;
        }
        else if (arr[i]<0){
            negcount++;
        }
        else{
            zerocount++;
        }
    }
    printf("%.6f\n%.6f\n%.6f",(float)poscount/arr_count,(float)negcount/arr_count,(float)zerocount/arr_count);
}