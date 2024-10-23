#include <iostream>
#include "include/Movie.hpp"
#include "include/Movies.hpp"

int main ()
{

    // Movie member functions
    
    // Movie big(); // not wanting this type of instantiation
    Movie big("Big"); // allowed
    Movie big2("Big2", "12A"); // allowed
    Movie big3("Big3", "15", 5); // allowed


    big2.set_name("Bigger2"); // change name
    std::cout << "New name: " << big2.get_name() << std::endl; // view name
    big2.set_watch_count(big2.get_watch_count() + 1); // increment watch count
    std::cout << "Watch count: " << big2.get_watch_count() << std::endl; // view watch count

    Movie mermaid("Mermaid", "PG");
    std::cout << mermaid.get_name() << std::endl;

    // Movies member functions
    Movies my_movies;
    my_movies.add_movie(big);
    my_movies.add_movie(big); // test for movie does already exists in vector
    my_movies.add_movie(big2);
    my_movies.add_movie(mermaid);
    my_movies.increment_watch_count(big);
    my_movies.increment_watch_count(big2);

    my_movies.increment_watch_count(big3); // test for movie does not exist in vector

    my_movies.add_movie(Movie("Bigger", "PG", 1));

    my_movies.print_movies();  

    return 0;
}
