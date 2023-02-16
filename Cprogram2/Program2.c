/*
 * Program2.c
 *
 *  Created on: Feb 14, 2023
 *      Author: z399a457
 */
#include <stdio.h>

int getscores(int points)
{
    for(int i=0; i<points; i++)
    {
        for (int j=0; j<points; j++) 
        {
            for (int k=0; k<points;k++) 
            {
                for (int l=0; l<points; l++) 
                {
                    for (int m=0; m<points; m++) {
                        if(i*8+j*7+k*6+l*3+m*2==points)
                        {
                            printf("%d TD+2pt, %d TD+FG, %d TD, %d FG, %d Safety\n", i,j,k,l,m);
                        }
                    }
                
                }
            
            }
        
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int num;
    while(num > 1)
    {
        printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
        scanf("%d", &num);
        printf("Possible Combinations of scoring plays:\n");
        getscores(num);
    }
    return 0;
}