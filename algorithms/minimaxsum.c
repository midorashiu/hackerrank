//https://www.hackerrank.com/challenges/mini-max-sum/problem
void miniMaxSum(int arr_count, int* arr) {
    long minsum;
    long maxsum;
    long min = arr[0];
    long max = arr[0];
    long total = 0;
    
    for(int i=0; i<arr_count;i++){
        total += arr[i]; 
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    minsum = total - max;
    maxsum = total - min;
    
    printf("%ld %ld",minsum,maxsum);

}
