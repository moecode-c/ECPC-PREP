# 🎯 ECPC 2026 — Mid-Effort Plan to Quals (~20 hrs/week)

**Revised:** Sat Jul 4, 2026 · **Quals:** Wed Aug 5, 2026 · **Goal:** be MIU's #1 team + qualify.

You're ~Pupil (1300), <6 months in. You've already covered **number theory, two pointers, DFS, and most of DP** (AtCoder A–J + more — you're *ahead* of the old plan here). What's left: **own** what you've rented, fill the remaining gaps (**greedy → DSU → BFS/Dijkstra**), and get real **team reps** in.

This is the sustainable version — ~3 hrs/day, **one rest day a week.** A mid plan you actually finish beats a max plan you burn out on. The tradeoff is honest: fewer hours nudges qualify-odds from ~50–60% toward ~40–50% — but the two things that *actually* decide qualifying (owning problems cold + the team contest) cost quality, not hours, and this plan protects both.

---

## The 2 rules that matter most (do these even on a bad week)

1. **🔁 Daily cold re-solve.** Before anything new, re-solve **2 problems from 3–5 days ago** — closed-book, empty file. Keep them in `redo.txt`. Can't reproduce one? It goes back on the list. *This is the fix for "it doesn't stick."*
2. **🤝 One 5-hour team contest every week.** 1 computer, 3 people, problems on paper, real rules. Non-negotiable — this is the biggest lever on qualifying, bigger than your own grind.

### The other 3 (still true, lower priority)
3. **+200 rule** — most solving at your rating **+100 to +300**. Something you can't even grasp after ~20 min on the editorial is *above zone* — shelve it, no guilt.
4. **30–45 min, then a *small* hint or editorial → re-implement closed-book.** Renting ≠ owning.
5. **Diagnose every miss:** `knowledge` / `misread` / `bug`. Protect sleep.

### Daily rhythm (~3 hrs)
`redo (30–40 min) → topic study + problems in your +200 zone (~2 hr) → log misses`. Contest days replace this with the contest + upsolve. **Sunday = rest or very light.**

### Where to pull problems
- **Topic days** (greedy, DSU, graphs, etc.) → **topic-organized** sources: CSES, CF EDU, USACO Guide. These are best for closing a *specific* gap.
- **Sweet-spot / mixed / speed days** → **A2OJ ladder** at your rating (~1300–1500) — a curated rating-bucketed list, kills "what do I solve next." Use a live mirror: [earthshakira clone](https://earthshakira.github.io/a2oj-clientside/server/Ladders.html) or [c2-ladders](https://c2-ladders.com) (main a2oj.com is often down).
- **Team days** → **Vjudge** ICPC/ACPC sets (better than any ladder for real 5-hr team reps).
- ⚠️ A2OJ is a *source*, not a plan. Never let ladder volume crowd out the daily cold re-solve or the weekly team contest — those decide qualifying, the ladder doesn't.

---

# KICKOFF · Sat Jul 4 – Sun Jul 5 — Reset & test what you actually own

> Before new material, find out how much of your DP is *owned* vs *rented*. This sets your redo list.

### ☐ Sat Jul 4 — Ownership audit
- [ ] Make `redo.txt`. List every DP problem you solved with an editorial/hint.
- [ ] Pick **3 of them at random** and re-solve cold, empty file. However many you *can't* → those are the truth about where you stand. Keep them on the list.
- [ ] Schedule this week's team contest with your teammates (pick the day now).

### ☐ Sun Jul 5 — Light + plan
- [ ] Re-solve the ones you failed yesterday (cold again).
- [ ] Skim CF EDU **Binary Search** — is it solid or a gap? Decide if Week A needs it.

---

# WEEK A · Mon Jul 6 – Sun Jul 12 — Own the DP + patch fast tools

> Not much *new* DP — you have the volume. Goal: make it automatic, and pick up the two cheap high-frequency tools (binary-search-on-answer, prefix sums) if they're shaky.

### ☐ Mon Jul 6 — DP consolidation
- [ ] redo ×2. Re-solve AtCoder **A, C, D, F** cold — speed + correctness.
- [ ] 3 fresh DP problems, 1300–1500.
### ☐ Tue Jul 7 — Binary search on the answer
- [ ] Pattern: "can we do it with X? → monotonic → bsearch X." 5 problems, 1300–1500.
- [ ] 📒 Add bsearch-on-answer template to the notebook.
### ☐ Wed Jul 8 — Prefix sums + difference arrays
- [ ] 1D & 2D prefix sums, difference arrays. 6 problems, 1100–1400.
### ☐ Thu Jul 9 — DP grid/LIS gap-fill
- [ ] Whichever of grid DP / LIS you're weakest on. AtCoder **H**, CSES *Increasing Subsequence*. 4 problems.
### ☐ Fri Jul 10 — 🤝 TEAM CONTEST
- [ ] 5-hr easy Vjudge ICPC set. Focus this first one on the *meta*: who reads what, keyboard sharing. Upsolve together.
### ☐ Sat Jul 11 — Individual contest
- [ ] Timed CF Div 3 (~2h15m) + **full upsolve** (A–D, plus E only if you can grasp it).
### 🌙 Sun Jul 12 — Rest / very light
- [ ] Optional: re-read notebook, 2–3 easy confidence problems. Otherwise off.

---

# WEEK B · Mon Jul 13 – Sun Jul 19 — Greedy + DSU

> Two of your three named gaps. Greedy is half of every easy-medium set; DSU is cheap and pairs with your graph work.

### ☐ Mon Jul 14 — Greedy fundamentals
- [ ] Exchange argument, sorting-based greedy, interval scheduling. 6 problems, 1200–1400.
### ☐ Tue Jul 15 — Greedy + heaps + proofs
- [ ] Priority-queue greedy. For each: justify it or find a counterexample fast. 6 problems, 1300–1500.
### ☐ Wed Jul 16 — DSU (union–find)
- [ ] Path compression + union by size. 6 problems. 📒 Add DSU template.
### ☐ Thu Jul 17 — DSU applications
- [ ] Components, cycle detection, Kruskal preview. 5 problems, 1300–1500.
### ☐ Fri Jul 18 — 🤝 TEAM CONTEST
- [ ] 5-hr Vjudge set + team upsolve. Fix one coordination problem from last week.
### ☐ Sat Jul 19 — Individual contest
- [ ] Timed Div 3 + full upsolve. Push to get a D live.
### 🌙 Sun Jul 20 — Rest / very light

---

# WEEK C · Mon Jul 21 – Sun Jul 27 — BFS, shortest paths (finish the graph toolkit)

### ☐ Mon Jul 21 — BFS + 0-1 BFS
- [ ] Grid & graph BFS, multi-source, 0-1 BFS. CSES *Labyrinth*, *Monsters*. 6 problems.
### ☐ Tue Jul 22 — Dijkstra
- [ ] PQ Dijkstra. CSES *Shortest Routes I*. 5 problems, 1400–1600. 📒 Add template.
### ☐ Wed Jul 23 — MST + topo (light)
- [ ] Kruskal (reuse DSU) + Kahn's topo sort. 5 problems. 📒 Add templates.
### ☐ Thu Jul 24 — Graph mixed + "which algorithm when"
- [ ] Mixed graph set, 6 problems. Write a one-line cheat: BFS vs 0-1 BFS vs Dijkstra vs FW.
### ☐ Fri Jul 25 — 🤝 TEAM CONTEST
- [ ] 5-hr Vjudge set + upsolve.
### ☐ Sat Jul 26 — Individual contest
- [ ] Timed contest + full upsolve.
### 🌙 Sun Jul 27 — Rest / very light

---

# WEEK D · Mon Jul 28 – Sun Aug 2 — Perform, don't learn

> Switch from absorbing to executing. Minimal new material; contest reps + patch *your* weak spots + team dress rehearsal.

### ☐ Mon Jul 28 — Diagnostic contest
- [ ] Full timed Div 3 + deep upsolve. Write your **weak-spot list**.
### ☐ Tue Jul 29 — Patch weak spot #1
- [ ] Targeted 6-problem set on yesterday's #1 weakness.
### ☐ Wed Jul 30 — Speed + breadth
- [ ] 6 easy problems (1000–1200) as fast as possible — the easy half must be automatic.
- [ ] 4 mixed (greedy/DP/graph), timed blocks.
### ☐ Thu Jul 31 — Patch weak spot #2
- [ ] Targeted set on weakness #2.
### ☐ Fri Aug 1 — 🤝 TEAM CONTEST (dress rehearsal)
- [ ] Real ECPC/ACPC past regional set, **full ICPC rules.** Rehearse the meta: read-split, who-takes-what, when to abandon. Upsolve.
### ☐ Sat Aug 2 — Team fixes + notebook
- [ ] Fix roles/handoffs from yesterday. Finalize the **print-ready notebook** (DSU, Dijkstra, BFS/0-1 BFS, MST, topo, sieve, modpow, knapsack, bsearch-on-answer). **Verify each compiles.**
### 🌙 Sun Aug 3 — Rest / very light

---

# TAPER · Mon Aug 3 – Tue Aug 4

> New topics won't stick now; sharpness and a clear head will. Cramming the day before *lowers* your score — trust it.

### ☐ Mon Aug 3 — Last sharpening
- [ ] One relaxed timed Div 3 + upsolve. Re-read the whole notebook.
### ☐ Tue Aug 4 — Stay warm, then stop
- [ ] 4–5 confidence problems (1000–1200), no grinding.
- [ ] Logistics: template/environment ready, accounts working, **sleep early.**

## 🏆 Wed Aug 5 — ECPC QUALIFICATION
Read all problems first. Grab the easy ones fast and *correctly*. Trust the notebook. Go.

---

### Remaining-topics checklist
- [ ] DP owned cold (re-solve without editorial) ← the real test, not "solved once"
- [ ] Binary search on the answer
- [ ] Prefix sums + difference arrays
- [ ] Greedy (sorting + heap + proofs)
- [ ] DSU (union–find)
- [ ] BFS / 0-1 BFS / multi-source
- [ ] Dijkstra · MST (Kruskal) · topological sort
- [ ] Team reference notebook complete & compiling
- [ ] ≥4 team contests done before quals

*Resources: AtCoder Educational DP · CSES (cses.fi) · CF EDU · USACO Guide · Vjudge (team sets) · A2OJ ladder (rating-grind source — earthshakira/c2-ladders mirror).*
