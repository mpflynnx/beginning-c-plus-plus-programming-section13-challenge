#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.hpp"

class Movies
{
private:
    std::vector<Movie> m_movies;

public:

    // Constructor prototype
    Movies() {}; 

    // Copy Constructor prototype
    // Movie(const Movie &source);

    void add_movie(const Movie& movie);

    void increment_watch_count(const Movie& movie);

    // void print() const;

};

#endif // _MOVIES_H_