// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix [5][5] =  { 
        {1, 2, 4, 8, 16},
        {1, 3, 9, 27, 81},
        {1, 4, 16, 64, 256},
        {1, 5, 25,125,625},
        {1, 6, 36, 216, 1296}
                         };
    
    
    int row, column=0;

    for (row=0; row<5; row++)
     {
        for(column=0; column<5; column++)
            {printf("%d     ", matrix[row][column]);}
            printf("\n");
     }
     
     while(1){
         printf("Introduce un numero entre 0 y 4\n");
         int myInt;
         scanf("%d", &myInt);
         
         if(myInt <=4 && myInt >=0)
        {
            printf("Valor introducido correcto \n");
            printf("Introduce un segundo numero entre 0 y 4, y diferente\n");
            int mySecondInt;
            scanf("%d", &mySecondInt);
            if(mySecondInt <=4 && mySecondInt >=0 && myInt!=mySecondInt)
            {
                printf("Funciona \n");
                
                
                 for (row=0; row<5; row++)
                 {
                    for(column=0; column<5; column++)
                        {
                            if(column==myInt)
                            {
                                printf("%d     ", matrix[row][mySecondInt]);
                            }
                            else if(column==mySecondInt)
                            {
                                 printf("%d     ", matrix[row][myInt]);
                            }
                            else
                            {
                                printf("%d     ", matrix[row][column]);
                            }
                            
                        }
                        printf("\n");
                 }
                
                
            }
            else
            {
                printf("Valor introducido incorrecto, debe ser distinto \n");
            }
        }
        else
        {
            printf("Valor introducido incorrecto\n");
        }
     }
     
     
     
     

    return 0;
}