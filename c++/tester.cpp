using namespace std;

#include "token.h"

int main (void)
{
    Token * top, * temp;
    string * dummyString;

    dummyString = new string("hi");
    top = new Token(TOKEN, dummyString);
    delete dummyString;

    dummyString = new string(" ");
    temp = new Token(WHITESPACE, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string("my");
    temp = new Token(TOKEN, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string(" ");
    temp = new Token(WHITESPACE, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string("name");
    temp = new Token(TOKEN, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string(" ");
    temp = new Token(WHITESPACE, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string("is");
    temp = new Token(TOKEN, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string(" ");
    temp = new Token(WHITESPACE, dummyString);
    top->concat(temp);
    delete dummyString;

    dummyString = new string("Mike");
    temp = new Token(TOKEN, dummyString);
    top->concat(temp);
    delete dummyString;

    top->outputList(new string(""));
    cout << endl;

    temp = new Token(top);
    temp->outputList(new string("|"));

}