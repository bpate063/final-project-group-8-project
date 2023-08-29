#include "actors.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> Actors::getMovieByActors() {
    cout << "Which Actor's movies are you interested in?" << endl;
    
    std::string userChoice;
    std::cin.ignore();
    std::getline(std::cin, userChoice);
    
    ifstream FS;
    FS.open("Actors.txt");

    std::vector<std::string> titleRecs;
    string currLine;

    while(getline(FS, currLine)) {
        istringstream iss(currLine);
        string movieActor;
        string movieTitle;

        getline(iss, movieActor, ',');
        getline(iss, movieTitle, ',');

        if (movieActor == userChoice) {
            titleRecs.push_back(movieTitle);
        }
    }
    
    return titleRecs;

}