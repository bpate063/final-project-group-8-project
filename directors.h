#ifndef DIRECTORS_H
#define DIRECTORS_H

#include "movie.h"

using namespace std;

class Directors : public Movie {
    private:
        string director;
        string title;

    public: 
        virtual string getMovie();
};

#endif //DIRECTORS_H