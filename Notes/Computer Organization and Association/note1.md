
# Von Neumann architecture

## functional unit
- processor: the brain of the system
  bus: pne or more wire that run in parallel and carry digital information
- memory: the data are stored
- Input/Output peripheral(devices):

The programs or the set of instructions are stored into the memory(or directly in to the processor) using input devices, so that the processor can execute them.

The intercommuncation between these component: system bus

# COMPUTER ARCHITECTURE

the design of computers, including instruction sets, hardware component and system organization

1. Instruction Set Architecture(指令集架构): machine language interact with computer
2. Hardware System Architecture: logical design and sata flow organization

## Classification:

### Von Neumann architecture
**architecture**
- central processing unit: the brain of the system
  - register: Fastest memory, storing data temporarily
  - control unit: the sequence of execution
  1. timing signal: 
  2. control signals: 
  - alrithmatic and logic unit: circuit do addition subtraction (arithmatic opertation)AND operation(logical operation)
    - output: actual output+signal(zero flag carry flag...)
- Bus
- Main memory
- Input/Output peripheral:

**Traits**
- stored programming computer
- instrution consequently
- instruction and data in same unit memory:Downside: can't simultaneously read an instruction and operate on data

SINGLE-MEMORY PATHWAY

### Non Von Neumann architecture:
- Harvard arichitecture
  two memories : one is storing instructions and the other data
  processor can read an instruction and operate on data at the same time
  faster
- Modified Harvard arichitecture
  Cashes: a small yet fast memory storage

## Classfication:
- SISD: single instruction stream single data stream
  one CPU
- SIMD: single instruction stream multiple data stream
- MISD: multiple instruction stream single data stream
- MIMD:(multiprocessor) Dual core Quad core Octa core

each memory cell can either 0 or 1
when size goes up access time goes up

## 2GHz processor
the frequency is 2GHz--the CPU is fast-- if the memory device is slower, the CPU would be idle
1Giga unit=1^3 mega unit= 1^9 kilo unit= 1^12 unit
1GB = 2^30 Bit =1024 MByte

## The fundamental mode of operation of a processor
the fetch decode execute cycle

### Register
in the processor very small: 16 bit
sequence of flip flops
address register: store memory address and then give it to memory for decoding, after decoding, it will directly go to that particular location and fetch the data
accumulator: store the intermediate result during calculation temorarily and then give to ALU
Programme counter: store the address of next instruction
data register: store data fetched from memory
## instruction cycle
1. fetch stage
CU go to program counter and fethches the next line instruction (which are brought from memory)->instruction register---the program counter incremented
2. decode stage
the CU takes the instruction and decode it
ADD = Operation Code(OP code)
R1 = Operand1(Destination/Data source1)
R2 = Operand2(Data Source 2)
3. execution stage
the processor perform the operation specified by the decoded instruction
The specific action depend on the instruction type
ALU--arithmetic or logical operation
LSU--data movement between register and memory
CU--conditional jump instruction
## memory hierarchy(ranking)
- access time and size
- cost and usage frequency


### Main memory
(DRAM): Dynamic Random Access Memory

### Cache
store the frequently access stuff,small but faster
(SRAM): Static Random Access Memory

### Second memory
retains data/computer program permanetly; larger in capacity
slower
the processor cannot control it directly
e.g. hard disk drive

## Memory interfacing:
connectiong memory units to processor or I/O peripherals
access time, hit ratio

1. all memory levels are simultaneously connected to the processor
   effective/average memory acccess time
   有一个公式
2. interface the memory unit level wise(if the instruction cannot be found in level n, it would go to next level n+1)
   effective/average memory acccess time
   有一个公式

## Processor
- unit of measuring speed: MIPS(million instruction per second)

## Three levels of caches memories

### Level  1
- embeded in the processor
- different cores of the processor have their own L1 caches
- smallest in size, access time fastest

### Level  2
- embeded in the processor
- different cores of the processor have their own L2 caches

