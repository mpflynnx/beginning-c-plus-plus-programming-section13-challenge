#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <iostream>
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

    void add_movie(const Movie& movie)
    {
        m_movies.push_back(movie);
    }

    void print() const
    {
        for (const auto& movie : m_movies)
        {
            movie.print();
        }

    }

};

#endif // _MOVIES_H_