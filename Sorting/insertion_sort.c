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
 #include "sort.h"

 int* insertion_sort(int* vals, int n, bool isAscending) 
 {
 	int i=0; // Holds the index upto which list is sorted
 	int j=0; // To perform insertion of element into sorted list

 	for(i=0; i<n-1; i++) 
 	{
 		// Insert next element into sorted list
 		for(j=i; j>=0; j--) 
 		{
 			bool swap=false;
 			if(isAscending) 
 			{
 				if(vals[j]>vals[j+1])
 					swap=true;
 			}
 			else
 			{
 				if(vals[j]<vals[j+1])
 					swap=true;
 			}
 			if(swap)
 			{
 				int temp = vals[j];
 				vals[j] = vals[j+1];
 				vals[j+1] = temp;

 			}
 		}

 	}
 	return vals;
 }