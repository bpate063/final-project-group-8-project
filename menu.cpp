#include <iostream>
#include <string>
#include "actors.cpp"

using namespace std;

int main() {
    cout << "Welcome to Movie Recommender\n";

    cout << "Select criteria for movie recommendation\n";
    cout << "A-- Genre\n" << "B-- Rating\n" << "C-- Lead Actor\n" << "D-- Director\n";

    string userCriteria = "";
    cin >> userCriteria;

    // if (userCriteria.find('A') != string::npos) {
    //     cout << "Please select what genre you are interested in by typing in the corresponding number.\n";
    //     cout << "1-- Comedy \n" << "2-- Action\n" << "3-- Classic\n" << "4-- Horror\n" << "5-- Romance\n" << "6-- Animated\n" << "7--Thriller\n";

    //     string userSelection;
    //     cin >> userSelection;
        
    //     Genre genre;
    //     std::vector<std::string> titleRecs = genre.getMovieByGenre(userSelection);

    //     cout << "Some movies that fall under that category are listed below.\n";

    //     for (int i = 0; i < titleRecs.size(); i++) {
    //         cout << titleRecs.at(i) << endl;
    //     }

    //     cout << "Enjoy your movie!\n";
    // }

    // else if (userCriteria.find('B') != string::npos) {
    //     Genre genre;
    //     std::vector<std::string> titleRecs = genre.getMovieByRating();

    //     cout << "Some movies that fall under that category are listed below.\n";

    //     for (int i = 0; i < titleRecs.size(); i++) {
    //         cout << titleRecs.at(i) << endl;
    //     }

    //     cout << "Enjoy your movie!\n";
    // }

    if (userCriteria.find('C') != string::npos) {
        Actors actor;
        std::vector<std::string> titleRecs = actor.getMovieByActor();
        
        cout << "Some movies that fall under that category are listed below.\n";

        for (int i = 0; i < titleRecs.size(); i++) {
            cout << titleRecs.at(i) << endl;
        }

        cout << "Enjoy your movie!\n";
    }

    // else if (userCriteria.find('D') != string::npos) {
    //     Genre genre;
    //     std::vector<std::string> titleRecs = genre.getMovieByDirector();

    //     cout << "Some movies that fall under that category are listed below.\n";

    //     for (int i = 0; i < titleRecs.size(); i++) {
    //         cout << titleRecs.at(i) << endl;
    //     }

    //     cout << "Enjoy your movie!\n";
    // }

    else {
        cout << userCriteria << " is not a valid option\n" << "Please try again.";
        return 0;
    }
    
    return 0;
}