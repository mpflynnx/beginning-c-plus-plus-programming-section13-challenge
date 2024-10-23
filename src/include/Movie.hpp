#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include <iostream>

class Movie
{
private:
    std::string m_age_rating; // U, PG, 12, 12A, 15, 18
    int m_watch_count;

protected:


public:

    std::string m_name; // for use with Movies

    void set_name(std::string name)
    {
        m_name = name;
    }

    std::string get_name() const
    {
        return m_name;
    }   

    void set_age_rating(std::string age_rating)
    {
        m_age_rating = age_rating;
    }

    std::string get_age_rating() const
    {
        return m_age_rating;
    }

    void set_watch_count(int watch_count)
    {
        m_watch_count = watch_count;
    } 

    int get_watch_count() const
    {
        return m_watch_count;
    }

    void print() const // const used to prevent function changing the object
    {
        std::cout << m_name << " " << m_age_rating << " " << m_watch_count << std::endl;
    }   

    // no default constructor wanted

    // One argument constructor with movie name only allowed
    Movie(std::string name);

    // Two argument constructor with movie name only allowed
    Movie(std::string name, std::string age_rating);

    // Three arg constructor only
    Movie(std::string name, std::string age_rating, int watch_count);

    // Copy Constructor
    Movie(const Movie& movie) = default;
   
    // Destructor not required (stack usage only)

};

#endif // _MOVIE_H_