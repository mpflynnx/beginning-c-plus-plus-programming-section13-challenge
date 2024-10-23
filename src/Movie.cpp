#include "include/Movie.hpp"

// Constructors
Movie::Movie(std::string name)
    :Movie{name, "Undefined", 0}
{}

Movie::Movie(std::string name, std::string age_rating)
    :Movie{name, age_rating, 0}
{}

Movie::Movie(std::string name, std::string age_rating, int watch_count)
    : m_name{name}, m_age_rating{age_rating}, m_watch_count{watch_count}
{
    std::cout << "Three args given constructor called.\n";
}
