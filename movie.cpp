#include "movie.h"
#include <iostream>

using namespace std;

Movie::Movie() {

}

string Movie::getTitle() {
    return title;
}

string Movie::getRating() {
    return rating;
}

string Movie::getLeadActor() {
    return lead;
}

string Movie::getDirector() {
    return director;
}