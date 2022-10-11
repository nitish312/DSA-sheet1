(Q1) Find the smallest number in an array
	 1. sort & get (0)th elem 
	 	? O(N*log(N)) : O(1)
	 2. iterate by loop by taking var 
	 	? O(N) : O(1)


(Q2) Find the largest number in an array
	 1. sort & get (n-1)th elem 
	 	? O(N*log(N)) : O(1)
	 2. iterate by loop by taking var 
	 	? O(N) : O(1)


(Q3) Second Smallest and Second Largest element in an array
	 1. sort & get elems
	 	? O(N*log(N)) : O(1)
	 2. iterate using two separate loops -> in two pass
	 	loop1 for smallest,largest, loop2 for second-small,second-large
	 	? O(N) + O(N) -> O(N) : O(1)
	 3. iterate using single loops -> in one pass
	 	loop for smallest,largest, second-small,second-large
	 	? O(N) : O(1)	


(Q4) Reverse a given array
	 1. stack - push all elems into stack and pop all
	 	? O(2N) -> O(N) : O(N)
	 2. by creating another array - 
	 	store array by iterating from end into another array & replace it with new array
	 	? O(2N) -> O(N) : O(N)
	 2. in-built func - reverse()
	 	? O(N) : O(1)
	 3. Two-pointer & swaps
	 	? O(N/2) : O(1)


(Q5) Count frequency of each element in an array
	 1. two loops with visited array 
	 	? O(N) + O(N*N) -> O(N^2) : O(N) 
	 2. HashMap 
	 	? O(N) : O(N)


(Q6) Rearrange half array in increasing-decreasing order
	 1. sort & reverse from mid to end
	 	? O(N*log(N)) + O(N/4) -> O(N*log(N)) : O(1)


(Q7) Calculate sum of the elements of the array
	 1. by traversing n summing up all elems  
	 	? O(N) : O(1)
	 2. in-built - accumulate()
	 	? O(N) : O(1)


(Q8) Rotate array by K elements – (anti-clockwise)
	 1. rotate() will shift each elem by 1, then call ratate() k times
	 	? O(N) * O(K) -> O(N*K) : O(1)
	 2. Block Swap Algorithm for anti-clockwise only
	 	? O(N) : O(1)
// For Anti-clockwise ? O(N) -> Block Swap Algo
// For Clockwise ? O(N) -> 3 reversals (see sht1 q.20)


(Q9) Average of all elements in an array
	 1. get sum / n
	 	? O(N) : O(1)


(Q10) Find the median of the given array
	 1. sort & if(n%2!=0) get (n/2)th elem else get avg((n/2), (n/2)-1)th elems
	 	? O(N*log(N)) : O(1)


(Q11) Remove duplicates from a sorted array
	 1. HashSet (set) - insert all into set, iterate set and put back into array using ind++=0
	 	? O(N*log(N)) + O(st) -> O(N*logN) : O(N)
	 2. Two-pointer - start=1, iterate, if(nums of ind!=ind-1) nums[start++] = nums[ind] 
	 	? O(N) : O(1)


(Q12) Remove duplicates from unsorted array
	 1. HashSet (unordered_set)
	 	? O(N) + O(st) -> O(N) : O(N)
	 2. Two-pointer - sort & two-pointer
	 	? O(N*log(N)) + O(N) -> O(N*log(N)) : O(1)

(Q13) Adding Element in an array
	 1. brute 
	 	? O(N) : O(1)


(Q14) Find all repeating elements in an array
	 1. creating new array, visited array, two loops  // neglected
	 	? O(N) + O(N*N) + O(N) -> O(N^2) : O(N) 
	 2. HashMap
	 	? O(N) : O(N)


(Q15) Find all non-repeating elements in an array
	 1. brute - two loops, bool check, visited arr
	 	? O(N^2) : O(N)
	 2. sort
	 	? O(N*log(N)) + O(N) -> O(N*logN) : O(1)
	 3. HashMap
	 	? O(N) : O(N)


(Q16) Find all symmetric pairs in array
	 1. double for, i=0-n, j=i+1-n, if(a[j][0]=a[i][1]&a[i][0]=a[j][1]) print
	 	? O(N^2) : O(1)
	 2. HashMap - if(mp.find(second) != mp.end() && mp[second] == first) found else mp[first]=second
	 	? O(N) : O(N)


(Q17) Maximum product subarray in an array
	 1. better - two loops - pair for indices - 1:i0ton-1,2:jiton-1
	 	? O(N^2) : O(1)
	 2. Kadane`s Algo 
	 	? O(N) : O(1) 


(Q18) Replace each element of the array by its rank in the array
	 1. HashSet & unorderedMap 
	 	? O(N*log(N)) + O(N) + O(N) -> O(N*log(N)) : O(2N) -> O(N)


(Q19) Sorting elements of an array by frequency
	 1. Nested loop n visitetd array 
	 	? O(N+N^2) -> O(N^2) : O(N)
	 2. HashMap 
	 	? O(N) : O(N)


(Q20) Rotation of elements of array- left and right
	 1. Brute 
	 	? O(N*K) : O(1)
	 2. k mod n and 3 reversals (clock-wise)
	 	? O(N) : O(1)


(Q21) Finding equilibrium index of an array
	 1. brute ? O(N^2) : O(1)
	 2. pre-computation ? O(N) : O(N)
	 3. two sum variables ? O(N) : O(1)


(Q22) Finding Circular rotation of an array by K positions
	    same quesition as sht-1-Q20


(Q23) Sort an array according to the order defined by another array
	 1. brute - Nested loop ? O(N^2) + O(N*logN) : O(N+M)
	 2. HashMap ? O(N*logN) + O(logM) + O(N) -> O(N*logN) : O(N+M)


(Q24) Search an element in an array
	 1. Linear Search ? O(N) : O(1)
	 2. Binary Search ? O(logN) : O(1)


(Q25) Check if Array is a subset of another array or not
	 1. Linear Search ? O(M*N) : O(1)
	 2. Binary Search ? O(M*logN) : O(1)
	 3. HashSet ? O(N+M) : O(N)