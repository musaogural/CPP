/*
The source code that is littered with complicated and long type definitions is not very easy to read. 
This is something developers seek to avoid since code maintainability is chiefly important to them.
There are a few ways to resolve this dilemma i.e specify exact namespace without littering code with std keywords.

Consider using typedefs 
typedefs save us from writing long type definitions. 
In our example, we could solve the problem using two typedefs one for std library and another for foo
*/

#include <iostream>

// Define a namespace foo with a custom cout
namespace foo {
    // Custom stream buffer class
    class foo_streambuf : public std::streambuf {
    protected:
        std::streambuf* original_streambuf;

        virtual int overflow(int c) override {
            if (c != EOF) {
                // Print the custom prefix before the actual character
                std::cout.put(c);
            }
            return c;
        }
    public:
        foo_streambuf(std::streambuf* buf) : original_streambuf(buf) {}
    };

    // Custom output stream class
    class foo_ostream : public std::ostream {
    private:
        foo_streambuf buf;
    public:
        foo_ostream() : std::ostream(&buf), buf(std::cout.rdbuf()) {}

        template<typename T>
        foo_ostream& operator<<(const T& value) {
            std::cout << "[foo::cout] " << value;
            return *this;
        }

        foo_ostream& operator<<(std::ostream& (*manip)(std::ostream&)) {
            manip(std::cout);
            return *this;
        }
    };

    // Create an instance of foo_ostream
    foo_ostream cout;
}

// Typedefs
typedef std::ostream cout_std;
typedef foo::foo_ostream cout_foo;

int main() {
    cout_std &std_cout = std::cout;
    std_cout << "Something to write in std" << std::endl;

    cout_foo &foo_cout = foo::cout;
    foo_cout << "Something to write in foo" << std::endl;

    return 0;
}