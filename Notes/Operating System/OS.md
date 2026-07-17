# operating system-- Introduction and Background

## What is OS
1. an interface between user and computer hardware
2. also provide a basis for the application program
when there is a high level statement(macro operation)->compile->micro instruction

Hardware:Resources like CPU,Memory, IO device
Software: System software and Application Programm

-Application program: used to perform a specific task used by the user
word processor spreadsheet compiler text editor web browser
-User: use software
```
**Prerequisite Knouwlwdge**
hardware contains: i/o, cpu and memory
- CPU
  - register: store data like micro instruction
  - control unit(CU) is responsible for sequential execution
    - timing signal and control signal 
  - arithmetic and logic unit(ALU) 
  main units that contains out arithmatic and logical operation
  consist of adders, substractors etc
```

when program is loaded in memory for execution  c file ->compiler->exe. which contains instruction-OS-> main memory->CPU does sequential execution of the instruction

## Type of OS
Batch OS: load the work off line
Time sharing OS
Distrubuted OS
Network OS
Real time OS
etc

## Function of OS
Allocation od resources to different users(we have limited hardware) to provide an efficient usage
Management of Memory, Security etc

## some importatn terms
1. bootstrap program
   the first program that runs when a computer is powered up
   load the OS and star executing the system
   locate the OS in secondary memory, load the OS kernel into main memory

2. interrupt
    CPU is always work, the hardware and software give(**interupt**) the CPU 
    Hard ware trigger an interrup by sending a signal through bus to CPU

3. System call
  if the software is triggering the interrupt, we call it 


#### when the CPU is interrupted
it stops what it is doing and 
immediately transfers execution to a **fixed location**.(The fixed loacation usually contain the starting address where the
**service routine**(what the interrupt want to do is written in this routine) of the interrupt is located)
continue the interrupted computation


## OS IO structure
Storage-- what we called secondary memory
it is only one of many typed of I/O devices within a computer
each device is connected to the **device controller**(maintain a set of register&local buffer storage) which are connected to a common bus to get access to the memory
OS have a **device driver** (understand the device controller and presents a uniform interface to the device to the rest of the OS)for each device controller

**working of an I/O Operation**
CPU start an I/O operation, the device driver loads the appropriate registers within the device controller
The device controller,examine the contents of these registers to determine what action to take
the controller starts the transfer of data from the device to its local buffer(缓冲区)
the divice controller starts informs the device driver via an interrupt taht it has finished the operation
the device driver then return control to the OS

```
The above process is only fine for moving small amount of data
to solve this problem, direct memory access is used
```
After setting up buffers pointers and counters for the I/O device, the **device controller** transfers and entire block of data directly to or from its own buffer storage to **memory**, no intervention by **CPU**
only one interrupt is generate per block, to tell the **device driver** that the operation has completed


## operating system structure
Operating system must have the commonalities:
#### 1. multiprogramming
a single user cannot keep either the CPU or the IO device busy at 
multiprogramming increase CPU utilization by organizing jobs(code and data)

#### 2. time sharing(multitasking)
CPU executes multiple jobs by switching among them
switches occurs frequently that the users can interact with each program while it is still running
a time-sharing operating system allows many users to share the computer simultaneously
it uses **CPU scheduling** and multiprogramming to provide each user with a small portion of a time shared computer
a program loaded into memory and executing is called a **process**

## Operationg System Service

#### user interface
command line interface(CLI)
Graphical user interface(GUI)
user provide text-based commande using keyboard
the command interpreters are called **shell**
e.g.
BASH

- how the interpreters perform the command
  1. the code for performing a certain task is included in the interpreter itself
  2. the interpreter does not contain any code, the codes are contain in certain programme, the interpreter directly call the program
#### program execution
user should be able to run and execute the program or softwares
load into memory and run
#### I/O operation
OS is in between user and the IO devices
#### file system manipulation
control files and directories in system that has to be used 
create delete modify search
access restriction control the access of certain files
#### communication
many process are present,the precess needs to communicate with each other,so that they can synchronize with each
such communication may occur between processor
#### error detection
error in CPU IO device etc
OS needs to detect error
not just break down completely and cease the computing ability completely
it should maintain correct and consistent computing 
#### resource allocation
resource: CPU, IO devices, main memory, files
OS should allocate the required resource to the process which are asking for the resource
#### accounting
keep track of which user what and how many resource
#### protection and security
control outside access

## system calls
system calls provide an interface to the services made available by an Operating System
is a programmatic way through which we shifts from user mode to kernel mode
#### two modes of operation in which a program can execute
1. user mode
that program does not have the access to hardware...

2. kernel mode
direct access to many of the resource
when it crash the whole system goes into "halt"
**mode shifting**
when a program need to access to some resources it makes a **call** to the OS, switch from user mode to kernel mode





#### type of system call
1. process control
2. file manipulation
3. device manipulation
4. information maintenance
5. communication

## system programs
provide a convenient environment for program development and execution
#### type of system program
1. file management
2. status infomation
3. programming-language support
4. program loading and execution
5. communication
e.g. web browser, word processor, spreadsheet, database system, game
