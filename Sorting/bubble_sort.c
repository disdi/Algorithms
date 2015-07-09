#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

int* bubble_sort(int* vals, int n, bool SortAscending) 
{
	int pass,index;
	for(pass=1; pass<=n; pass++) 
	{
		for(index=0; index<(n-1); index++) 
		{	
			bool swap=false;
			if(SortAscending) 
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
			}
		}
	}
	return vals;
}