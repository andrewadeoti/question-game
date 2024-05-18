// The-Questionnaire-Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include "The-Questionnaire-Header.h"

using namespace std;
//

char guess;
//"char guess;" declares a character variable named "guess" that will store the user's guess.

int total;
//"int total;" declares an integer variable named "total" that will store the user's total score.



/*/

 displays a welcome message and waits for the user to press Enter to start the game. 

Then it asks the user to make sure the caps lock is off and waits again for the user to press Enter.

After that, the code asks the user to enter a name of their choice, which is stored in a variable called "name." 
Then, the code asks the user if they want to start the quiz, and if they answer "yes," the game starts. Otherwise, the code ends.

The game consists of twenty questions, and each question has four possible answers. 
To store the questions, the code declares twenty variables of type "Questions" (which is a user-defined class that holds the data for each question).

Each question is initialized using the "setValues" member function of the "Questions" class, which takes several parameters such as the question text, 
the four possible answers, the correct answer, and the score for that question.

The correct answer is stored as a character ('a', 'b', 'c', or 'd'), and the score is an integer value.

Once all the questions are initialized, the code presents each question to the user one by one, waits for the user to enter their answer, and then displays whether the answer is correct or not and the user's score. 
At the end of the quiz, the code displays the user's final score.

The code uses if statements to determine if the user's answer is correct or not and to update the user's score accordingly. 
Finally, the code prints the user's final score and ends.

/*/




int main()
{

    cout << "Welcome player to the probably random unrelated to each other question game\n" << endl;
    // this is pretty self explanatory

    cout << "Press Enter to Start Game..\n";
    cin.get();
    //
    cout << "Make sure caps lock is off before continuing\n" << endl;
    // this is pretty self explanatory

    cout << "Press Enter to Start Game..\n";
    cin.get();

    // gets users name
    string name;
    cout << "type name of choice\n";
    cin >> name;
    cout << "\n";


    // ask user if they wanna begin quiz
    string reply;
    cout << "do you want to start," << name << "? Yes/Mo. \n";
    cin >> reply;

    // yay we are using if statements
    // if the user picks yes then start the game, if not then end it/ back to menu
    if (reply == "yes") {
        cout << endl;
        cout << "BEGIN! \n" << endl;
    }

    else {
        cout << "COME BACK NEXT TIME...." << endl;
        return 0;
    }


    // declaration of new variable called Question

    Questions q1; Questions q2; Questions q3; Questions q4;

    Questions q5; Questions q6; Questions q7; Questions q8;

    Questions q9; Questions q10; Questions q11; Questions q12;

    Questions q13; Questions q14; Questions q15; Questions q16;

    Questions q17; Questions q18; Questions q19; Questions q20;


    q1.setValues("1. What command prints something to the screen?",
        "cin", "cout", "char", "print",
        'b', 5);


    q2.setValues("2. where are metatarsals located in your body? ",
        "hand", "feet", "neck", "torso",
        'b', 5);


    q3.setValues("3.What does a pediatrician doctor specialize in ?",
        "hands ", "feet ", "surgery ", "none of the above ",
        'a', 5);


    q4.setValues(" 4.Which of the following is further away from the sea level?",
        "Mount everest", "Mariana trench", "The statue of unity", "none of the above",
        'b', 5);

    q5.setValues("5.What animal is bigger?",
        " The megalodon shark", " The blue whale ", " tyrannosaurus rex ", " Elephant ",
        'b', 5);


    q6.setValues("6. how long does it take to bake a normal loaf of bread?",
        "10-15 minutes", "2 hours", "30-40 minutes", "option and b",
        'c', 5);


    q7.setValues("7. Which of the following is the boolean operator for logical-and?",
        "&", "|", "&&", "|&",
        'c', 5);


    q8.setValues("8. Which of the following is easiest to obtain?",
        "a kidney donor", "drugs", "weapons", "sea moss",
        'c', 5);


    q9.setValues("9.wha grade will i get for this project?",
        "i don't know", "a first", "a second", "a third",
        'a', 5);


    q10.setValues("10. who is the main character of one punch man? ",
        "Saitama", "Gon", "Ron", "Naruto",
        'a', 5);



    q11.setValues("11. Which of the following list of places has a percentage of 38 percent?",
        "North America", "Africa", "Asia", "Australia",
        'a', 5);


    q12.setValues("12. how many languages does nigeria have?",
        "29", "28", "50", "none of the above",
        'd', 5);

    q13.setValues("13. Which is not a loop structure?",
        "for", "do while", "while", "repeat until",
        'd', 5);

    q14.setValues("14. How long does it take an oak tree to grow?",
        "30-35 years", "10 years", "50 years", "none of the above",
        'a', 5);


    q15.setValues("15. who Was Plato to Socrates ?",
        "sibling", "father", "friend", "teacher",
        'd', 5);


    q16.setValues(" 16.If you were to peruse something would you be reading it thoroughly and carefully or skimming through it?",
        "skimming through", "Thoughtfully and carefully", "both", "none of the above",
        'b', 5);


    q17.setValues("17. What is required to avoid falling through from one case to the next?",
        "end;", "break;", "Stop;", "A semicolon",
        'b', 5);


    q18.setValues("18. What is the on-court official in a tennis match called ?",
        "referee", "banner", "counter", "umpire",
        'd', 5);


    q19.setValues("19.which of the following has more air pressure?",
        "tyre", "Champagne bottle", "Baloon", "none",
        'b', 5);


    q20.setValues("20. What is the size of 'int'? ",
        "2", "9", "Compiler dependent", "7",
        'c', 5);

    //
    q1.askQuestion(); q2.askQuestion(); q3.askQuestion(); q4.askQuestion();

    q5.askQuestion(); q6.askQuestion(); q7.askQuestion(); q8.askQuestion();

    q9.askQuestion(); q10.askQuestion(); q11.askQuestion(); q12.askQuestion();

    q13.askQuestion(); q14.askQuestion(); q15.askQuestion(); q16.askQuestion();

    q17.askQuestion(); q18.askQuestion(); q19.askQuestion(); q20.askQuestion();


    std::cout << "you score is \n" << total << "out of 100\n";
    std::cout << "\n";


    if (total > 75) {

        cout << "you passed the quiz" << "\n";

        cout << "\n";
        cin.get();
        cin.ignore();
        return 0;
    }
    else {

        cout << "you failed...\n";
        cout << "\n";
    }
    cin.get();
    cin.ignore();
    return 0;
}


