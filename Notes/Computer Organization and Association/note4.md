# Secondary memory
the type of data generally stored in the secondary memory:
OS, other system softwares like device drivers, application programs etc.
the processor is unaware of the existence of Secondary memory

secondary memory is managed by the operating system
using the virtual mapping technique,
communicates with the main memory through pages
## types of secondary memory
#### removable auxiliary storage
- magnetic tape
  - technology: magnetic wave recording
  - recorded and read using Tape drives
- floppy disk
  - the hub(轴心)---disk needs to rotate
  - the disk is subdiveded into tracks
  - the track is subdivided into sectors
  - a sector holds the amount of data that the floppy drive could read at a time
  - fun fact: floppy drives are called drive A and B, that is why the hard drives stars from C
- the optical disk
  - similar to optical disk
- memory card
  - use the concept of flash memory
  - types in dimension: SD(secure digital), miniSD, microSD
- Flash driver
#### fixed auxiliary storage
##### Hard disk drives
- interface with the motherboard using the SATA(serial Advanced Technology Attachment) cables.

**the architecture**
- disk pack: a collection of multiple platters/ magnetic disks
  - each platter are subdivided into concentric circles: the track
  - track is subdivided into sector
  - each sector can store one page--- the standard size of every page is at least 512 bytes
  - intersector gap(format): keep track of info like the sector number, track number, whether the sector is full or free for use
- read or write operation
  - seek time
  - rotational delay
- the recording density: data byte are written further from one another larger tracks and closer in case of smaller track
- rotational speed
##### Solid State Drives
no moving parts quieter and efficient
- interface with the motherboard using the SATA(serial Advanced Technology Attachment) cables.

**the architecture**
- logic board
  - cache chip
  - controller chip
  - NAND memory chip