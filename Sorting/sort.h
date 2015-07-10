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
#include <stdbool.h>

/* 
 * Bubble Sort Algorithm:
 *
 * vals = Array of unsorted integers
 * n = Number of elements to sort
 * ascending = true if elements must be sorted in ascending order
 * 
 * Description: 
 * Time Complexity of Bubble sort Algorithm O(n²) where n is the 
 * number of elements to be sorted.
 * In the bubble sort algorithm each step is a pass.
 * In each pass, adjacent elements are compared and swapped 
 * depending on whether we want the elements to be sorted in 
 * ascending or descending order. 
 *
 * Example: Sorting (1202,1,20,4,900,42) using bubble sort in ascending order.
 * 			PASS 1: 1202>1 so switch 1202 and 1 -> (1,1202,20,4,900,42)
 *					1202>20 so switch 1202 and 20 -> (1,20,1202,4,900,42)
 *					1202>4 so switch 1202 and 4 -> (1,20,4,1202,900,42)
 *					1202>900 so switch 1202 and 900 -> (1,20,4,900,1202,42)
 *					1202>42 so switch 1202 and 42 -> (1,20,4,900,42,1202)
 * 			PASS 2: (1,20,4,900,42,1202) -> (1,4,20,900,42,1202) -> (1,4,20,900,42,1202)->(1,4,20,42,900,1202)
 * 
 * Sorted list: (1,4,20,42,900,1202)
 * 
 */

int* bubble_sort(int* vals, int n, bool isAscending);

/*
 * Selection Sort Algorithm.
 * vals: Elements to be sorted
 * n: Number of elements
 * isAscending: Set true to sort elements in Ascending order
 * 
 * Description: Selection sort finds the minimum element in the 
 * list sets it as the first element. In each iteration , the 
 * next smallest element is found and placed in order.
 * Example: Sorting in ascending order, (5,8,1,2,3) using selection sort.
 * (1,8,5,2,3)->(1,2,8,5,3)->(1,2,3,8,5)->(1,2,3,5,8)
 * 
 */

int* selection_sort(int *vals, int n, bool isAscending);


/*
 *
 * Insertion Sort Algorithm 
 * 
 * Time Complexity: O(n²)
 *
 * Description: The list of elements has two parts, 
 * the first part is sorted and the second part is unsorted.
 * We pick up an element from the unsorted list and fit it into
 * it's appropriate position in the sorted list till the entire
 * list is sorted. 
 * 
 * Example:  Sorting in ascending order using insertion sort.
 *  (12,1,5,9,0)                        
 *  Compare 12 and 1. 12>1 , swap.          
 * ->(1,12,5,9,0)                     
 *  Compare 12 and 5. 12>5 , swap
 * ->(1,5,12,9,0)                     
 *  Compare 12 and 9. 12>9 ,swap. 
 * ->(1,5,9,12,0)                       
 *  Compare 12 and 0. 12>0 , swap. ->(1,5,9,0,12) 
 *  Compare 9 and 0. 9>0, swap ->(1,5,0,9,12)     
 *  Compare 5 and 0. 5>9 , swap ->(1,0,5,9,12)     
 *  Compare 1 and 0. 1>0, swap -> (0,1,5,9,12)    
 *
 */


 int* insertion_sort(int *vals, int n, bool isAscending);