/*/

This code defines a member function setValues() for a class Questions. 
This function takes in six parameters of type string and one parameter of type char and one of type int.

The purpose of this function is to set the values of private data members of the Questions object. 
The function assigns the Question_word, option1, option2, option3, and option4 strings to the parameters q, a1, a2, a3, and a4, respectively.

It also assigns the value of the ca parameter to the correct_option char variable, and the value of the pa parameter to the Scoreof_thequestion integer variable.

it allows us to set the values of the Questions object's private data members in a single function call, rather than having to set each one individually.

/*/

void Questions::setValues(string q, string a1, string a2, string a3, string a4, char ca, int pa)
{
    Question_word = q;
    option1 = a1;
    option2 = a2;
    option3 = a3;
    option4 = a4;
    correct_option = ca;
    Scoreof_thequestion = pa;
}


/*/

This code defines a member function named askQuestion() within a class called Questions. 
The purpose of this function is to display a multiple-choice question to the user, receive the user's answer, and provide feedback on whether the answer is correct or not.

The function begins by printing the question prompt (Question_word) and the four answer options (option1, option2, option3, and option4) to the console. 
Each option is prefixed with a letter (a, b, c, d) to indicate which option the user should select.

After displaying the question and answer options, the function prompts the user to input their answer choice using cin. 
The user's choice is stored in the variable guess.

The function then checks whether the user's answer (guess) is correct by comparing it to the variable correct_option. 
If the guess matches the correct answer, the function displays a "correct answer" message and updates the total score for the quiz by adding Scoreof_thequestion to the variable total. 
If the guess is incorrect, the function displays a "wrong" message along with the correct answer and does not update the total score.

Regardless of whether the user's answer is correct or not, the function waits for the user to press enter before continuing to the next question by calling;
cin.get() and cin.ignore(). The cin.get() function waits for the user to press enter, while cin.ignore() discards any additional characters entered by the user.

/*/

void Questions::askQuestion()
{
    cout << Question_word << "\n";
    cout << "a." << option1 << "\n";
    cout << "b." << option2 << "\n";
    cout << "c." << option3 << "\n";
    cout << "d." << option4 << "\n";
    cout << "\n";

    cout << "your choice" << "\n";
    cin >> guess;
    //
    if (guess == correct_option) {

        cout << "\n";
        cout << "correct answer" << "\n";
        total = total + Scoreof_thequestion;
        cout << "\n";
        cout << "press enter to continue" << "\n";
        cin.get();
        cin.ignore();
    }
    else {

        cout << "\n";
        cout << "wrong" << "\n";
        cout << "the corect answer is\n" << correct_option << "\n";
        cout << "\n";
        cout << "press enter to continue" << "\n";
        cin.get();
        cin.ignore();

    }
}


// REFERENCINg
// for each references i will be including the lines in which i compared codes and also used as inspiration
// https://www.geeksforgeeks.org/quiz-game-in-c/  
// line 47 - 230
//https://worldtechjournal.com/quiz-game-full-project-by-cpp/ 
// lines 281 - 310
// https://www.udemy.com/course/free-learn-c-tutorial-beginners/learn/lecture/1747772?start=0#overview 
// line 23- line 60 i slightly changed the format of what i was taught using if statements,loops and conditions.



/*/

This is a C++ program that is a questionnaire game. When run, the program greets the user, asks for their name, and asks if they want to begin the quiz. 
If the user answers "yes," the quiz starts, and if they answer "no," the program ends. 
The program then asks 20 multiple-choice questions and waits for the user to select an answer by inputting a character. 
Each question has four answer options, with only one being the correct answer, and the user earns points for each correct answer. 
At the end of the quiz, the program displays the user's score.


the functions used in this code are 

cout and cin from the iostream library for input and output to the console
string for storing text strings
setValues() method of the Questions class to set values for each question object
get() method of the cin object to read input from the console
return statement to exit the main() function and return a value to the operating system.

/*/