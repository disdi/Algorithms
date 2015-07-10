#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

int* bubble_sort(int* vals, int n, bool isAscending) 
{
	int pass,index;
	pass=0; // Number of passes
	index=0; // Index of element examined during pass
	bool isSorted=false; // true if list is sorted
	int swaps_per_pass=0; // Number of swaps occuring in a pass
	while(!isSorted)	
	{
		swaps_per_pass=0; //reset number of swaps per pass
		for(index=0; index<(n-1); index++) 
		{	
			bool swap=false;
			if(isAscending) 
			{
				if(vals[index]>vals[index+1]) 
					swap=true;
			}
			else 
			{
				if(vals[index]<vals[index+1]) 
					swap=true;
			}
			if(swap) 
			{
					int temp = vals[index];
					vals[index] = vals[index+1];
					vals[index+1] = temp;
					swaps_per_pass++;
			}
			// We can say that the list is sorted if, 
			// no passes occur after examining every element. 
			if(swaps_per_pass == 0 && index == 	n-2) 
					isSorted=true;
			// DEBUG: printf("pass: %d , isSorted: %d , swaps_per_pass: %d , index: %d \n", pass,isSorted,swaps_per_pass,index);
		}
		++pass;
	}
	
	return vals;
}