// Demonstrando as funções-membro string find.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

int main()
{
    string string1( "noon is 12 pm; midnight is not." );
    int location;

    // localiza "is" nas posições 5 e 25
    cout << "Original string:\n" << string1
    << "\n\n(find) \"is\" was found at: " << string1.find( "is" )
    << "\n(rfind)\"is\" was found at: " << string1.rfind( "is" );

    // localiza 'o' na posição 1
    location = string1.find_first_of( "misop" );
    cout << "\n\n(find_first_out) found '" << string1[ location ]
    << "' from the group \"misop\" at: " << location;

    // localiza 'o' na posição 29
    location = string1.find_last_of( "misop" );
    cout << "\n\n(find_last_out) found '" << string1[ location ]
    << "' from the group \"misop\" at: " << location;

    // localiza '1' na posição 8
    location = string1.find_first_not_of( "noi spm" );
    cout << "\n\n(find_first_not_out) '" << string1[ location ]
    << "' is not contained in \"noi spm\" and was found at: " << location;

    // localiza '.' na posição 12
    location = string1.find_first_not_of( "12noi spm" );
    cout << "\n\n(find_first_not_out) '" << string1[ location ]
    << "' is not contained in \"12noi spm\" and was " << "found at:" << location << endl;

    // procura caracteres não em string1
    location = string1.find_first_not_of( "noon is 12 pm; midnight is not." );

    cout << "\nfind_first_not_of(\"noon is 12 pm; midnight is not.\")" << " returned: " << location << endl;

    return 0;
}
