# So what we got here then? 

Behold. Here are some really basic PCBs that only support kailh choc low profile switches.

Currently they mostly have 36 keys (or less) which I consider to be as small as a keyboard can be without resorting to chording or other shenanigans.

Proceed with caution, and a little apprehension.

The splits are heavily influenced by the following keyboards, and actually based on foostan's corne-light pin layout and pcb. 

* 5plit
* Gergoplex
* crkbd
* Kyria
* Jian/Jorne/Jorian

## Split keyboards

### Beak
[link](beak)
Has a curve

### BeakX
[link](beakX)
Has a better curve

### Crab10x10
[link](crab-10x10)
Basically a 5plit, with serial instead of i2c.

### Crab-DIO
[link](crab DIO)
34 keys, no diodes approx same layout as other crabs.

### Crab-harbour
[link](crab-harbour)
36 keys in grid form, with pinky row dropped one whole row.

### Crab-ortho
[link](crab-ortho)
36 keys in grid form

### Crab
[link](crab)
This was the first pcb, sort of like a gergoplex with promicros

### Nodi
[link](nodi)
34 keys no diodes.  

## Not even split keyboards.

### Macro 1
[link](macro1)
Five keys one encoder. 

### Macro 3
[link](macro1)
Six keys two encoders. 

### Noip
[link](noip)
Simplist asetniop board.


## Caseless

These are all supposed to be used caseless and have no holes for cases or anything fancy.

## Firmware

Most split pcbs can use the crkbd firmware, but not the ones with no diodes. 

## Build

All splits are asymmetric builds, the controllers are facing down on the left side and up on the right (see picture).

Only one screen (if any at all) can be used; on the left (which covers the flat back of the microcontroller) - the right side already has cool components showing, one screen is unnecessary, two screens is just silly. 

## FAQs

Aren't all the splits basically the same board with the keys shuffled around? Yes.
