//Alexes Gonzalez
//Quantified Task Management ADHD timer/scheduler for programmers. 
/*
Notes: 
A c++ built program that is a timer like the Pomodoro technique. 
Having a menu where users could navigate through these choices; Timer, Task, Notes.  
Allowing users to insert tasks by their level of priority and gravity(importance). 
Allowing users to have a timer to help them track their working progress. 
Displaying the tasks in order of priority with the timer. 
Allowing users to adjust the timer for desired time blocks. 
Displaying visual time blocks. 
Ability to write notes and being able to display them with the timer.
*/

#include <iostream>

int main(){

    std::string command;
    std::cout<<"Hello Welcome!\n";
    std::cout<<"Please select a choice\n";
    std::cout<<"\n";

    std::cout<<"#######################################\n";
    std::cout<<"Timer\n";
    std::cout<<"Tasks\n";
    std::cout<<"Notes\n";
    while(std::cin >> command){
    //Timer
    if(command == "Timer"){
       std::getline(std::cin,command);
       std::cout<<command;
    }
    //task 
    else if(command == "Tasks"){
        std::getline(std::cin,command);
        std::cout<<command;
        std::cout<<"hell ye boi\n";
    }
    //notes
    else if(command == "Notes"){
        std::getline(std::cin,command);
        std::cout << "Notes";
    }
    //quotes 
    }    
    return 0;
}