# 0x1E. C - Search Algorithms
## General
* What is search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs
### Tasks
| File |           |
|----------|-------------|
| 0-linear.c |  a function that searches for a value in an array of integers using the `Linear search algorithm` |
| 1-binary.c |  a function that searches for a value in a sorted array of integers using the `Binary search algorithm` |
| 2-O | the `time complexity` (worst case) of a linear search in an array of size n |
| 3-O |  the `space complexity` (worst case) of an iterative linear search algorithm in an array of size n |
| 4-O | the `time complexity` (worst case) of a binary search in an array of size n |
| 5-O | the space complexity (worst case) of a binary search in an array of size n |
| 6-O | the space complexity of this function / algorithm
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
|
