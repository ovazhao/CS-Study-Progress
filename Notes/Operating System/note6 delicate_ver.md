# section 2-process management
## difference between program and process
high level code-> compile -> .exe
if: it is presented in the hardware->program
if: it is presented in the memory(in execution)->process

in  program:
- data
operand
variables
- instruction
Load Add Store SVC BSA etc.


```c
int a,b,c //this is data
b=1;
c=2;
a=b+c;//these are program

```
compile->low instruction

data:
1. static: fixed size known size
2. dynamic； memory allocated at runtime

compile is meant for checking syntactic correctness and generating the code

compiler only decide how much memory allocation should be there

for static data, the memory is allocated at load time
load time: when the program is loaded form disk to memory for execution
for dynamic data, the memory is allocated at run time
## the definition of process
#from_developer_perspective
process is an Abstract data type
each data structure have four part:
<span style="color: red;">definition</span>, <span style="color: orange;">representation</span>, <span style="color: blue;">operation</span>, <span style="color: green;">attribute</span>


##### <span style="color: red;">definition:</span>
1. is program is in execution
2. is program when it get loaded in memory
3. a instance of a program
4. use computer resource
5. is the locus of control of OS
6. animated split

##### <span style="color: orange;">representation:</span>
1. text(code section)
2. data(global variable+static data)
3. heap(dynamic memory allocation)
4. stack(activation recodes of function calls)
<span style="color: grey;">activation record: store [ information and space of local variables + return address] of a function</span>

##### <span style="color: blue;">operation:</span>
1. create(): resource allocation
2. schedule(): the act of selecting process to run on CPU
3. execute()/run(): executing instruction from code section
4. block()/wait(): process will get blocked when it will execute system call/ IO operation
5. suspend(): sometimes we need to move process from memory to disk
6. resume()：if our motive is completed, bring it back from disk to memory
7. terminate(): resource deallocation

##### <span style="color: green;">attribute:</span>
    
**all the things below are stored in PCB**(process control block)
PCB is stored in memory

1. identification: Pid(process id); PPid(parent process id) ; Gid(group id)
2. CPU related: PC(program counter: will point to the next instruction to be executed) ;priority; process state; burst time
3. Memory related: size; limits
4. File related: list of file in use
5. Device related
6. Accounting related

##### PCB
total content of PCB = process Context
pointer
process state
process number
program counter
register
memory limits
list of open file
...
## Process State 
During the process life time. process goes from one state to another
### States
New: 
Ready:
Running:
Block: Process need to perform I/O  / Execute system call
/Wait: leaves the CPU
Terminate:
...
### state transition program
```
                    ┌──────────────────────────────────────┐
                    │                                      │
                    ▼                                      │
              ┌──────────┐                                │
              │   NEW    │                                │
              └──────────┘                                │
                    │                                     │
                    │ ① Create / Admit                    │
                    ▼                                     │
              ┌──────────┐      ② Dispatch       ┌────────────┐
              │  READY   │──────────────────────►│  RUNNING   │
              └──────────┘        &scheduling    └────────────┘
                    ▲                                  │    │
                    │                                  │    │
                    │ ⑤ I/O                            │    │ ③ Interrupt /
                    │   or system call                 │    │   Timeslice
                    │   Completion                     │    │
                    │                                  ▼    │
                    │                            ┌──────────┐│
                    │                            │  BLOCKED ││
                    │                            │  / WAIT  ││
                    │                            └──────────┘│
                    │                return result     ▲    │
                    │                                  │    │
                    └──────────────────────────────────┘    │
                                                            │
                                                            │ ⑥ Exit /
                                                            │   Complete
                                                            ▼
                                                     ┌──────────┐
                                                     │TERMINATED│
                                                     └──────────┘ß

```
1. scheduling: OS making a decision out of many ready process give the right to CPU
2. Dispatch: CPU gains the right to execute the instruction of that process
3. due to ready state: it is multiprogramming OS
4. it is non pre-emptive program because there is no forceful deallocation, process will leave the CPU voluntarily on its own
5. if it is pre-emptive based multiprogramming OS, then after running state, goes back to ready state
#### the program for uniprogramming OS
```
NEW ──► RUNNING ──► TERMINATED
        ▲     │
        │     │
        │     ▼
        │   BLOCKED
        └─────┘

```
NOTE:
- there can be multiple process(infinite) in ready & blocked state but there can be at max one running process for one CPU

#### a new state: suspension
there are too many programs in MM, but OS can handle only 100, so OS will transfer the rest 20 from **MM** to **Hard disk** to improve the performance

- the OS can Suspend the process in the MM, which means the READY RUNNING BLOCKED state can be suspended
- the  most desirable state to suspend: READY
- For example, if a process is waiting for data from a file, it will be in the "suspended block" state until the data becomes available. Once the data is ready, the process transitions to "suspended ready" and can be scheduled to run by the operating system.


```mermaid
stateDiagram-v2
    [*] --> New
    New --> Ready : create
    Ready --> Running : scheduling dispatch
    Running --> Ready : Preempt
    Running --> Terminate

    Running --> Block : I/O services
    Block --> Ready : I/O complete

    Ready --> Suspend_Ready : suspend
    Suspend_Ready --> Ready : resume
    Block --> Suspend_Block : suspend
    Suspend_Block --> Block : resume

    Running -.-> Suspend_Ready
    Suspend_Block -.-> Ready : I/O completion
```