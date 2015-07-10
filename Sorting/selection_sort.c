#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

int* selection_sort(int *vals, int n, bool isAscending) {
	int sortedTill=0; // Index upto which the elements are sorted
	int index=0;      // To traverse and compare elements with minimum value

	for(sortedTill=0; sortedTill < n; sortedTill++) 
	{
		// Assume vals[sortedTill] is the minimum element
		// Look for the smallest element in the list

		for(index=sortedTill+1; index<n; index++) 
		{
			bool swap=false;
			//DEBUG:: printf("sortedFrom: %d , minVal: %d, vals[%d]: %d \n", sortedFrom, vals[sortedFrom],index,vals[index]);
			if(isAscending) 
			{
				if(vals[sortedTill]>vals[index])
					swap=true;
			}
			else 
			{
				if(vals[sortedTill]<vals[index])
					swap=true;
			}
			if(swap) 
			{
				int temp = vals[sortedTill];
				vals[sortedTill] = vals[index];
				vals[index] = temp;
			}
		}		
	}

	return vals;
}