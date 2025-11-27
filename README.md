# Peregrine Split Steno Keyboard 

 
[![Donate](https://img.shields.io/badge/Ko--fi-Donate-2ebde1?logo=kofi&logoColor=white)](https://ko-fi.com/bioluminesceme)


A wired, split, handwired stenography keyboard with low profile Choc keys (close together to make hitting multiple keys at once easier/more comfortable)
 

![Peregrine v1](/images/peregrine.jpg)
![Peregrine with PCB boards](/images/peregrine-pcb-board.jpg)

- [ ] (to add, Javelin version photo, green case, when done)


## Keymap layout

This keyboard has the default steno keyboard layout, but to make my life easier I have added 2 extra keys to the left half. This way both halves are symmetrical.
The extra keys are assigned to COPY and PASTE by default.

You can assign this to different keys in keymap.c (replace LCTL(KC_C) and LCTL(KC_V)) and then rebuild the firmware.

 
```txt
 ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
 │CPY│ S │ T │ P │ H │ * │       │ * │ F │ P │ L │ T │ D │
 ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
 │PST│ S │ K │ W │ R │ * │       │ * │ R │ B │ G │ S │ Z │
 └───┴───┴───┼───┼───┼───┤       ├───┼───┼───┴───┴───┴───┘
             │N1 │ A │ O │       │ E │ U │N2 │
             └───┴───┴───┘       └───┴───┴───┘

```

------

# Free files!

All the files are free, and come with beginner-friendly instructions.

You have the option to 

- [handwire](00handwire/HANDWIRE-INSTRUCTIONS.md)
- [use PCBS](00pcbs/PCB-SURFACEMOUNT-INSTRUCTIONS.md)

Handwiring is the cheapest option.

------

# Working on
- [x] Make a proper board in KiCAD (with thanks to the helpers in discord!) 
- [x] boards ordered 
- [x] board tested (and working!)
- [ ] Javelin (wish me luck)

------

# Will I sell this?
- No. I have no plans for a shop.
- I will have spare PCBs that I'm happy to sell so you don't have to order the minimum quantity (2x5) PCBS. If I do, I'll list them here. 
- I may have enough parts to sell a handful of presoldered boards (you add the Choc switches and keycaps). If I do, I'll list them here.
- First come first serve.
- I'm in the Netherlands so shipping might make this option quite expensive for some people compared to ordering them yourself
- Hand wiring is still a good option, and the cheapest way to make one.

# Can you sell this?
- Yes! 
- This repo has everything you need to make your own. 
- Just pay me 10 percent of your profits after the costs of the parts (not labor), for each sale.
- If you create a wireless version please let me add those files and instructions to this repo.
 
 
[![Donate](https://img.shields.io/badge/Ko--fi-Donate-2ebde1?logo=kofi&logoColor=white)](https://ko-fi.com/bioluminesceme)

*20% of donations will go to MECFS Research by https://www.omf.ngo*

------

## HELP!

- Sorry, I will not be providing any technical support. 