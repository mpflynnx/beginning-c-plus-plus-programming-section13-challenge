#include <iostream>
#include "include/Movie.hpp"
#include "include/Movies.hpp"

int main ()
{

    // Movie big(); // not wanting this type of instantiation
    // Movie big("Big", "12A", 1);
    // Movie big2("Big2", "12A", 1);

    // big2.set_name("Bigger2");
    // std::cout << big2.get_name() << std::endl;
    // big2.set_watch_count(big2.get_watch_count() + 1);
    // std::cout << big2.get_watch_count() << std::endl;

    
    // Movie mermaid("Mermaid", "PG");
    // std::cout << mermaid.get_name();

    Movies my_movies;
    my_movies.add_movie(Movie("Big", "12A", 1));
    my_movies.add_movie(Movie("Bigger", "PG", 1));

    my_movies.print();  

    return 0;
}
