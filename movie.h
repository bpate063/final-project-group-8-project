#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>

using namespace std;

class User {
    private:
        int userID;
        string userName;
        string critera;
}

class Movie {
    public:
        Movie();
        string getTitle();
        string getGenre();
        string getRating();
        string getLeadActor();
        string getDirector();

    private:
        string title;
        string genre;
        string rating;
        string lead;
        string director;

}

class Recommendation {
    private:
        string title;
}

class Genre: public Movie {
    private:
        string genre;
        string title;
}

class Director: public Movie {
    private:
        string director;
        string title;
}

class Actor: public Movie {
    private:
        string actor;
        string title;

}

class Rating: public Movie {
    private:
        string rating;
        string title;

}


#endif