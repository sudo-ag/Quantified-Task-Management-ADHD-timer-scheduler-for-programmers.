#include <iostream>

int main(){

    std::string command;
    std::cout<<"Hello Welcome!\n";
    std::cout<<"Please select a choice\n";
    std::cout<<"\n";

    std::cout<<"#######################################\n";
    std::cout<<"Timer\n";
    while(std::cin >> command){
    //Timer
    if(command == "Timer"){
       std::getline(std::cin,command);
       std::cout<<command;
    } 
    //notes
    //tasks 
    //quotes 
    }    


    return 0;
}