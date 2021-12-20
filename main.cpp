/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/



/*
Thing 1) Coffee Corner
5 properties:
    1) amount of customers per day (int)
    2) number of milk and milk substitutes (int)
    3) number of sweeteners (int)
    4) number of mugs (int)
    5) price of coffee per cup (double)
3 things it can do:
    1) make coffee
    2) charge customers
    3) add flavourings to made coffee
 */

/*
Thing 2) Theater
5 properties:
    1) number of ticket booths (int)
    2) variety of snacks and drinks (double)
    3) number of seats (int)
    4) name of theater (std::string)
    5) price of ticket per person (float)
3 things it can do:
    1) sell tickets
    2) show movies
    3) sell snacks and drinks
 */

/*
Thing 3) Gym
5 properties:
    1) number of showers (double)
    2) number of weights (double)
    3) price of monthly subscription (float)
    4) names of personal trainers (std::string)
    5) average number of people per day (float)
3 things it can do:
    1) sell monthly subscriptions
    2) provide personal training sessions
    3) monitor customer frequency
 */

/*
Thing 4) Piano
5 properties:
    1) number of keys (int)
    2) type of piano (std::string)
    3) size of piano (double)
    4) name of brand (std::string)
    5) number of pedals (int)
3 things it can do:
    1) play notes
    2) mute notes
    3) change volume of notes
 */
 
 /*
Thing 5) Interface
5 properties:
    1) parameter knobs (position) (float)
    2) parameter sliders (position) (float)
    3) menu buttons (int)
    4) keys (int)
    5) mod wheels (position) (double)
3 things it can do:
    1) Play notes
    2) Change Parameters
    3) Lookup menus
 */

/*
Thing 6) Display
5 properties:
    1) height in cm (float)
    2) width in cm (float)
    3) color (int)
    4) brightness (double)
    5) time of operation (double)
3 things it can do:
    1) show menus
    2) detail parameters
    3) change brightness
 */

/*
Thing 7) Wave generator
5 properties:
    1) oscillator (int)
    2) amplifier (float)
    3) modulator (double)
    4) title (std::string)
    5) filter (double)
3 things it can do:
    1) generate a sine wave
    2) modulate the wave
    3) filter the wave
 */

/*
Thing 8) CPU
5 properties:
    1) name (std::string)
    2) size in kb (double)
    3) speed in rpm (int)
    4) cpu usage (float)
    5) amount of power used in watt/hour (double)
3 things it can do:
    1) measure usage
    2) run internal applications
    3) store presets
 */

/*
Thing 9) Speakers
5 properties:
    1) cone size in in (float)
    2) driver capacity in ohm (float)
    3) driver capacity in watt (double)
    4) output level in SPL (float)
    5) efficiency (double)
3 things it can do:
    1) play generated sounds
    2) change output level
    3) measure efficiency
 */

/*
Thing 10) Synthesizer
5 properties:
    1) Interface
    2) Display
    3) Wave generator
    4) CPU
    5) Speakers
3 things it can do:
    1) Generate a sound
    2) Play sounds
    3) Store presets
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
