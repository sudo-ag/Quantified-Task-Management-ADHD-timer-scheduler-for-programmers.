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
using namespace std;

int main(){

    string command;
    cout<<"Hello Welcome to the Quantified Task Management Timer!\n";
    cout<<"Please select a choice\n";
    cout<<"\n";

    cout<<"#######################################\n";
    cout<<"Timer\n";
    cout<<"Tasks\n";
    cout<<"Notes\n";
    cout<<"#######################################\n";
    cout<<"\n";
    
    while(cin >> command){
    //Timer
    cin.ignore();
    if(command == "Timer"){
       getline(cin,command);
    }
    //task 
    else if(command == "Tasks"){
        getline(cin,command);
    }
    //notes
    else if(command == "Notes"){
        getline(cin,command);
        cout << "Notes";
    }
    //quotes 
    }    
    return 0;
}