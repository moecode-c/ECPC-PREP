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

## Key Tricks
- **Trial Division:** Check i=2, then only odd numbers (i+=2)
- **Sieve:** Only mark from i² onwards
- **Edge Cases:** 1 is not prime, 2 is prime


