---
type: inbox
created: 2026-09-27
---
# DP folder audit

`cp-topics/DP/` holds 18 files. **3 use DP**, 3 are DP-adjacent (they have pattern notes), and 12 are solved another way. Codeforces tags list *every* approach anyone used, so a `dp` tag doesn't mean your solution is DP. File by the idea **you** used.

Nothing has been moved. Tick a box once you've decided — move the file with `git mv` so history follows it.

## Uses DP → pattern notes
- [[cp-topics/DP/AtCoder/Frog_1.cpp|Frog 1]], [[cp-topics/DP/AtCoder/Frog_2.cpp|Frog 2]] → [[Memo on index]]
- [[cp-topics/DP/AtCoder/Knapsack_1.cpp|Knapsack 1]] → [[Take or skip]]

## DP-adjacent → pattern notes
- [[cp-topics/DP/Codeforces/B_Kuriyama_Mirai_s_Stones.cpp|Kuriyama Mirai's Stones]] → [[Prefix sums]]
- [[cp-topics/DP/VJudge/Truckloads.cpp|Truckloads]] → [[Split recursion]]
- [[cp-topics/DP/Uva/Alphacode.cpp|Alphacode]] → [[Counting ways]] — **unfinished, doesn't compile**

## Not DP — decide where each belongs
Suggested topic is a guess from reading the code. Your call.

- [ ] [[cp-topics/DP/Codeforces/1975_F.cpp|1975_F]] — shifts every row/column by one → `Constructive`?
- [ ] [[cp-topics/DP/Codeforces/1996_C.cpp|1996_C]] — tries every number in a range → `BruteForce`?
- [ ] [[cp-topics/DP/Codeforces/550_A.cpp|550_A]] — scans for `AB` / `BA` → `Strings`?
- [ ] [[cp-topics/DP/Codeforces/800_A_Beautiful_Sequence.cpp|800_A Beautiful Sequence]] — one pass, `arr[i] <= i+1` → `Greedy`?
- [ ] [[cp-topics/DP/Codeforces/A_A_Wonderful_Contest.c|A Wonderful Contest]] — **doesn't compile** (`j`, `n`, `flag` out of scope) → `Uncategorized` until finished?
- [ ] [[cp-topics/DP/Codeforces/A_Beautiful_Matrix.cpp|Beautiful Matrix]] — Manhattan distance to centre → `Implementation`?
- [ ] [[cp-topics/DP/Codeforces/A_Hit_the_Lottery.cpp|Hit the Lottery]] — largest bill first → `Greedy`?
- [ ] [[cp-topics/DP/Codeforces/A_Iskander_and_Drawings.cpp|Iskander and Drawings]] — longest run of `#` → `Implementation`?
- [ ] [[cp-topics/DP/Codeforces/B_Blackslex_and_Showering.cpp|Blackslex and Showering]] — one pass with a running max → `Implementation`?
- [ ] [[cp-topics/DP/Codeforces/B_New_Year_s_Number.cpp|New Year's Number]] — solved with `n % 2020` → `Math`? (CF also accepts a DP — worth trying both)
- [ ] [[cp-topics/DP/Codeforces/C1_Seating_Arrangement_(Easy_Version).cpp|Seating Arrangement C1]] — counting loop → `Implementation`?
- [ ] [[cp-topics/DP/Codeforces/E_Interesting_drink.cpp|Interesting drink]] — sort + `upper_bound` → `BinarySearch`?
