/*
 * Program1.c
 *
 *  Created on: Feb 8, 2023
 *      Author: z399a457
 */
#include <stdio.h>

int monthreport(double nums[])
{
	char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December"};
	printf("Monthly sales report for 2022:");
	printf("\nMonth         Sales");
	for(int i=0; i<12; i++)
	{
		printf("\n%s    $%f", months[i], nums[i]);
	}
	return 0;
}

int minmaxavr(double nums[])
{
	printf("\n\nSales summary:");
	double min, max, average, temp;
	int minmonth, maxmonth;
	min=max=temp=nums[0];
	minmonth=maxmonth= 0;
	char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December"};

	    for(int i=1; i<12; i++)
	    {
	         if(min>nums[i]){
			  min=nums[i];
			  minmonth = i;
	         }
			 if(max<nums[i]){
			   max=nums[i];
			   maxmonth = i;
			 }
			 temp = temp + nums[i];
	    }
	    average = temp / 12.0;
	    printf("\nMinimum sales: %f (%s)",min, months[minmonth]);
	    printf("\nMaximum sales: %f (%s)",max, months[maxmonth]);
	    printf("\nAverage sales: %f\n",average);

	 return 0;
}

int averages(double nums[]){
    char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December"};
	double ave;
	printf("\nSix-Month Moving Average Report:");
    for(int i=0;i<=6;i++)
	{
		ave = 0;
		for(int j=i;j<i+6;j++)
		{
			ave = ave + nums[j];
		}
        ave = ave / 6;
		printf("\n%s - %s $%f", months[i], months[i+5], ave); 
	}
	return 0;
}

int sales(double nums[]){
	char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December"};
	printf("\n\nSales Report (Highest to Lowest):");
	printf("\nMonth         Sales");
    double temp;
    char* temp2;
    for(int i=0;i<12;i++)
    {
        for(int j=i+1; j<12; j++)
        {
            if(nums[i] < nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                temp2 = months[i];
                months[i] = months[j];
                months[j] = temp2;
            }
        }
    }printf("\nMonth         Sales");
    for(int i=0; i<12; i++)
    {
        printf("\n%s   $%f", months[i], nums[i]);
    }
	return 0;
}

int main(int argc, char *argv[]) {
	double nums[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
	monthreport(nums);
	minmaxavr(nums);
    averages(nums);
    sales(nums);

	return 0;
}

