#pragma once
#include <iostream>
#include <string>



using namespace std;
//
class Questions {


public:
    //

    string Question_word;
    //
    string option1;
    string option2;
    string option3;
    string option4;
    //

    char correct_option;
    //

    int Scoreof_thequestion;


public:
    //

    void setValues(string, string, string, string, string, char, int);
    //

    void askQuestion();
    //


};

/*/

i was still learning this

this code in the header file has 
A public string variable named "Question_word" which will hold the text of the question.
Public string variables named "option1", "option2", "option3" and "option4" which will hold the text of the multiple-choice options for the question.
A public character variable named "correct_option" which will hold the correct answer for the question.
A public integer variable named "Scoreof_thequestion" which will hold the score value of the question.
A public method named "setValues" that takes in six parameters (five strings and one character) and assigns them to the respective class members.
A public method named "askQuestion" that will display the question, its options, and ask the user for their answer.
Additionally, the code includes two C++ libraries, "iostream" and "string", and declares that it will use the "std" namespace. 
The "#pragma once" line is a preprocessor directive that ensures that the header file is only included once in the source code.

/*/