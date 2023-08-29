#ifndef ACTORS_H
#define ACTORS_H

using namespace std;

class Actors {
    private:
        string actor;
        string title;

    public: 
        std::vector<std::string> getMovieByActor();
};

#endif //ACTORS_H