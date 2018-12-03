//
//  main.c
//  number_pattern
//
//  Created by Narayan Poudel on 11/30/18.
//  Copyright © 2018 Nepal. All rights reserved.
//

#include <stdio.h>

int main(){
    int i, j, number;
    
    printf("Enter the range for the number pyramid\n");
    scanf("%d", &number);
    
    for ( i = 0; i <= number; i ++){// loop use for printing value of j
        for ( j = 1; j<= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    for ( i = 0; i <= number; i ++){ //loop use fot printing values of i
        for ( j = 1; j<= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    int a=1;
    for ( i = 0; i <= number; i ++){ //loop use for priting numbers
        for ( j = 1; j<= i; j++){
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
