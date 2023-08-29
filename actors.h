#ifndef ACTORS_H
#define ACTORS_H
#include <vector>
#include <string>

using namespace std;

class Actors {
    private:
        string actor;
        string title;

    public:
        std::vector<std::string> getMovieByActors();
};

#endif //ACTORS_H