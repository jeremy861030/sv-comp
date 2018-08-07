#include <stdio.h>

void select_sort(int a[], int n){
    int t, temp;
    
    for(int i = 0; i < n; i++){        
        for(int j = i+1; j < n; j++){
            t = i;
            if(a[t] > a[j])
                t = j;
            if(t != i){
                temp = a[t];
                a[t] = a[i];
                a[i] = temp;
            }                            
        }                   
    }
    // for(int i = 0; i < n; i++)
    //     printf("%d,", a[i]); 
    // printf("\n");     
     
}

// extern void __VERIFIER_error() __attribute__ ((__noreturn__));
// void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
// extern int __VERIFIER_nondet_int(void);


int main(){
    int a[5];
    // for(int i = 0; i < 5; i++){
    //     a[i] = __VERIFIER_nondet_int();
    // }
    // select_sort(a, 5);
    // for(int i = 0; i < 4; i++){
    //     __VERIFIER_assert(a[i] <= a[i+1]);
    // }

    // int a[5];
    printf("input 5 numbers");
    printf("\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    select_sort(a, 5);
    for(int i = 0; i < 5; i++){
        printf("%d", a[i]);
        printf(" ");
    }
    printf("\n");
    return 0;
}