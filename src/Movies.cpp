#include "include/Movies.hpp"
#include "include/Movie.hpp"
#include <algorithm> // find_if

void Movies::add_movie(const Movie& movie)
{
    std::cout << "************************\n";
    std::cout << "Adding " << movie.m_name << " to vector.\n";

    // search vector for an existing Movie m_name, using stl find-if and a lambda function
    auto iter = std::find_if(m_movies.begin(), m_movies.end(), [&movie](const Movie& existingMovie) {
        return existingMovie.m_name == movie.m_name;}); // true if name exists

    if (iter == m_movies.end())
    {
        std::cout << "Movie " << movie.m_name << " added to vector.\n";
        m_movies.push_back(movie);
    }
    else
    {
        std::cout << "Movie " << movie.m_name << " already exists in vector.\n";
    }
}

void Movies::increment_watch_count(const Movie& movie)
{

    std::cout << "************************\n";
    std::cout << "Incrementing " << movie.m_name << " watch count.\n";

    auto iter = std::find_if(m_movies.begin(), m_movies.end(), [&movie](const Movie& existingMovie) {
        return existingMovie.m_name == movie.m_name;});

    if (iter == m_movies.end())
    {
        std::cout << "Movie " << movie.m_name << " does not exist in vector.\n";
    }
    else
    {
        iter->m_watch_count++;
        std::cout << "Movie " << movie.m_name << " watch count: " << iter->m_watch_count << std::endl;
    }
}