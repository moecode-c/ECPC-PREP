# 🏁 ECPC 2026 — 44-Day Qualification Sprint

**Start:** Mon June 22, 2026 · **Quals:** Wed Aug 5, 2026 · **Goal:** be MIU's #1 team + qualify for finals.

You're ~Pupil (1300), <6 months in, 30+ hrs/week, weak-but-ambitious 3-person team. You've covered **number theory, two pointers, DFS**. The gaps this plan closes, in order of value: **DP → binary search → prefix sums → greedy → DSU → BFS/shortest paths**, plus heavy contest + team reps.

---

## How to use this

- One section per day. Check the boxes. Commit the file daily so you can see your streak.
- **No rest days** — but intensity varies by design. Weekends = contests, Sundays lighter, last 2 days taper (cramming the day before a contest *lowers* your score — trust it).
- Daily load is ~6–8 hrs. If you have more, add sweet-spot problems (your rating **+200**).

### The 5 non-negotiable rules (these matter more than the schedule)
1. **+200 rule** — most solving at your rating **+100 to +300** (crackable in 20–45 min).
2. **30–45 min, then editorial — then re-implement from scratch, closed-book.** Copying teaches nothing.
3. **Upsolve everything.** Every contest problem you missed, you solve after. ~70% of growth is here.
4. **Diagnose every miss:** tag it `knowledge` / `misread` / `bug`. Track the pattern.
5. **Protect sleep.** A tired grind is a slow grind — even with no rest days.

### Track every problem
Keep a sheet: `problem | rating | solved/failed | time | failure reason`. Build your **team reference notebook** (printed, ICPC-legal) as you go — add each template the day you learn it.

---

# WEEK 1 (Days 1–7) · Jun 22–28 — Close fundamentals + quick wins

> Finish DFS, clear your 3 unfinished stubs, and pick up the fast high-frequency tools you're missing: binary search (incl. **on the answer**) and prefix/difference arrays.

### ☐ Day 1 — Mon Jun 22 — Clean slate
- [ ] Finish the remaining problems in `Intro To Graph & DFS`.
- [ ] **Upsolve your stubs — solve them fully:** `CF Round 1096 C`, `CF Round 1096 D`, `Adhocs ProblemJ` (no empty `solve()` left behind).
- [ ] Start CF EDU → **Binary Search** (watch steps 1–2).

### ☐ Day 2 — Tue Jun 23 — Binary search (on arrays)
- [ ] Finish CF EDU Binary Search steps + its practice problems.
- [ ] Solve 6–8 problems tagged `binary search`, rated 1100–1400.
- [ ] Note the difference: searching a *sorted array* vs. searching *the answer*.

### ☐ Day 3 — Wed Jun 24 — Binary search ON THE ANSWER (key skill)
- [ ] Learn the pattern: "can we do it with X? → monotonic → bsearch X." Minimize-the-max / maximize-the-min.
- [ ] Solve 6 problems of this type, 1300–1500.
- [ ] 📒 Add a **binary-search-on-answer** template to your notebook.

### ☐ Day 4 — Thu Jun 25 — Prefix sums + difference arrays
- [ ] USACO Guide → **Prefix Sums** (1D and 2D) + difference arrays.
- [ ] Solve 8 problems, 1100–1400.

### ☐ Day 5 — Fri Jun 26 — 🤝 TEAM CONTEST
- [ ] 5-hour **easy** Vjudge ICPC/ECPC set: 1 computer, 3 people, problems on paper.
- [ ] Upsolve everything the team missed, together.

### ☐ Day 6 — Sat Jun 27 — Individual virtual contest
- [ ] Timed past **CF Div 3** (~2h15m).
- [ ] **Full upsolve** — every problem you couldn't solve live, including D/E.

### ☐ Day 7 — Sun Jun 28 — Consolidate
- [ ] Mixed set, 8–10 problems combining binary search + prefix sums + two pointers (1200–1500).
- [ ] Review the week's failure tags. What's the recurring weakness?

---

# WEEK 2 (Days 8–14) · Jun 29–Jul 5 — DP Part 1: linear DP & knapsack

> The big one. You have **zero** DP so far and it's the highest-value topic. The **AtCoder Educational DP Contest** is your spine — re-implement every problem from scratch.

### ☐ Day 8 — Mon Jun 29 — DP foundations
- [ ] Learn: state, transition, base case, memoization vs. tabulation (USACO Guide → Intro to DP).
- [ ] AtCoder EDU DP: **A (Frog 1)**, **B (Frog 2)**. Re-implement both closed-book.

### ☐ Day 9 — Tue Jun 30 — Knapsack
- [ ] AtCoder EDU DP: **C (Vacation)**, **D (Knapsack 1)**. Understand 0/1 knapsack cold.
- [ ] 4 more linear-DP / knapsack problems, 1200–1400.

