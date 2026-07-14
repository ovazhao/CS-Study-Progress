# Primary memory
includes RAM ROM
## ROM read only memory
#### Comparison with RAM
ROM stores firmware(the softwares the set of instructions which are permanently stored in ROM)
Can retain data after power turned off
#### what is programmed in ROM chip
A example of firmware:
- BIOS- basic input output system
loaded in the ROM chip, inside it we have
- bootstrap program
help the OS loaded in the computer's memory(RAM)
  - Power on self test
  1. test BIOS chip and CMOS chip
  2. initialize the processor
  3. test the associated hardware component
  - Execute BIOS instructions
  1. look for the calid BOOT disk where the OS is permenanly stored 
  2. Load OS on the RAM
#### Architecture of DOM
related to digital electronics 
no need to understand so far
#### Classification of ROM
1. programmable ROM 
   1. burning the PROM: can only be programmed once
2. erasable programmable ROM
3. electrically erasable programmable ROM

## RAM -random access memory
a temporary storage

#### DIMM(直插内存模块)
the slots the DAM use to interface with motherboard
#### the architecture of RAM
- two rows of pins
- number of pins: 168, 184, 240, 288
- memory chip inside
  - one transistor and one capacitor each

#### type of RAM
- this is also why RAM is called Dynamic RAM **DRAM**
  - the transistor can contain binary bits as long as the associated has charge, therefore, periodic recharging is needed for value retention 
- next type: synchronous DRAM **SDRAM**
  - they run synchronously with the system clock
  - can transfer 64 bits (8 byte) in one clock cycle---DIMMs have 8-byte wide datapaths


## Rambus Inline Memory Module RIMM
created by rambus incorporation

- RDRAM--rambus dynamic RAM
  - two notches
  - number of pins: 184
  - faster than RIMM
  - data path 2 bytes
- DDR--Double data rate
  - can transfer double amount of data in 1 clock cycle
  - number of pins: 184
  - clock speed: 333 MHz
  - data path: 8 bytes
  - Bandwidth：$333 MHz\times 8 bytes =2700 MB/s$
- DDR2：
  - number of pins: 240
  - clock speed: 800 MHz
  - data path: 8 bytes
  - band width:$800 MHz\times 8 bytes =6400 MB/s$
- DDR3: 
  - number of pins: 240
  - lesser power consumption
- DDR4:
  - number of pins: 288
  - bandwidth: $4266 MHz\times 8 bytes =34100 MB/s$