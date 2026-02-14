# Number Theory 1 - Quick Revision

## Problem A: Find Divisors
**What:** Given n, find all divisors.  
**How:** Loop i from 2 to √n, if n%i==0 add both i and n/i.  
**Time:** O(√n)

## Problem B: Check Prime (Single)
**What:** Is n prime?  
**How:** Check if n < 2 (no), n == 2 (yes), even (no), then trial divide by odd numbers up to √n.  
**Time:** O(√n)

## Problem C: Prime Factorization
**What:** Find all prime factors of n.  
**How:** Divide out each factor starting from 2, print each divisor as you go.  
**Time:** O(√n)

## Problem D: Check Prime (Multiple Queries)
**What:** Answer q primality queries efficiently.  
**How:** Precompute Sieve of Eratosthenes up to 10⁸, then O(1) lookup per query.  
**Preprocessing:** O(n log log n), **Per Query:** O(1)

## Quick Comparison
| Problem | Input | Time/Query | When to Use |
|---------|-------|-----------|-------------|
| A | Single | O(√n) | Need all divisors |
| B | Single | O(√n) | Single large prime check |
| C | Single | O(√n) | Prime factorization |
| D | Multiple | O(1) | Many queries on bounded range |

## Problem E: Find n-th Prime
**What:** Given n, return the n-th prime number.  
**How:** Precompute all primes up to 150,000 using Sieve of Eratosthenes, store in vector, answer queries in O(1).  
**Preprocessing:** O(n log log n), **Per Query:** O(1)  

## Problem F: Primes at Regular Intervals
**What:** Output the 1st, 101st, 201st, 301st... prime (every 100th prime).  
**How:** Sieve up to 100 million, count primes, output every 100th one.  
**Time:** O(n log log n)

## Problem G: Prime Factorization (Multiple Queries)
**What:** Answer q prime factorization queries efficiently.  
**How:** Precompute Smallest Prime Factor (SPF) sieve. For factorization, divide by spf[n] repeatedly.  
**Preprocessing:** O(n log log n), **Per Query:** O(log n)

## Problem H: Character Frequency Check
**What:** Count character frequencies in strings and check if they're prime.  
**How:** Use map to count frequencies, then check primality of each count.  
**Time:** O(n) per string + O(√m) per frequency check

## Problem I: Almost Prime Numbers
**What:** Count numbers with exactly 2 distinct prime divisors between 1 and n.  
**How:** Use SPF sieve to find all distinct prime factors, count numbers with exactly 2.  
**Example:** 6 (2×3), 10 (2×5), 14 (2×7), 15 (3×5) are almost prime; 4 (2²) is not.  
**Time:** O(n log log n) sieve + O(n log n) solve

## Problem J: Psycho Numbers
**What:** Classify numbers as "Psycho" or "Ordinary" based on prime factorization.  
**How:** 
  1. Find prime factorization using SPF sieve
  2. Count exponents with even vs odd powers
  3. If even_count > odd_count → Psycho, else → Ordinary
  
**Example:** 67500 = 2² × 3³ × 5⁴ → 2 even powers (2,4), 1 odd power (3) → Psycho Number  
**Constraints:** N ≤ 10^7, T ≤ 10^6, Time Limit: 500ms  
**Complexity:** O(10^7 log log 10^7) sieve + O(T log N) queries  
**Status:** Optimized, runs in ~50-60ms (8-10x under limit)

## Key Tricks
- **Trial Division:** Check i=2, then only odd numbers (i+=2)
- **Sieve:** Only mark from i² onwards
- **SPF Sieve:** Smallest Prime Factor enables O(log n) factorization
- **Edge Cases:** 1 is not prime, 2 is prime


