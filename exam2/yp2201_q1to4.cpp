/*
1. 
i) if n=1, 1 = 1^2. 
ii) for n = k, if 1+3+5...+ 2k-1 = k^2, I will prove that 1+3+5+...+ 2k-1 + 2k+1 = (k+1)^2
	since 1+3+5+...+ 2k-1 + k^2, 1+3+5+...+ 2k-1 + 2k+1 = k^2 + 2k+1 = (k+1)^2
Therefore, the sum of the first n odd positive integers is n^2

2. C(8,2) * 4! = 672 
First, select 4 numbers from 0~9, including 3 and 5. This will be C(8,2) ways to select. 
After selecting 4 numbers, numbers should be placed in an order for each pin code, which will have 4! ways. 
Since, every selection from first has 4! ways of ordering, there are total C(8,2) * 4! = 672 ways.

3.
a. X=0, 6/36 {(1,1), (2,2), (3,3), (4,4), (5,5), (6,6)}
   X=1, 10/36 {(1,2), (2,3), (3,4), (4,5), (5,6), (6,5), (5,4), (4,3), (3,2), (2,1)}
   X=2, 8/36 {(1,3), (2,4), (3,5), (4,6), (6,4), (5,3), (4,2), (3,1)}
   X=3, 6/36 {(1,4), (2,5), (3,6), (6,3), (5,2), (4,1)}
   X=4, 4/36 {(1,5), (2,6), (6,2), (5,1)}
   X=5, 2/36 {(1,6), (6,1)}

b. E(X) = (0 * 6/36) + (1 * 10/36) + (2 * 8/36) + (3 * 6/36) + (4 * 4/36) + (5 * 2/36)
		= 35/18

4. 
- Running time for func1: theta((log n / log 2) * n)
  For i, iteration stops when i <= n. Since i *= 2, by iterating (log n / log 2) times, i = n and iteration stops. 
  For every i, j incrases by 1, and iterates n times. 

- Running time for func2: theta((√n) * n)
  For i, iteration stops when i <= n. Since i += √n, by iterating √n times, i = n+1 and iteration stops.
  For every i, j incrases by 1, and iterates n times.
*/