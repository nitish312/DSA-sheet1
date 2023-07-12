(Q1) Check if a number is palindrome or not
	 1. Reverse the num 
	 	? O(logN) : O(1)


(Q2) Find all Palindrome numbers in a given range
	 1. loop n palin 
	 	? O(range * logN) : O(1)


(Q3) Check if a number is prime or not
	 1. Iterative 
	 	? O(N) : O(1)
	 2. till sqrt
	 	? O(sqrt(N)) : O(1)
	 3. Recursive
	 	? O(N) : O(N)


(Q4) Prime numbers in a given range
	 1. Iterative 
	 	? O(range * N) : O(1)
	 2. till sqrt
	 	? O(range * sqrt(N)) : O(1)
	 3. Recursive
	 	? O(range * N) : O(N)


(Q5) Check if a number is armstrong number of not
	 1. find totalDigits n take pow of each n sum then check
	 	? O(log K * log(log K)) : O(1)


(Q6) Check if a number is perfect number
	 1. sum all proper divisors of num n check
	 	? O(N) : O(1)


(Q7) Even or Odd
	 1. even when num MOD 2 is 0
	 	? O(1) : O(1)
	 2. even when NOT(num AND 1) 
	 	? O(1) : O(1)


(Q8) Check weather a given number is positive or negative
	 1. compare with zero
		? O(1) : O(1)
	 2. right shift by 31 are 0/-1 
		? O(1) : O(1)


(Q9) Sum of first N natural numbers
	 1. loop 
	 	? O(N) : O(1)
	 2. formula 
	 	? O(1) : O(1)


(Q10) Find Sum of AP Series -> I think not necessary 


(Q11) Program to find sum of GP Series -> I think not necessary 


(Q12) Greatest of two numbers
	 1. if-else 
	 	? O(1) : O(1)
	 2. inbuilt max function 
	 	? O(1) : O(1)


(Q13) Greatest of three numbers
	 1. if-else 
	 	? O(1) : O(1)
	 2. inbuilt max function 
	 	? O(1) : O(1)


(Q14) Leap Year or not
	 1. if-else logic for divisible of 4/100/400
	 	? O(1) : O(1)


(Q15) Reverse digits of a number
	 1. Iterative ? O(log(K)) : O(1)
	 2. Recursive ? O(log(K)) : O(1)


(Q16) Maximum and Minimum digit in a number
	 1. get lastDigits n return maxmin
	 	? O(logN) : O(1)


(Q17) Print Fibonacci upto Nth Term
	 1. Recursive ? O(2^N) : O(N)
	 2. Top-Down - Memoization ? O(2N) : O(N) + O(N)
	 3. Bottom-Up - Tabulation ? O(N) : O(N)
	 4. space opti - Iterative ? O(N) : O(1)


(Q18) Factorial of a number
	 1. Recursive ? O(N) : O(N)
	 2. Iterative ? O(N) : O(1)


(Q19) Power of a number
	 1. loop ? O(power) : O(1)
	 2. in-built func ? O(log N) : O(1)
	 3. Binary Exponential ? O(log N) : O(1) 


(Q20) Factors of a given number
	 1. loop ? O(N) : O(1)
	 2. till sqrt ? O(sqrt(N)) : O(1)


(Q21) Print all prime factors of the given number
	 1. nested loop ? O(N) : O(1)
	 2. till sqrt ? O(sqrt(N)) : O(1)


(Q22) Check if a number is a strong number or not
	 1. factorial of each digit 
	 	? O(N) * O(log(N)) -> O(N*logN) : O(1)
	 2. precomputation of factorial globally for 10 elems
	 	? O(10) + O(log(N)) -> O(logN) : O(10) -> O(1)


(Q23) Check if a Number is Automorphic
	 1. 
	 2. 


(Q24) GCD of two numbers
	 1. 
	 2. 


(Q25) LCM of two numbers
	 1. 
	 2. 


Check if a number is Harshad number
Check if the number is abundant number or not
Sum of digits of a number
Sum of numbers in the given range
Permutations in which N people can occupy R seats in a classroom
Program to add two fractions
Replace all 0s with 1s in a given integer
Can a number be expressed as a sum of two prime numbers
Calculate the area of circle
Program to find roots of a Quadratic Equation