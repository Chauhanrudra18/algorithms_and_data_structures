#include <iostream>
#include <stack>

int main()
{
    std::stack<double> st;
    for ( int i = 0; i < 10; ++i) {
        st.push( i );
    }
    // st.print(); // std::stack does not have a print method
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
    while (st.size() > 0) {
        std::cout << st.top() << " ";
        st.pop();
    }

    std::cout << std::endl;
    return 0;
}