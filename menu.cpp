#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to Movie Recommender\n";
    cout << "Enter the name of a movie you enjoy\n";

    string userMovie = "";      //Change after creating a movie class
    cin >> userMovie;

    cout << "Select criteria for similar movies\n";
    cout << "A-- Genre\n" << "B-- Rating\n" << "C-- Lead Actor\n" << "D-- Director\n";

    string userCriteria = "";
    cin >> userCriteria;

    if (userCriteria.find('A') != string::npos) {
        //find out genre of userMovie and recommend movies with similar to it
        cout << "Some movies with a similar genre to " << userMovie << " are:\n";
    }

    if (userCriteria.find('B') != string::npos) {
        //find out Rating of userMovie and recommend movies similar to it
        cout << "Some movies with a similar rating to " << userMovie << " are:\n";
    }

    if (userCriteria.find('C') != string::npos) {
        //find out Lead Actor of userMovie and recommend movies similar to it
        cout << "Some movies with the same lead actor as " << userMovie << " are:\n";
    }

    if (userCriteria.find('D') != string::npos) {
        //find out Director of userMovie and recommend movies similar to it
        cout << "Some movies with the same director as " << userMovie << " are:\n";
    }
    
    return 0;
}