# Note2

## Cache design
#### Block Placement
- Direct Mapping: Block no. mod lines
- set associative Mapping: Block no. mod sets
- Fully Associative Mapping: Anywhere inside the block
#### Block Identification
**The hardware functioned to make comparison: Comparator**
- Direct Mapping: 
  - Find the potential match using line no and offset bits
  - Compare the tag bits with the tag in front of the line
- Set Associative Mapping；
  - Find the set using Set Index
  - Compare the tag bits with the tag in front of every line in that set
- Associative Mapping
  - Find the potential match comparing all the Tag bits associated to every line simultaneously

if **equal** -> Cache Hit
if **unequal** -> Cache Miss(3C,will be discussed below)

- Capacity Miss: When we are asking for a new block but the cache is full
- Compulsory Miss: the main memory block that are looking for inside the cache has not been accessed yet
- Conflict Miss: the main memory block inside the cache has already been occupied by other block

#### Block Replacement
- If Compulsory Miss & Conflict Miss:
  Replace a Block residing in cache with the new block request
  Move the replaced block in to the next level of Memory Hierarchy
- Cache replacement Policies:
  - Random Replacement
  - First In First Out
  - Last In Fist Out
  - Recency Based Policies
  - Frequency Based Policies
  - Optimal Replacement/Belady's Optimal Algorithm
    - evicts the block that won't be referred for the longest period of time in future
    - look ahead into the future request
    - Since Prediction of requests is impossible, therefore, it can't be implemented

Detail explanation is below:
- direct mapping: no need for decision
- associative and set associative mapping: Cache policies
- *Reduce cache misses*
- *Minimize "miss penalty"*
- $$Miss Ratio = \frac{No. of Misses}{Total No. of Requests}\times 100$$
- $$Hit Ratio = 1-MissRatio$$
--------------------------------------

1. Random Replacement
2. FIFO:
3. Recency Based Policies:
**Age bits** are used to keep track of order of access
    - Most Recently Used
        evicts most recently referred block
        works well with cyclic patterns(e.g. <u>block request</u>:<u>1 2 3</u> 4 5 <u>1 2 3</u> 4 1 2)
    - Least Recently Used
        evicts least recently referred block
        with caches with higher associativity like 8-way, LRU is impractical
    - Pseudo Least Recently Used
        generate approximate measures for replacements
        

#### Write Strategy
- When the processor need to modify data word
**Situation:** 
1.Write Hit: the data word to be modified is already inside the cache
  - Strategy 1: Write through
    - both the cache & Main Memory are updated simultaneously
    - The strategy is used during less write operations,because it takes longer time
    - Pro & Con
        *Reliable and helps in data recovery*
        *Delayed Data Writes*
  - Strategy 2: Write Back/ Write deferred
  
    - Only the cache is updated in real time 
    - the updation is reflected using Dirty bit(set to 1)
      - the info regarding the dirty bit will be kept in the tag directory for each tag directory entry along with its tag information
      - Main Memory is updated when replacement take place
    - Pro & Con
        *Faster*
        *Data recovery is impossible*
 
  当processor想要读或写一个不在cache的block时，这个新块必须要先被加载到cache里。此时cache满了，必须先踢一个旧line来腾地方。如果这个line的dirty bit=1，说明这行数据被改过，那么不能直接丢弃，必须要把这行line的数据写回到main memory，保证更新main memory，然后才把新的block加载进cache里空的这行里
2. Write Miss: the data the proc need to modify is absent from the cache
 -  strategy 1: write allocate
    -  the data to be modified is brought into the cache first, the updated
    -  and then perform either write back or write throug
 -  strategy 2: non-write allocate
    -  do not bother the cache, directly modified in the main memory


