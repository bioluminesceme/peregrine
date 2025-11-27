# Ordering the board 

I recommend JLCPCB, and I highly recommend you order this so that **they** will solder those tiny surface mount diodes for you.
(if you're over 40, soldering those is not a very enjoyable experience)

This will cost about $90 shipped for 2 sets of 5 (5 right halves, 5 left halves), so about $18 per full keyboard in PCB costs (including shipping and them soldering the tiny things on).

- [ ] ToDo Add screenshots

# Soldering


- Solder on the surface mounted Choc hotswap sockets. Pretin the pads, put the part on top and either touch the solder on the pad with the edge of your soldering iron so it melts, or heat the leg of the socket until the solder melts -- gently push on the socket with something that won't burn your fingers until that side is flush with the surface. Repeat for the other side.
- TRSS, solder in the connector
- Install the firmware on the microcontroller first! This way you can check that the microcontroller is working (LED comes on and your PC dings when you connect it, and firmware installation succeeds). Then solder in the microcontroller pin things that come with it, then solder the microcontroller to that. 

- then push the 2 metal legs of your choc switches into the socket holes
- and add some keycaps

- connect the TRRS cable between both halves first.
- then plug the board in, start Plover and type away!

- [ ] ToDo Add photos

## Case

- The 3D files are in 00PCBsurfacemount\3dmodels this includes the ready to print 3mf, and a f3d autodesk fusion file that I hope will let people make easy changes
- There are 5 heatset holes for if you want to screw the board to the case, but honestly the friction fit is tight and more than enough to keep the board in place
- There is a hole in the bottom of the case for a 1/4-20 brass heatset thing so you can mount the board to a tripod/chair/whatever.
- hotglue the reset button in place so that you can press it through the hole, but also so it does not stick out and gets pressed accidentally. (you will only need it to flash firmware)
- Tested with a Bambu A1 on default/factory settings with light blue and light green Bambu matte filament. No issues at all.


- [ ] ToDo Add photos of the finished board
 