# KnobQ8Neo
Neo2 Keyboard layout for Keychron Q8 Alice with knob (we love knobs).

# But why ?
Custom keyboard layouts are rare, hard, and often misunderstood....  
There's a neo2 keyboard layout in Linux and MacOS, but it's not optimal on either system (it's obviously so much worse on a mac, but it's not great on Linux either). My main problem is that you can't use any keyboard shortcut that uses Ctrl-C on the terminal.
The terminal captures Ctrl-C and tries to send SIGINT to whatever process is running.  
Also Neovim in particular, but there are others, don't handle custom keyboards well at all. Obviously vi and its decendents were made for navigation with the home row of the keyboard, which kinda sucks if you don't have hjkl next to each other. Remapping things works, but becomes more and more work the more shortcuts you're trying to use.
And then they broke how langmap works for no good reason....  
So now Ctrl-G, G is a combination that you can use that uses 3 different keys.... It's not great. 

This layout uses a layer for control instead of using control as a modifier and sends ctrl-<letter> for key combinations with control. Those combinations use the qwerty layout. So with this layout Ctrl-Z/X/C/V is still on the bottom row of the keyboard, while, without modifiers, the layout is the same as neo2 (layers 1-3). 

# Problems
This is the first draft. Layer 3 is not complete. I also don't know if there will be problems with having Ctrl not be a modifier.... 

# Acknowledgements
 * I have stolen and then modified the layout from [here](https://github.com/Brieden/Ne0Chr0n).
 * They stole it from [here](https://github.com/yeldiRium/qmk-ergodox-ez-neo2).
 * Obviously the base layout is [the neo2 keyboard layout](https://en.wikipedia.org/wiki/Neo_(keyboard_layout)).
