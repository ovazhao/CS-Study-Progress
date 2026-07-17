# process management
- understand how a program is developed
1. write the program the high level language
2. use the compiler to covert it into an binary executable code
3. os will help loaded into to memory
## process
a process can be thought of as a program in execution

## thread
is the unit od execution within a process, one process can many threads

## process state
when a process is executed, it changes the state
1. **new** the process is being created
    - admitted---ready
2. **running** instruction are being executed
    - exit---terminate
    - interrupted---ready
    - wait for IO---waiting
3. **waiting** the process is waiting for some event to occur
    - IO completion---ready
4. **ready** is created but yet not running, is wating to be assigned to a processor
    - scheduler dispatch
5. **terminated** has finished execution

## process control block
each process is represented in the operating system by a Process control block
what we have in the block
- process ID
- Process state
- program counter: the address of next line that has to be executed
- CPU register: the particular register need to be used
- CPU scheduling information: determine the priority, how much time has to be allotted to the process
- memory management info: the memory that need to be used
- accounting information: keeping all the resources being used by a particular process for its execution
- I/O status information

#### process scheduling
the object of **multiprogramming** is to hace some process running ar all times to maximize CPU utilization
the objective of **time sharing** is to switch the CPU among processes so frequently that users can interact with each program while it is running
- to meet these objectives, the process scheduler selects an available process for program execution on the CPU, all these thing will be determined by process scheduling(happened in multiprocessor system)
## content switch
interrupts cause the operating system to change a CPU from its current task and to run a kernel routine
so that CPU can resume the process
context: it consist of the current state of the process
**state save** and **state restore**
## operations on processes
#### process creation
a process may create several new processes, via a create-process system call
#### process tree
1. the parent continues to execute concurrently with children
2. the parent waits until some or all of its children have terminated

in terms of the address space of the new process:
1. the child process is a duplicate of parent process(it has the same program and data as the parent)
2. the child process has a new program loaded into it

#### process termination
a process terminated when it finishes executing its final statement and asks the OS to delete t by using the exit() system call

at that time, the process return a status valueto its parent process via the wait() system call

all the resources of the process including physical and virtual memory, open file and IO buffers are deallocated by the OS

**termination can occur in other circumstances as well**
a process can cause the termination of another process via an system call
only parent process can kill its children

**for the following reasons:**
- the child has exceeded its usage of some of the resources that it has been allocated(the parent have a mechanism to inspect the state of its children)
- the ask assigned to the child is no longer required
- the parent is exiting, and the operating system does not allow a child to continue if its parent terminate

## inter process communication(IPC)
<span style="color: red;">local process communication</span>

processes executing in the OS are either independent processes or cooperating processes
independent: they cannot affect or be affected by the other processes executing in the system
cooperating processes: they can affect or be affected by the other processes executing in the system
--in case of cooperating process we need interprocess communication(IPC) htat will allow them to exchange data and information

there are 2 fundamental models of interprocess communication IPC:
### Shared memory system
in the shared memory model, a region of memory that is shared by cooperating processes is established
processes can then exchange information by reading and writing data to the shared region(created by in process initiating the communication)
other processes that want to communicate has to attach it to their address space
normally, the OS tries to prevent one process from accessing another process's memory
so other processes need to remove the restriction
#### producer consumer problem
one solution to the producer-consumer problem uses shared memory
to allow producer and consumer processes to run concurrently, we must hace available a buffer of items that can be filled by the producer and emptied by the consumer
this buffer will reside in a region of memory that is shared by the producer and consumer processes

**two kinds of buffer**
buffer resides in the region of shared memory
unbounded buffer: unlimited size, does not need to stop and wait unless the buffer is empty
bounded buffer: assumes a fixed buffer size. the consumer must wait if the buffer is empty
and the producer must wait if the buffer is full

### message passing system
in the meaasge passing model, communcation takes place by means of messages exchanged between the cooperating processes
send a message to the kernel and the kernel send it to another process

#### it is useful in a distributed environment
the processes may reside on **different** computer connected by network

#### two operations:
send message
and 
recieve message
**message can either fixed or variable size**
fixed size: the system level implementation is straightforward
unfixed size:

a communication link must exist between two processes to communicate
there are **several methods** for logically implementing a link and the send()/recieve() operations:
- direct or indirect communication

    **issue**: naming
    processes that want to communicate must have a way to refer to each other

    <u>under direct communication</u>-Each process that wants to communicate must explicitly name the recipient or sender of the communication

    ~send(P, message)-send a message to process P
    ~receive(Q, message)-receive a message from process Q

    exactly 2 processes and 1 link
    <u>under direct communication</u>-only the sender names the recipient; the recipient is not required to name the sender
    ~send(P, message)-send a message to process P
    ~receive(id, message)-receive a message from any process; the variable id is set to the name of the process with which communication has taken place
    **disadvantages: if the name/identifier of the processes is changed may need to examine all the processes definition associative with them**
    <u>indirect communication</u>-
    the message are sent to and received from mailboxes(the mailbox may be owned either by a process or by the OS)
    each box has unique identification
    ~send(A, message)-send a message to mailbox A
    ~receive(A, message)-receive a message to mailbox A
    1 mailbox 2+processes
    a pair of process many links
    one link one mailbox
- synchronous or asynchronous communication
    **issue**: synchronization
    message passing may either be blocking(synchronous) type or nonblocking(asynchronous) type

    blocking send: the sending process is blocked until the message is received by the receiving process or by the mailbox

    Nonblocking send: the sending process sends the message and resumes operation

    Blocking receive: the receiver blocks until a message is available

    Nonblocking receiver: the receiver retrievers either a valid message or a null


- automatic or explicit buffering
    **issue**: buffering
    zero capacity: the link cannot hae any messages waiting in it
    bounded capacity: the queue has length n, at most n messages can reside in it. If the buffer is no full, the sender can continue execution without waiting, if the link is full, the sender is blocked
    unbounded capacity: the length is infinite, the sender never blocks
### sockets-specifically used in client server system
a socket is defined as an endpoint for communication

a socket is identified by an IP address concatenated with a port number

the server waits for incoming client request by listening to a specified port 

server implementing specific services **such as telnet, ftp, http** listen to well known ports
- a telnet server listens to port 23, an ftp server listens to port 21, a web or http server listen to port 80

all ports below 1024 are considered well known, we can use them to implement standard service, therefore port num assigned to process must be greater than 1024

## remote procedure calls(RPC)
<span style="color: red;">communication between different system connecting via network</span>

RPC is a protocol that one program can use to request a service from a program located in another computer

- it is similar with IPC in many ways
- we must use a message based communication scheme to provide remote service

### procedure
client invoke a remote procedure
RPC calls the stub(hides the detail that allow communication)
the stub marshal the parameters into a form can be transmitted over network
the stub transmit a message to the server using message passing 
the server side stub receives this message and invokers the procedure on the server
return value


### issues
differences in data representation on the client and server machine
### solution 

machine independent representation: external data representation

### issue
network errors

### solution 
the OS must ensure the messages are acted exactly once, has a send an acknowledgement 

### issue 
the process is addressed by its memory address and a port number
although the client can make procedure call by name, but the server and client reside in different system they don't have shared memory, so other side cannot access the port name

### solution
1. compile time binding
2. rendezvous mechanism matchmaker daemon

