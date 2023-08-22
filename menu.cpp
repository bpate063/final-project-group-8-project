#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to Movie Recommender\n";

    cout << "Select criteria for movie recommendation\n";
    cout << "A-- Genre\n" << "B-- Rating\n" << "C-- Lead Actor\n" << "D-- Director\n";

    string userCriteria = "";
    cin >> userCriteria;

    if (userCriteria.find('A') != string::npos) {
        cout << "Please select what genre you are interested in.\n";
        cout << "1-- Comedy \n" << "2-- Action\n" << "3-- Classic\n" << "4-- Horror\n" << "5-- Romance\n" << "6-- Animated\n" << "7-- Documentary\n";

        int chosenGenre = 0;
        cin >> chosenGenre;

        if (chosenGenre == 1) {
            //display comedy movies
        }

        if (chosenGenre == 2) {
            //display action movies
        }

        if (chosenGenre == 3) {
            //display classic movies
        }

        if (chosenGenre == 4) {
            //display horror movies
        }
        
        if (chosenGenre == 5) {
            //display Romance movies
        }

        if (chosenGenre == 6) {
            //display animated movies
        }
        
        if (chosenGenre == 7) {
            //display documentaries
        }

        if (chosenGenre <= 0 || chosenGenre >= 8) {
            cout << "Please choose a valid input\n";
            return 0;
        }
    }

    else if (userCriteria.find('B') != string::npos) {
        cout << "Please select the rating you would like your movie to be\n";
        cout << "1-- PG\n" << "2-- PG-13\n" << "3-- R\n";
        
        int chosenRating = 0;
        cin >> chosenRating;

        if (chosenRating == 1) {
            //add PG movies to output
        }

        if (chosenRating == 2) {
            //add PG-13 movies to output
        }

        if (chosenRating == 3) {
            //add R movies to output
        }
    }

    else if (userCriteria.find('C') != string::npos) {
        cout << "Which Actor's movies are you interested in\n";
        string actorName = "";
        cin >> actorName;
        cout << "Some movies with " << actorName << " are:\n";
    }

    else if (userCriteria.find('D') != string::npos) {
        cout << "Which director's movies are you interested in\n";
        string directorName = "";
        cin >> directorName;
        cout << "Some movies by " << directorName << " are:\n";
    }

    else {
        cout << userCriteria << " is not a valid option\n" << "Please try again.";
        return 0;
    }
    
    return 0;
}