### ☐ Day 10 — Wed Jul 1 — Knapsack variants + counting
- [ ] AtCoder EDU DP: **E (Knapsack 2)** (value-indexed state — note why the state flips).
- [ ] CSES DP: *Dice Combinations*, *Minimizing Coins*, *Coin Combinations I & II*.

### ☐ Day 11 — Thu Jul 2 — Coin-change family
- [ ] CSES DP: *Removing Digits*, *Grid Paths*.
- [ ] 5 problems, 1300–1500.
- [ ] 📒 Add knapsack + coin-change templates to notebook.

### ☐ Day 12 — Fri Jul 3 — 🤝 TEAM CONTEST
- [ ] 5-hour Vjudge set + team upsolve.

### ☐ Day 13 — Sat Jul 4 — Individual virtual contest
- [ ] Timed CF Div 3 + full upsolve. Make sure you get any DP problem in upsolve.

### ☐ Day 14 — Sun Jul 5 — DP review
- [ ] Re-solve AtCoder A–E from scratch (speed check).
- [ ] 5 mixed DP problems, 1300–1500.

---

# WEEK 3 (Days 15–21) · Jul 6–12 — DP Part 2: grid, LIS, DAG/tree

### ☐ Day 15 — Mon Jul 6 — Grid DP + LCS
- [ ] AtCoder EDU DP: **F (LCS)**, **H (Grid 1)** (paths with obstacles).

### ☐ Day 16 — Tue Jul 7 — LIS
- [ ] Longest Increasing Subsequence: O(n²) **and** O(n log n). CSES: *Increasing Subsequence*.
- [ ] 5 LIS-flavored problems.

### ☐ Day 17 — Wed Jul 8 — DAG DP
- [ ] AtCoder EDU DP: **G (Longest Path)**, **L (deque/game DP)**. DP over a DAG.

### ☐ Day 18 — Thu Jul 9 — Tree DP + game DP intro
- [ ] AtCoder EDU DP: **K (Stones — Grundy/game intro)**, **P (Independent Set on a tree)**.
- [ ] 📒 Add a tree-DP skeleton to notebook.

### ☐ Day 19 — Fri Jul 10 — 🤝 TEAM CONTEST
- [ ] 5-hour Vjudge set + team upsolve.

### ☐ Day 20 — Sat Jul 11 — Individual virtual contest (push up)
- [ ] Try a **CF Div 2 A–C** timed this time + full upsolve.

### ☐ Day 21 — Sun Jul 12 — DP consolidation
- [ ] CSES DP: *Book Shop*, *Array Description*, *Edit Distance*, *Rectangle Cutting*.

---

# WEEK 4 (Days 22–28) · Jul 13–19 — Greedy + DSU

### ☐ Day 22 — Mon Jul 13 — Greedy fundamentals
- [ ] Exchange argument, sorting-based greedy, interval scheduling. USACO Guide → Greedy.
- [ ] 8 problems, 1200–1400.

### ☐ Day 23 — Tue Jul 14 — Greedy + heaps
- [ ] Priority-queue greedy (scheduling, "minimize cost", Huffman-style).
- [ ] 6 problems, 1300–1500.

### ☐ Day 24 — Wed Jul 15 — Greedy proof/counterexample reps
- [ ] For each: can you justify it, or find a counterexample fast?
- [ ] 6 problems tagged `greedy`, 1300–1600.

### ☐ Day 25 — Thu Jul 16 — DSU (Union–Find)
- [ ] Path compression + union by size/rank. CF EDU → DSU. CSES: *Road Construction*.
- [ ] 6 problems. 📒 Add DSU template to notebook.

### ☐ Day 26 — Fri Jul 17 — 🤝 TEAM CONTEST
- [ ] 5-hour Vjudge set + team upsolve.

### ☐ Day 27 — Sat Jul 18 — Individual virtual contest
- [ ] Timed CF Div 3 + full upsolve.

### ☐ Day 28 — Sun Jul 19 — DSU applications + greedy review
- [ ] Dynamic components, cycle detection, Kruskal preview. Re-attempt 2 greedy problems that beat you.

---

# WEEK 5 (Days 29–35) · Jul 20–26 — BFS, shortest paths, finish the graph toolkit

### ☐ Day 29 — Mon Jul 20 — BFS + 0-1 BFS
- [ ] BFS on grid & graph, multi-source BFS, 0-1 BFS. CSES: *Labyrinth*, *Monsters*.
- [ ] 6 problems.

### ☐ Day 30 — Tue Jul 21 — Dijkstra
- [ ] Dijkstra with a priority queue. CSES: *Shortest Routes I*.
- [ ] 6 problems, 1400–1600. 📒 Add Dijkstra template.

