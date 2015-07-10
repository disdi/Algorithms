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