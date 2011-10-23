/******************************************************************************
 * Token class header for Tokenizer application
 *     Written by Michael D. Hoyle
 *     hoylemd@gmail.com
 * ***************************************************************************/

using namespace std;
#include <cstdlib>
#include <string>

// Token type list.
#define MAXNUMTOKENS    64
#define MAXTOKENLENGTH  128

// add new token types here
// don't forget to add them to the names list at the bottom!
#ifndef TOKENTYPE
typedef enum
{
    TOKEN = 255,
    WHITESPACE = 252,
    NONE = 0
} tokenType;
#define TOKENTYPE
#endif

#ifndef TOKENCLASS
class Token
{
    string * value;
    tokenType type;
    Token * next;
    Token * prev;
    static bool initialized;
    static void initialize();

public:
    Token(tokenType, string *);
    ~Token();

    static string * typeToString(tokenType);
    static Token * attachLists(Token *, Token *);

    static string * tokenNames;
    string * getValue();
    void replaceValue(string *);
    tokenType getType();
    void setNext(Token *);
    Token * getNext();
    void setPrev(Token *);
    Token * getPrev();
    Token * append(Token *);       // appends this list to the provided
    Token * concat(Token *);       // appends the provided to this list
    string * toString();
};
#define TOKENCLASS
#endif




