#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include <iostream>

class Movie
{
private:
    std::string m_name;
    std::string m_age_rating; // U, PG, 12, 12A, 15, 18
    int m_watch_count;

public:

    void set_name(std::string name)
    {
        m_name = name;
    }

    std::string get_name() const
    {
        return m_name;
    }    

    // no default constructor wanted

    // Three arg constructor only
    Movie(std::string name, std::string age_rating, int watch_count);

    // Copy Constructor
    Movie(const Movie& movie) = default;
   


};

#endif // _MOVIE_H_