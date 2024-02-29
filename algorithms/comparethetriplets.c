//https://www.hackerrank.com/challenges/compare-the-triplets/problem

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    
    *result_count = 2;
    int* results;
    results = (int*)malloc(2*sizeof(int));
    results[0] = 0;
    results[1] = 0;
    
    for (int i=0; i< a_count; i++){
        if (a[i] > b[i])
            results[0]++;
        else if (a[i] < b[i])
            results[1]++;  
        
    }
    
    return results;

}
