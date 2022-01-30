# Matrix Median

## Brute

- We can simply add all the elements of the matrix to a vector and then find the median of the vector.

## Optimal

- as the matrix is row wise sorted 
- we can apply binary search on value and count how many elements are smaller than value. If there are half of the elements are smaller than value, then value is the median.
