#ifndef ACTORS_H
#define ACTORS_H

#include "movie.h"

using namespace std;

class Actors : public Movie {
    private:
        string actor;
        string title;

    public: 
        virtual string getMovie();
};

#endif //ACTORS_H