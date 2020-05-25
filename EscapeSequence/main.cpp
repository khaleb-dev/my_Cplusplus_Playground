/**
 * Just to explain from my understanding of what escape sequence really is.
 * Khaleb O'Brien (weird_coder).
 * date: mon 3.2.20
 */
#include <iostream>

using namespace std;

int main()
{
    // To move to the next line, use "endl" or \n.
    // endl is used outside a string. it terminates the current line therefore moving
    // the cursor to the next line.
    // \n will break the string into two then moves the second part to a new line.
    cout << "Hello world!" << endl;
    // \n is used inside a string.
    cout << "I Love Programming\nI am fine" << endl;
    //  this will print "Hello World!" alone.
    cout << "Hello world!" << endl; "I Love Programming\n";

    // to insert a single quote or double quote symbol in a sting, use \' or \" respectively.
    // sample for single quote
    cout << "It\'s theirs" << endl;
    // sample for double quote.
    cout << "She said, \"She loves programming too\", just like me." << endl;

    // To insert a backward slash "\", use \\.
    cout << "In programming, we use \\ in escape sequence." << endl;

    // To insert a tabspace (normally used for indentation), use \t.
    cout << "\tIt is a good writing practice to always a reasonable amount of space between the margin and the first word in a paragraph." << endl;

    // To insert an alert bell, use \a
    cout << "an alert bell makes an alert notification sound \a" << endl;

    // To insert a carriage return, use \r
    cout << "an alert\rbell makes an alert notification sound" << endl;

    return 0;
}
