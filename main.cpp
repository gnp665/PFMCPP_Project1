#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: engineer
//  action 1: the engineer analyzes the problem
engineer.analyzeTheProblem();
//  action 2: the engineer designs the solution
engineer.designTheSolution();
//  action 3: the engineer integrates and tests design
engineer.integrateAndTest(); 
//  2)
//  Noun: child
//  action 1: the child crawls
child.crawl();
//  action 2: the child walks
child.walk();
//  action 3: the child runs
child.run();
//  3)
//  Noun: frog
//  action 1: the frog jumps
frog.jump();
//  action 2: the frog swims
frog.swim();
//  action 3: the frog croaks
frog.croak();
//  4)
//  Noun: blogger
//  action 1: the blogger creates valuable content
blogger.createValuableContent();
//  action 2: the blogger shares a lead magnet
blogger.shareLeadMagnet();
//  action 3: the blogger grows an email list
blogger.growEmailList();
//  5)
//  Noun: educator
//  action 1: the educator explains the "why"
educator.explainTheWhy();
//  action 2: the educator teaches the "what"
educator.teachTheWhat();
//  action 3: the educator demonstrates the "how"
educator.demoTheHow();
//  6)
//  Noun: Cinderella
//  action 1: Cinderella goes to the ball
cinderella.goToBall();
//  action 2: Cinderella meets a handsome prince
cinderella.meetHandsomePrince();
//  action 3: Cinderella live happily ever after
cinderella.liveHappilyEverAfter();
//  7)
//  Noun: firewall
//  action 1: the firewall parses ingress packets
firewall.parseIngressPkts();
//  action 2: the firewall parses egress packets
firewall.parseEgressTraffic();
//  action 3: the firewall blocks invalid packets
firewall.blockInvalidPkts();
//  8)
//  Noun: clown
//  action 1: the clown laughs
clown.laugh();
//  action 2: the clown juggles
clown.juggle();
//  action 3: the clown creeps people out
clown.peopleCreepOut(); 
//  9)
//  Noun: pilot
//  action 1: the pilot starts plane
pilot.startPlane();
//  action 2: the pilot takes off plane
pilot.takeOffPlane();
//  action 3: the pilot lands the plane
pilot.landPlane();
//  10)
//  Noun: cat
//  action 1: the cat eats
cat.eat();
//  action 2: the cat sleeps
cat.sleep();
//  action 3: the cat catches a mouse
cat.catchMouse();


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}
