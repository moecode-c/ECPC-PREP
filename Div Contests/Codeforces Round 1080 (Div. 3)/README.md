# Codeforces Round 1080 (Div. 3) - Notes

## Problem A: Product 67 Check
**What:** Determine whether a non-empty subset can have product exactly 67.  
**Key Insight:** Since 67 is prime, valid subset must contain 67 and all other selected values must be 1.  
**Current Code:** Checks if 67 exists (and pair checks).  
**Complexity:** O(n)

## Problem B: Heapify 1
**What:** Check if permutation can be sorted using swaps between positions i and 2i (1-indexed).  
**Key Insight:** Indices split into independent chains: r, 2r, 4r, ... for odd r. Values cannot move between chains.  
**Current Approach:** For each chain, compare sorted current values with required index-values.  
**Complexity:** O(n log n) total across chains

## Problem C: Dice Roll Sequence
**What:** Minimum edits so every adjacent pair is on adjacent faces of a die.  
**Constraint Rule:** Adjacent values must be different and must not sum to 7 (opposite faces).  
**Current Approach:** DP over states 1..6 per position.  
**Complexity:** O(n * 36) per test case

## Notes
- Fast I/O enabled in all solutions.
- Keep one source file per problem as currently organized.
- Add new sections here as you solve more tasks in this round.
