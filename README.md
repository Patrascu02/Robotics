<h1 align="center" style="font-size:20">
Introduction to Robotics Course
</h1>

<p align="center">
Everything related to the course.
</p>

<p align="center">
  :microscope: <a href="#about">About</a>&#160;
  :pencil: <a href="#content">Content</a>&#160;
  :paperclip:<a href="#resources">Others</a>
</p>

## About

#### Course Objectives:
1. Development of POC (Proof of Concept) and Final Product Development Skills
2. Encouragement of Critical Thinking and Problem Solving
3. Programming Skills Development
4. Understanding Basic Robotics Concepts
5. Understanding and Using Microcontrollers

Professor: [Dan Tudose](https://github.com/dantudose)

Laboratory tutor: [Radu Ioan Nedelcu](https://github.com/Pepi100)

</br>

## Content

### PROJECT 1: Electric vehicle charging system
<details>
<summary>TASK</summary> 
 
  
<img src="Tema1/Tema1/Media Tema1/Screenshot 2024-10-23 210012.png" align="right" alt="Diagram" width="400">



#### Components Used

- 4x LEDs (to simulate the percentage of charge)
- 1x RGB LED (for free or busy status)
- 2x Buttons (for charging start and stop charging)
- 9x Resistors (6x 220/330ohm, 2x 1K)
- Breadboard
- Connecting Lines

</br>
</br>
</br>

#### Technical Task

The RGB LED represents the availability of the station. If the station is free, the LED will be green, and if the station is occupied, it will turn red.
The simple LEDs represent the degree of battery charge, which we will simulate through a progressive loader (L1 = 25%, L2 = 50%, L3 = 75%, L4 = 100%). The loader is charged by successively lighting up the LEDs, at a fixed interval of 3s. The LED that signifies the current percentage of charge will have a flashing state, the LEDs behind it being lit continuously, and the others turned off.
Short pressing the start button will start charging. Pressing this button while charging will not do anything.
Long pressing the stop button will forcibly stop charging and reset the station to the free state. Pressing this button while the station is free will not do anything.

</br>
</br>
</br>

</details>

<details>
<summary>IMPLEMENTATION</summary> 

</br>

[Virtual Simulation](https://wokwi.com/projects/412636711576299521)
</br>

[Code](https://github.com/KanekiLor/Robotics/blob/main/Tema1/Tema1/src/main.c)
</br>

[Video of the physical setup](https://github.com/KanekiLor/Robotics/blob/main/Tema1/Tema1/Media%20Tema1/Robotica-Tema-1.mp4)
</br>

#### Photo Gallery

<div align="center">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema1/Tema1/Media%20Tema1/Xl6Uqsf.jpeg" alt="Image 1" width="300">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema1/Tema1/Media%20Tema1/bqEjFGb.jpeg" alt="Image 2" width="300"> 
</div>

</br>
</br>
</details>

### PROJECT 2: ⁠TypeRacer Game

<details>
<summary>TASK</summary> 
 
  
<img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(1).jpg" align="right" alt="Diagram" width="400">

#### Description

In this theme you will create a game similar to TypeRacer.

</br>

#### Components Used

- Arduino UNO (ATmega328P microcontroller)
- 1x RGB LED (to signal if the correct word is misspelled or not)
- 2x Buttons (for round start/stop and difficulty selection)
- 5x Resistors (3x 220/330 ohm, 2x 1000 ohm)
- Breadboard
- Connecting threads

</br>

#### Technical Task

RGB LED - Status indicator:

In the sleep state, the LED will be white.
When the start button is pressed, the LED will flash for 3 seconds, indicating a countdown until the start of the round.
During a round: The LED will be green if the text entered is correct and will turn red if there is an error.
(1p) Start/Stop button:

Sleep Mode: If the game is paused, pressing the button initiates a new round after a 3-second countdown.
During a round: If the round is active, pressing the button will stop it immediately.
(1p) Difficulty button:

The difficulty button controls the speed at which words appear and can only be used in idle mode.
With each press, the difficulty changes by cycling between: (Easy, Medium, Hard).
When changing the difficulty, a message is sent via serial: "Easy/Medium/Hard mode on!".
For handling button presses, use debouncing and interrupts. Timers will be used to set the frequency of occurrence of words. A useful site, which also includes a video on using interrupts and timers in Arduino, is available here.
(3p) Word generation:

A word dictionary will be created.
During a round, the words will be displayed in the terminal in a random order.
If the current word was spelled correctly, a new word will be displayed immediately. If not, a new word will appear after the time interval set by the difficulty.
To generate random numbers, you must use the random() function.
(1p) Other observations:

The allotted time for a round is 30 seconds.
At the end of each round, the terminal will display how many words were spelled correctly.
</br>
</br>
</br>

</details>

<details>
<summary>IMPLEMENTATION</summary> 

</br>

[Virtual Simulation](https://wokwi.com/projects/413755217734885377)
</br>

[Code](https://github.com/KanekiLor/Robotics/blob/main/Tema2%20-%20Cristache%20Rares-Stefan/Tema2/src/main.cpp)
</br>

[Video of the physical setup](https://imgur.com/a/demonstratie-robot-typewriter-Cwh2F4E)
</br>

#### Photo Gallery

<div align="center" style="display: grid; grid-template-columns: repeat(auto-fit, minmax(150px, 1fr)); gap: 10px; max-width: 450px;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(2).jpg" alt="Image 1" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(3).jpg" alt="Image 2" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(4).jpg" alt="Image 3" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(5).jpg" alt="Image 4" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(6).jpg" alt="Image 5" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/calinfrunzeanu/Introduction-to-Robotics/blob/main/folder/project%202/images/project%202%20(7).jpg" alt="Image 6" width="250" height="250" style="object-fit: cover;">
</div>

</br>
</br>
</details>

### PROJECT 3: ⁠Reaction Game using 2 Arduino's
<details>
<summary>TASK</summary> 
 
  
<img src="https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Media/circ-virtual.png" align="right" alt="Diagram" width="400">

#### Description

In this theme you will create a game of reactions for 2 players.

</br>

#### Components Used

- 2x Arduino UNO (ATmega328P microcontroller)
- 2x RGB LED (to indicate which color to press)
- 7x Buttons ( 1 for round start/stop and to play)
- 16x Resistors (220/330 ohm)
- 2x Breadboard, 2x MiniBreadboards
- 1x LCD
- 1x Servomotor
- 1x Potentiometer
- Connecting threads

</br>

#### Technical Task

Initialization
The game begins by displaying a welcome message on the LCD. Pressing a button triggers the start of the game.

To start the game, the start button can be implemented in a flexible manner, allowing students to choose one of the following options:

In this variant, the game starts when any button is pressed.
Specific Button Starts the Game - A specific button, clearly marked on the breadboard, is designated to start the game.
A Dedicated 7th Button - An additional button, exclusively for starting the game, can be added.
Round Progression
Each player has three buttons, each associated with an LED of a different color, and a 4th RGB LED.
During each round, one player is the active player.
The active player's RGB LED lights up in a color corresponding to one of their buttons. The player must press the button corresponding to the RGB LED's color as quickly as possible to earn points. The faster they react, the more points they receive.
At the end of a round, the LCD displays the updated score of both players.
Throughout the game, the LCD will show each player's score.

Game Timing and Conclusion
The servo motor rotates throughout the game, indicating progress. A full rotation of the servo motor marks the end of the game (you decide how fast it moves).
At the end, the LCD displays the winner's name and the final score for a few seconds, then returns to the start screen with the welcome message.
</br>
</br>
</br>

</details>

<details>
<summary>IMPLEMENTATION</summary> 

</br>

[Virtual Simulation](https://www.tinkercad.com/things/2ZqWAxfCucP/editel?lessonid=EFU6PEHIXGFUR1J&projectid=OGK4Q7VL20FZRV9&collectionid=OMOZACHJ9IR8LRE&title=Editing%20Components#/lesson-viewer)
</br>

[Code Master](https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Master/src/main.cpp)
[Code Master](https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Slave/src/main.cpp)
</br>

[Video of the physical setup](https://imgur.com/a/yZawR92)
</br>

#### Photo Gallery

<div align="center" style="display: grid; grid-template-columns: repeat(auto-fit, minmax(150px, 1fr)); gap: 10px; max-width: 450px;">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Media/1.jpg" alt="Image 1" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Media/2.jpg" alt="Image 2" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Media/3.jpg" alt="Image 3" width="250" height="250" style="object-fit: cover;">
  <img src="https://github.com/KanekiLor/Robotics/blob/main/Tema%203/Media/4.jpg" alt="Image 4" width="250" height="250" style="object-fit: cover;">


</br>
</br>
</details>