### ☐ Day 31 — Wed Jul 22 — Floyd–Warshall + when-to-use-what
- [ ] All-pairs shortest path. CSES: *Shortest Routes II*.
- [ ] 5 problems; write yourself a one-line "which algorithm when" cheat note.

### ☐ Day 32 — Thu Jul 23 — MST + topological sort
- [ ] Kruskal (reuse your DSU) + Prim. CSES: *Road Reparation*. Topo sort (Kahn + DFS).
- [ ] 6 problems. 📒 Add MST + topo templates.

### ☐ Day 33 — Fri Jul 24 — 🤝 TEAM CONTEST
- [ ] 5-hour Vjudge set + team upsolve.

### ☐ Day 34 — Sat Jul 25 — Individual virtual contest
- [ ] Timed contest + full upsolve.

### ☐ Day 35 — Sun Jul 26 — Range queries (light)
- [ ] Fenwick / BIT for prefix sums *with updates*. CF EDU → Fenwick.
- [ ] 5 problems. (Segment tree = optional stretch, only if you have time.)

---

# WEEK 6 (Days 36–42) · Jul 27–Aug 2 — Perform, don't learn

> Switch from absorbing theory to executing under pressure. Minimal new material; maximum contest reps + team coordination + patching your specific weak spots.

### ☐ Day 36 — Mon Jul 27 — Diagnostic contest
- [ ] Full timed CF Div 3 + deep upsolve.
- [ ] Write your **weak-spot list** (the topics that still cost you time/points).

### ☐ Day 37 — Tue Jul 28 — Patch weak spot #1
- [ ] Targeted 8-problem set on your #1 weakness from yesterday.

### ☐ Day 38 — Wed Jul 29 — ECPC-breadth simulation
- [ ] 10 problems spanning implementation / math / greedy / DP / graph, 1200–1500, in timed blocks.

### ☐ Day 39 — Thu Jul 30 — Patch weak spot #2 + speed
- [ ] Targeted set on weakness #2.
- [ ] **Speed drill:** 6 easy problems (1000–1200) as fast as possible — the easy half of the set must be automatic.

### ☐ Day 40 — Fri Jul 31 — 🤝 TEAM CONTEST (dress rehearsal)
- [ ] Real ECPC/ACPC past regional set on Vjudge, **full ICPC rules**.
- [ ] Practice the *meta*: split the problem-reading, who-takes-what, sharing one keyboard, when to abandon a problem. Upsolve.

### ☐ Day 41 — Sat Aug 1 — Team strategy fixes
- [ ] Review yesterday: where did you lose time? Fix roles + keyboard handoffs.
- [ ] Shorter (3h) team set to test the fixes.

### ☐ Day 42 — Sun Aug 2 — Finalize the notebook
- [ ] Print-ready team reference: DSU, Dijkstra, BFS/0-1 BFS, MST, topo, sieve, modpow, knapsack, bsearch-on-answer (+ segment tree if you have it). **Verify each one compiles.**
- [ ] Light: 5 problems, 1200–1400.

---

# FINAL 2 DAYS (43–44) · Aug 3–4 — Taper & sharpen

> Not rest, but deliberately lighter. New topics now won't stick; sharpness and a clear head will.

### ☐ Day 43 — Mon Aug 3 — Last sharpening contest
- [ ] One relaxed-effort timed Div 3 + upsolve.
- [ ] Re-read your whole notebook.

### ☐ Day 44 — Tue Aug 4 — Stay warm, then stop
- [ ] 4–5 confidence problems (1000–1200) — keep the hands warm, no grinding.
- [ ] Re-read notebook + your "common bugs" list.
- [ ] Logistics: environment/template ready, accounts working, **sleep early.**

---

## 🏆 Day 45 — Wed Aug 5 — ECPC QUALIFICATION
Read all problems first. Grab the easy ones fast and *correctly*. Trust the notebook. Go get it.

---

### Topic completion checklist
- [ ] Binary search (array + on the answer)
- [ ] Prefix sums + difference arrays
- [ ] DP: linear · knapsack · coin change · grid · LCS · LIS · DAG · tree · game intro
- [ ] Greedy (sorting + heap + proofs)
- [ ] DSU (union–find)
- [ ] BFS / 0-1 BFS / multi-source
- [ ] Dijkstra · Floyd–Warshall
- [ ] MST (Kruskal/Prim) · topological sort
- [ ] Fenwick / BIT (light)
- [ ] Team reference notebook complete & compiling

*Resources: AtCoder Educational DP Contest · CSES Problem Set (cses.fi) · CF EDU section · USACO Guide (usaco.guide) · Vjudge (team sets).*
