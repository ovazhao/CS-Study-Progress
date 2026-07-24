# IPC and process synchronization
IPC: inter process communication
if two process want to communicate, there should be a shared media:
- pipe: =file in hard disk(can be a simple global variable)
if inside one process, two entities want to communicate, there should be a shared media:
- entities


type of process
1. independent
2. coordinating

- lack of synchronization in IPC will cause the following problem:
  1. inconsistency
  2. data loss
  3. deadlock: infinite blocking of process on waiting
## definition of sync
to reach sync: there should be agreement between entities
process sync: agreed upon protocol in IPC environment to avoid inconsistency, data loss ot deadlock
### type of synchronization
1. competitive: process compete for the accessibility of a shared resource
e.g. two process wants to update the value of a shared variable at the same time

2. cooperative: executor of one  process affects the other process
e.g.
#### producer consumer problem
producer attempts to place the data item onto buffer
consumer attempts to consume the data item from buffer
condition: if the buffer is empty, the consumer process cannot consume; if the buffer is full the producer process cannot produce
#### lack of sync
1. competitive:
cause: inconsistency and data loss
2. cooperative:
cause: deadlock

Note: an application in IPC environment may involve either cooperation or competition or both
## race condition
#### implementation of producer consumer problem
```c
define the size of the bounded buffer N; int count = o; // the no. of data items in buffer
int buffe[N]
while{
    itemp = produceitem();\\producer produce item
    while(count == N);\\before placing the item, need to check if it is full: busy waiting
    buffer[in]=itemp;
    in = (in +1)%N;\\jump to the next empty slot
    count++;

}

```
```c
define the size of the bounded buffer N; int count = o; // the no. of data items in buffer
int buffe[N]
while{
    while(count == 0);\\need to check if it is empty
    itemc = buffer[out];
    out = (out +1) % N;\\jump to the next empty slot
    count--;
    consumeitem(itemc);
}

```

### necessary condition for sync condition
1.  critical section: part of program where shared resource are accessed
in program:
- critical section: shared variable
- non critical section: local variable
2. race condition: situation where processes are trying to access critical section and final result depends on the order they finished their update
3. preempted prematurely

solution:
sync mechanism/security guard
< non critical section>
sync mechanism:
entry section 
critical section
exit section
< non crtical section>
note: process running in user mode can get preempted anywhere any number of times after completing any instruction

### necessary condition
1. mutual exclusion
no two process should be in critical section in the same time
2. progress
non interested program should not block the entry of other progress
3. bounded waiting
no process has to wait to access critical section. there should be a bound on no. of time a proecess is allowes to enter critical section before other process request is granted

if those condition is not fulfilled:
1. mutual exclusion--inconsistency+loss of data
2. bounded waiting--starvation
3. progress--unfair solution

## synchronization mechanisms
the tries we do to solve the problem above


busy waiting(spin lock)
non busy waiting(blocking)
sub-categorized into:
- software< user mode>
  - lack variable
- hardware< special instrucion>
- os-based< kernel mode>

Assumption:
process enters critical section for finite amount of time--process can never get struck in critical section
if a process is in entry section then it means it is interested in the critical section 
a process is said to have left critical section only when it has executed its exit section
a process can get preempted from CPU while executing either section  on critical section or exit section
### the solutions
#### lock variable
1. busy waiting solution
2. software solution implementable at user mode
3. multi process solution

lock = 0(critical section is free) 
process get into the critical section
lock ->1(critical seciton is in use)
exit:lock->0

``` c
int lock = 0;
void process(int i){
    while(1){
        <non critical section>
        while (lock == 1);       \\busy wait
        lock = 1;                \\entry
        <critical section>
        lock==0                  \\exit
    }
}
```
***is mutual exclusion gauranteed
preemptive may happen in between the entry section so mutual exclusion cannot be fixed
***is progress guaranteed
yes
***is waiting bounded
no it is busy waiting, CPU cycle gets wasted
#### strict alternation
1. busy waiting solution
2. software solution implementable at user mode
3. two process solution

``` c
int turn = rand(0,1);
void process(0){
    while(1){
        <non critical section>
        while (turn == 1);       \\keep on checking the value,busy wait
        <critical section>
        lock==1;                 \\exit
    }

void process(1){
    while(1){
        <non critical section>
        while (turn == 0);       \\keep on checking the value,busy wait
        <critical section>
        lock==0;                 \\exit
    }
}
```
***is mutual exclusion gauranteed
yes
***is progress guaranteed
uninterested progress never enters the critical section->it will never change the value of turn->the other section can never get into the critical section-> progress is hindered
***is waiting bounded
yes, one process can not get into the critical section two times in a row

the value of turn need not to be equal to 0/1 it can be any i,j
generalization:
int turn = rand (i,j)
#### peterson's solution
1. busy waiting solution
2. software solution implementable at user mode
3. two process solution
4. **combination of lack variable and strict alternation**