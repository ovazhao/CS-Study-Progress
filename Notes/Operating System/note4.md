# Threads
a basic unit of CPU utilization
## comprises: Thread control Block
a thread ID
a program counter
a register set
a stack

it share with other threads belonging to the same process its information

traditional process: a single thread
multiple thread---perform more than one task at a time

## benefit of multithreaded programming
### responsiveness
### resource sharing
code data file are sharing
### economy
### utilization of multiprocessor architecture
threads utilize multiprocessor

## multithreading model and hyperthreading

### types of threads
1. user threads
2. kernel threads

### multithreading
### ways to establish the relationship between those two threads
#### 1. many to one model
many user threads are accessing one kernel thread

thread management is done by the thread library in user space


limitation:
the entire process will block if a thread makes a blocking system call
because one thread can access the kernel at a time, multiple threads are unable to run in parallel on multiprocessor

#### 2. one to one model
one user thread are accessing one kernel thread

will not affect other processor
#### 3. many to many model(best)
multiplexes many user level threads to a smaller or equal number of kernel threads

when a thread performs a blocking system call, the kernel can schedule another thread for execution


### hyperthreading or simultaneous multithreading(SMT)
### fork() and exec() system call
mainly in linux system

fork(): create a duplicate, separate process
the new process has a new process ID

exec():the program will replace the entire process
has the same process ID

#### issue
if one thread in a program calls fork(),does the new process duplicate all threads or only the thread that single thread?
#### solution
some UNIX system have tow versions of fork().
1. if does not call exec()after forking
duplicate all the fork
2. if exec()is called immediately after forking
tip:exec()will replace all the threads in the process



#### issue-thread cancellation

target thread: the thread that is to be cancelled

if multiple thread are concurrently searching through a database and one thread returns the result, the remaining threads might be canceled

when stops a web page from loading any further, all threads loading the page are canceled

