# user mode kernel mode
user mode: application
kernel:OS program

CPU->register:processor status word
when we need some OS service: change to user mode to kernel meode

mode shifting is necessary

API:application programmer's interface
SCI: system call interface
```
in a c program
f(a) user defined function
printf("") defined in the library files(.lib)
```
both are executed in USER MODE
OS service routine or system calls are in KERNEL mode

compile is not the part of OS
```
main()
...
f();
fork()
```
f()->compile->unpriviledged instruction
fork()->compile->supervisory call(SVC):priviladged insterction
OS routine is accessed through API(fork)
**what happen now**
1. OS routine->SVC-run->software interrupt->Interrupt Service Routine(ISR)

2. ISR change the mode bit in psw, change to kernel mode


OS maintains a table in kernel known as DISPATCH TABLE(data structure in RAM) tell all the address of service OS provide

3. ISR get fork()address-> execute fork's instruction->executed->go to psw and convert the bit mode







