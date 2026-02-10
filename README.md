# Gametest
A very simple game console based on the Arduino Nano. It has a D-pad, two buttons, gyroscope and photo resisotrs


What is this project?

This is a simple handheld Arduino Nano–based video game console.
It features:

6 physical buttons (D-pad + A/B)

a 1.44” SPI 128×128 display

two photoresistors

a GY-521 gyroscope/accelerometer module

The software is structured in a modular way to support small retro-style games and experiments with different input methods.



Why did I make it?


I made this project out of personal curiosity and enjoyment.
I wanted to build something myself from scratch: hardware, electronics, and software... And a small game console felt like a motivating way to do that. It was not too simple and not too hard to do.

Even without experience in full game engines, this project allowed me to explore game logic and interaction at a low level, which I found very satisfying.






Through this project I practiced and learned:

C++ programming in an embedded environment

Object-oriented and modular design (separating input, movement, collision, and display logic)

Basic game logic and state management

File organization and project structure

Working with hardware inputs (buttons, sensors)

Using SPI displays

Interfacing with sensors (GY-521, photoresistors)

Soldering and basic electronics

Debugging on real hardware with limited resources







The project is in an advanced prototype stage.

It currently displays a retro-style title screen and supports core input and rendering systems.
Earlier versions included simple games like Pong and Snake, which I plan to rewrite using the current modular structure.

Future plans include experimenting more with the gyroscope and photoresistors to create alternative control schemes and gameplay ideas.
