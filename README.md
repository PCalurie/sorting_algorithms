# sorting_algorithms
## Bubble sort
Bubble sort is a simple sorting algorithm that repeatedly compares adjacent elements in an array and swaps them if they are in the wrong order. The algorithm continues until no more swaps are necessary, which means that the array is sorted.
### Here is how bubble sort works:
- The algorithm starts at the beginning of the array and compares the first two elements. If the first element is greater than the second element, they are swapped.
- The algorithm then moves on to the next two elements and repeats the process. This continues until the end of the array is reached.
- The algorithm then starts again at the beginning of the array and repeats the process. This continues until no more swaps are necessary.
## Insertion sort
Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time by comparisons. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:
- Simple implementation: Jon Bentley shows a three-line C/C++ version that is five lines when optimized.
- Efficient for (quite) small data sets, much like other quadratic (i.e., O(n^2)) sorting algorithms.
- More efficient in practice than most other simple quadratic algorithms such as selection sort or bubble sort.
### Here is how insertion sort works:
- The array is initially assumed to be sorted, with the first element being the only sorted element.
- The next element in the array is then compared to the first element. If the next element is smaller than the first element, it is swapped with the first element.
- The process then repeats, with the next element in the array being compared to the sorted elements. This continues until all of the elements in the array have been sorted.
## Selection sort
Selection sort is a simple sorting algorithm that works by repeatedly finding the smallest (or largest) element in an unsorted array and swapping it with the first element of the unsorted part. This process is repeated until the entire array is sorted.
### Here is how selection sort works:
- The algorithm starts at the beginning of the array and finds the smallest element.
- The algorithm then swaps the smallest element with the first element of the unsorted part.
- The algorithm then moves on to the next element in the unsorted part and repeats the process.
- This continues until the entire array is sorted.
Selection sort is a simple algorithm to understand and implement. However, it is not very efficient on large lists. For this reason, it is not often used in practice. However, it can be useful for sorting small lists or for sorting lists that are already partially sorted.
## Quick sort
Quicksort is a divide-and-conquer sorting algorithm. This means that it divides the problem into smaller subproblems, solves the subproblems recursively, and then combines the solutions to the subproblems to solve the original problem.
### Here is how it works:
Quicksort works by choosing a pivot element from the array and partitioning the array around the pivot. The pivot element is placed in its correct position in the sorted array, and all of the elements smaller than the pivot are placed to the left of the pivot, and all of the elements greater than the pivot are placed to the right of the pivot.

The partitioning process is then recursively applied to the left and right subarrays. This process continues until the entire array is sorted.
Quicksort is a very efficient sorting algorithm. Its worst-case time complexity is O(n^2), but its average time complexity is O(n log n). This means that it is very fast for most inputs.

Quicksort is also a very versatile sorting algorithm. It can be used to sort arrays of any size, and it can be easily implemented in any programming language.
## Shell sot - Knuth Sequence
Shell sort is a sorting algorithm that is a hybrid of insertion sort and selection sort. It works by repeatedly inserting elements into a sorted subarray, but instead of inserting elements one at a time, it inserts elements in blocks.

The gaps between the blocks are gradually decreased until the gap becomes 1, at which point the algorithm becomes insertion sort.

The gaps used in shell sort are typically generated using a sequence called Knuth's sequence. Knuth's sequence is a sequence of integers that is defined recursively. The first element in the sequence is 1, and the rest of the elements are calculated using the following formula:
`n+1 = n * 3 + 1`
Shell sort is a relatively efficient sorting algorithm. Its worst-case time complexity is O(n^2), but its average time complexity is O(n log n). This means that it is very fast for most inputs.

Shell sort is also a very versatile sorting algorithm. It can be used to sort arrays of any size, and it can be easily implemented in any programming language.
## Cocktail shaker sort
Cocktail shaker sort, also known as bidirectional bubble sort, is a sorting algorithm that is a variation of bubble sort. It works by repeatedly comparing adjacent elements in an array and swapping them if they are in the wrong order. The algorithm continues until no more swaps are necessary, which means that the array is sorted.

Cocktail shaker sort is similar to bubble sort, but it differs in that it passes through the array in both directions, alternating between ascending and descending order. This means that it is less likely to get stuck in a local minimum, which can improve its performance.

### Here is how cocktail shaker sort works:

- The algorithm starts at the beginning of the array and compares the first two elements. If the first element is greater than the second element, they are swapped.
- The algorithm then moves on to the next two elements and repeats the process. This continues until the end of the array is reached.
- The algorithm then starts again at the beginning of the array and compares the last two elements. If the last element is less than the second-to-last element, they are swapped.
- The algorithm then moves on to the next two elements and repeats the process. This continues until the beginning of the array is reached again.
Cocktail shaker sort is a relatively efficient sorting algorithm. Its worst-case time complexity is O(n^2), but its average time complexity is O(n log n). This means that it is very fast for most inputs.

Cocktail shaker sort is also a very versatile sorting algorithm. It can be used to sort arrays of any size, and it can be easily implemented in any programming language.
## Counting sort
Counting sort is a sorting algorithm that works by counting the number of occurrences of each element in an array. The algorithm then uses this information to place the elements in their correct sorted order.

Counting sort is a non-comparison sort algorithm, which means that it does not compare elements to each other. This makes it a very efficient sorting algorithm for arrays where the elements are all integers and the range of values is known.

### Here is how counting sort works:

- The algorithm creates a count array of size k, where k is the maximum value in the array.
- The algorithm then iterates through the input array and increments the count array at the index corresponding to the value of each element.
- The algorithm then iterates through the count array and outputs the elements in sorted order.
Counting sort is a very efficient sorting algorithm for arrays where the elements are all integers and the range of values is known. Its worst-case time complexity is O(n), but its average time complexity is O(n + k), where k is the maximum value in the array. This means that it is very fast for most inputs.

Counting sort is also a very versatile sorting algorithm. It can be used to sort arrays of any size, and it can be easily implemented in any programming language.
