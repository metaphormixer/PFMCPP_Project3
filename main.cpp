/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/


/*
Thing 1) bicycle
5 properties:
    1) number of gears
    2) range of gears, low to high
    3) turning radius
    4) amount of braking capacity being used
    5) speed
3 things it can do:
    1) accelerate
    2) decelerate
    3) turn (left to right)
 */

/*
Thing 2) clothes dryer
5 properties:
    1) temperature
    2) length of cycle
    3) speed of tumbling mechanism
    4) drum light
    5) moisture sensor
3 things it can do:
    1) delicate cycle
    2) large load cycle
    3) bedding cycle
 */

/*
Thing 3) movie theater
5 properties:
    1) number of screens
    2) number of concession options
    3) hours of operation
    4) number of ushers
    5) capacity per screen
3 things it can do:
    1) screen movie #1
    2) clean screening room #2
    3) sell out of concession #3
 */

/*
Thing 4) bascule bridge
5 properties:
    1) lanes of eastbound traffic
    2) lanes of westbound traffic
    3) drawbridge
    4) ship corridor
    5) stop lights
3 things it can do:
    1) raise bridge
    2) change stop light to red
    3) lower bridge
 */

/*
Thing 10) Roland Jazz Chorus 40 Amplifier
5 properties:
    1) stereo volume/gain circuit
    2) equalizer circuit
    3) vibrato/chorus circuit
    4) reverb circuit
    5) distortion circuit
3 things it can do:
    1) run a clean signal with reverb
    2) run a distorted signal
    3) run a signal with stereo vibrato
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
