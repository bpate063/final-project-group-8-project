#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include "actors.h"

std::vector<std::string> Actors::getMovieByActor() {
    cout << "What actor's movies are you interested in?" << endl;
    
    std::string userChoice;
    std::cin.ignore();
    std::getline(std::cin, userChoice);

    ifstream FS;
    FS.open("Actors.txt");

    vector<string>titleRecs;
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