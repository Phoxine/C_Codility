//發現C本身有quicksort的函式 稍微試了一下
//最近都在寫python,code C一直忘記加分號跟變數型宣告
//100% answer
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b  ){
    return *(int*)a - *(int*)b;
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int temp=1;
    //qsort(base , size_t nmemb , size_t size, cmpfunc);
    qsort(A,N,sizeof(int),cmpfunc);    
    //printf("%d %d %d",sizeof(int),sizeof(A),N);
    for(int i=0 ; i< N ; i++){
        if(A[i]==temp){
            temp++;
        }else{
            return 0;
        }
    }
    return 1;    
}