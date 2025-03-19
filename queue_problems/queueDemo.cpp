#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

// Function to generate random numbers in a range
namespace algo {
    int random_range(int min, int max) {
        static bool first = true;
        if (first) {
            srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator
            first = false;
        }
        return min + rand() % ((max + 1) - min);
    }
}


int main()
{
    const int QUEUE_SIZE = 10;
    std::queue<int> Q;
    std::cout << "Pushing following values to queue:\n";
    for ( int i = 0; i < QUEUE_SIZE; ++i )
    {
        int rand_value = algo::random_range( 5, 50 );
		std::cout << rand_value << " ";
        Q.push(rand_value);
    }
    std::cout << std::endl;
    // std::cout << "Size of Queue is :" << Q.count() << std::endl; // Incorrect line, removed
    std::cout << "Size of Queue is :" << Q.size() << std::endl;
    while ( !Q.empty() ) {
        std::cout << Q.front() << " ";
        Q.pop();
    }
    std::cout << std::endl;
    return 0;
}