### Level  3
- embeded in the processor
- L3 cache is shared by all cores

## related term:
- cache hit:-can find the info in the cache
  -the time "Hit Latency"
- tag directory: a data structure
  -record Tag bits, cache line
  -the number of entries in tag directory = number of cache line
- cache miss: the info is missing in the cache
  -therefore, processor will seek in the next level memeory and place in the cache
  -the time "Miss Latency"

## other term:
- page fault: the info is also missing in the main memory
- page fault service: the OS will go to the secondary memory and brings it back in the main memory
  -page fault sevice time
- page hit:    otherwise

## Locality of reference: decide which data should be prioritizing in the cache from the main memory
- approach1: spatial locality
  the nearby memory location will be referred
- approach2: temporal locality
  the exact memory location would be referred again

## cache memory mapping(映射) techniques:

during execution, the programs are stored in second memory into processes

### Operating System view--
the processes is split into equal size of Page
the main memory is split into equal size Frame
Frame size = Page size
Operating System: divided the processes into pages and then bring them into the main memory

### CPU view---
the main memory is split into equal size Block
the cache is split into equal size Line
Line size = Block size

### Word: the smallest addressable memory unit
byte addressable memory--1 word = 1 byte(the unit)

to address word in the memory, we need bits(Physical Address bits, sometimes the main memory is called physical address space)

PA bits split = log_2^(Main memory size)

- the first _ bits refer the block(block number)

block number = log_2^(number of blocks)

  - whose first _bits are(tag bits)

  - whose last _bits decides which cache line it is going to maping(line number)

    line number= log_2^(number of line)

- and the last _ refer the word(block or line offset)

  block offset = log_2^(block size)

### Mapping: round robin manner
- direct mapping: the main memory blocks are mapped directly onto the cache line
  
  Tag directory size= entry line x Tag size(unit: bit)

**TIP: hex(16)->bin**
  e.g.1100H:
  
  1->0001

  0->0000

### Hardware implementation:
Tag bits = 'n'

Cache Lines = 'l'

n 'l' x 1 MUXs

1 n-bit Comparator

Hit Latency = T(MUX)[negelected] + T(n-bit comparator)

### Limitation:
- Conflict miss
  multiple main memory block to same cache line
- Associative Mapping

### Types of Cache misses
1. compulsory misses:memory block is referenced for the first time
2. conflict misses: refer to the word that got evicted from the cache, got replace by other infomation
3. capacity misses: because of the limited size of cache
...
...

### Solution to conflict misses:
- Associative Mapping: No restrictions regarding the mapping technique--any block can be assigned to the any of the cache lines
  PA bits split include:
  Tag bits--doesn't specify any set of bits for the line number(block number bit are also tag bit）
  &
  Block/Line offset

every line would be connected to a n-bit comparator each
Hit latency = T n-bit comparator +T (OR gate)


## Set associative Mapping
Organize the cache lines into sets

1 set contains k lines"k-way set associative

Number of comparators needed: k

k-way set associative,s-set bits, t-tag bits

Multiplexer needed and type:

$(t \times k) 2^{s}$ to 1 MUXs are needed.

Type of comparator: tag bit


PA bits split include:

- the first _ bits refer the block(block number)
- block number = log_2^(number of blocks)
    Tag bits

    Set no. = log_2^(number of sets"k")

- Block/Line offset
  
##  A comparative study

| Cache Memory Mapping Techniques | Tag bits | Cache lines | Tag Directory Size | Comparators | Comparator Type |
| --- | --- | --- | --- | --- | --- |
| Direct Mapping | 11 | $2^{11}$ | $2^{11} \times 11 $ bits| 1 | 11 bit |
| Associative Mapping | 22 | $2^{11}$ | $2^{11} \times 22 $ bits | $2^{11}$ | 22 bit |
| 4-way Set Associative Mapping | 13 | $2^{11}$ | $2^{11} \times 13 $ bits | 4 | 13 bit |


