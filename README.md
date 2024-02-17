Sorting Algorithm Project
This project explores various sorting algorithms implemented in C. Sorting algorithms are essential in computer science for rearranging elements in a list or array into a specific order, such as numerical or lexicographical.n
•••••••••••••••••••••••••••••••••••••••••••••••••••••
••••••••••••••••••••••••••••••••••••••••••••••••••••••••

Introduction

In this project, we implement and analyze several common sorting algorithms, including:
Bubble Sort
Insertion Sort
Selection Sort
Quick Sort

Bubble Sort
•••
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
Time Complexity
Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)
Implementation
c
void bubble_sort(int *array, size_t size);

Insertion Sort
•••
Insertion Sort is a simple sorting algorithm that builds the final sorted list one item at a time. It iterates over the input list, removing one element at a time and inserting it into its correct position in the sorted list.
Time Complexity
Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)
Implementation
c
void insertion_sort(int *array, size_t size);

Selection Sort
•••
Selection Sort is a simple sorting algorithm that divides the input list into two parts: the sorted part at the beginning and the unsorted part at the end. It repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
Time Complexity
Best Case: O(n^2)
Average Case: O(n^2)
Worst Case: O(n^2)
Implementation
c
void selection_sort(int *array, size_t size);

Quick Sort
•••
Quick Sort is a divide-and-conquer algorithm that selects a 'pivot' element from the list and partitions the other elements into two sublists according to whether they are less than or greater than the pivot. It then recursively sorts the sublists.
Time Complexity
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n^2)
Implementation
c
void quick_sort(int *array, size_t size);

Usage
•••
To use the sorting algorithms implemented in this project, follow these steps:
Clone the repository: git clone https://github.com/kaanyinaele/sorting_algorithms.git
Navigate to the project directory: cd sorting_algorithm





