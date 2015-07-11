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
 */

int* bubble_sort(int* vals, int n, bool isAscending);

/* 
 * Selection Sort Algorithm:
 *
 * vals = Array of unsorted integers
 * n = Number of elements to sort
 * ascending = true if elements must be sorted in ascending order
 *
 */
 
int* selection_sort(int *vals, int n, bool isAscending);


/* 
 * Insertion Sort Algorithm:
 *
 * vals = Array of unsorted integers
 * n = Number of elements to sort
 * ascending = true if elements must be sorted in ascending order
 *
 */

 int* insertion_sort(int *vals, int n, bool isAscending);