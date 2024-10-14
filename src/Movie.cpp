#include "include/Movie.hpp"

// Constructor
Movie::Movie(std::string name, std::string age_rating, int watch_count)
    : m_name{name}, m_age_rating{age_rating}, m_watch_count{watch_count}
{
    std::cout << "Three args given constructor called.\n";
}
