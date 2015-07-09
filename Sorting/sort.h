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

int* bubble_sort(int* vals, int n, bool SortAscending);