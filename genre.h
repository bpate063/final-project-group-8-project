#ifndef GENRE_H
#define GENRE_H

#include "movie.h"

using namespace std;

class Genre : public Movie {
    private:
        string genre;
        string title;

    public: 
        virtual string getMovie();
};

#endif //GENRE_H