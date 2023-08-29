#ifndef RATINGS_H
#define RATINGS_H

#include "movie.h"

using namespace std;

class Ratings : public Movie {
    private:
        string rating;
        string title;

    public: 
        virtual string getMovie();
};

#endif //RATINGS_H