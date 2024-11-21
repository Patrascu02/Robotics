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
