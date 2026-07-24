# file system
CPU is an electronic device
disk is an electromechanical
## disk physical structure
platter
       > read/write head
track
sector
sector number&sector size

disk sector: the same sector number of all platter
cluster: a group of one/more adjacent sectors

disk I/O time=seek time+rotation latency+transfer time
seek time : find the track
track-track time: the time to take to seek from one track to another
rotational latency: rotate to the sector
transfer time: the time use to transfer the data
## logical structure of disk
disk is devided into partitions
1. primary: c:(bootable data(operating system)+extra data+software)
2. extended/logical drive:d:(non bootable data+software)
   
MBR(master boot record)---c:
1. partition table
2. boot loader

How the computer starts:
1. switch on
2. POST(power on self test): all the devices electronically active?--hardware test
3. BIOS(basic input output system): initializes IO devices including disk
4. bootstrap:loads MBR into RAM and hands over the control to boot loader
5. boot loader in MBR reads partition table and display options if available
6. boot loader will load the kernel program from disk into memory
7. execution of kernel will load other OS modules (dispatcher virtual memory management etc.) from disk into memory

partitioning
boot control block: sector of partition that contain the boot program
partition control block: gives complete picture of partition
directory structure
data blocks: including the application, some operating system data

## file vs directory
file: abstract data type(definition, representation, operation, attribute)
directory: contains the information(metadata) about files, special file which also contains data other files

representation :
1. flat(series of byte)
2. record(series of records)

## attributes of file are stored in file control block

every partition contains directory structure
## direcrot structure
### single directory for all users
simple to implement
lots of searching time
name conflict problem
bad organization
### two level directory
seperate directory for each users

master file directory: User1 2 3 4
efficient searching
path involved

can have same file name for different user
no grouping capability

### multi level directory
subdirectories within other directory
two structure:
- tree structure
- general graph directory(can have cycles)
- directed acyclic graph(for file sharing)


to serach a file we may have to traverse the directory for that
two algorithm:


## file system implementation
layer file system:

application program--execute i/o statement
logical file system--uses the directory structure to provide the file organization module with all information
file organzation module--handles the files and their logical blocks and physical blocks
physical file system--issues i/o commands to the device drivers to read/write physical blocks on the disk
i/o control-- device driver and interrupt handlers
devices---actually perform i/o operation

## allocation method
### contiguous 
1. internal fragmentation
2. external fragmentation
3. increasing file size is not possible
4. type of access: sequntial like an array or random->fast
### non contiguous
create a linked list of data blocks
1. internal fragmentation
2. external fragmentation is reduced
3. type of access must be sequential->slow
### index
each file has index block
index blok holds address of data blocks of file
there is no block-to-block link, index itself is pointing to all blocks
## disk free space management algorithm
suppose we have:
disk size
disk block size
disk block address

the number of blocks?
- $\frac{disk size}{block size}$ correct, the free space available
- $2^{DBA}$ maximum size


linked list of free blocks
free list---linked list of blocks containing addresses of free blocks
bit map/vector--associate a binary bit with each block(free:0 in use:1)
counter method---

## disk scheduling(I/O scheduling)
just like CPU can serve one process at a time, similiarly the disk can only serve one I/O request
just like short term scheduler, disk scheduler alo exist

### disk scheduling algorithm
first come first serve---no starvation
shortest seek time first