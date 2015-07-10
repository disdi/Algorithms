/*
 * Copyright (C) 2015 Aditya Patange.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

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