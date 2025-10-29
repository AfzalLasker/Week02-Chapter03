#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    // Declare variables 
    string user_name;
    double ticket_cost;
    double answer_2;
    double answer_3;
    double answer_4;
    double total_score;
    total_score = 0;



    // Welcome message
    cout << "Welcome to the Cricket Quiz!" << endl << endl;



    // Ask user name
    cout << "What is your name? ";
    getline(cin, user_name);
    cout << endl;



    // Greet user
    cout << "Hello! " << user_name << "," << " Let's get started" << endl << endl;


    // Question 1
    cout << "Question no. 1\n"
    << "If a cricket match ticket price is $10.99, then for two people how much will it cost?\n"
    << "Enter your answer (must include decimals): ";

    cin >> ticket_cost;

    if (cin.fail()) {           // Check if user entered the wrong input type
        cin.clear();            // Clear the error state
        cin.ignore(100, '\n');  // remove the wrong input from memory
        cout << "Invalid input! Please enter a number with a decimal point." << endl << endl;
    }
    else if (ticket_cost == 21.98) {
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the next question." << endl << endl;
    }
    else {
        cout << endl;
        cout << "Wrong! The correct answer is $21.98 \n" 
        "Now move on to the next question." << endl << endl;
    }



    // Question 2
    cout << "Question no. 2 \n"
    "If 6 overs are left (1 over = 6 balls) and 40 runs are needed to win, \n" 
    "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
    "Give your answer in number: ";

    cin >> answer_2;

    if (cin.fail()) {               // Check if user entered the wrong input type    
        cin.clear();                // Clear the error state                     
        cin.ignore(100, '\n');      // remove the invalid input from memory             
        cout << "Invalid input! Please answer using a number." << endl << endl;
    }

    else if (answer_2 >= 2 && answer_2 <= 6){
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the next question." << endl << endl;
    }
    else {
        cout << endl;
        cout << "Wrong! Good luck with the next question." << endl << endl;
    }



    // Question 3
    cout << "Question no. 3 \n"
    "If 6 overs are left (1 over = 6 balls) and 180 runs are needed to win,\n" 
    "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
    "Give your answer in number: ";

    cin >> answer_3;
    // Input check for wrong data type
    if (cin.fail()) {             // Check if user entered the wrong input type   
        cin.clear();              // Clear the error state                   
        cin.ignore(100, '\n');    // remove the invalid input from memory           
        cout << "Invalid input! Please answer using a number." << endl << endl;
    }
    else if (answer_3 >= 5 && answer_3 <= 8) {
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the last question." << endl << endl;
    }
    else {
        cout << endl;
        cout << "Wrong! Good luck with the last question." << endl << endl;
    }



    // Question 4
    cout << "Question no. 4 \n"
    "If 2 overs are left (1 over = 6 balls) and 42 runs are needed to win,\n" 
    "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
    "Give your answer in number: ";

    cin >> answer_4;
    // Input check for wrong data type
    if (cin.fail()) {           // Check if user entered the wrong input type        
        cin.clear();            // Clear the error state         
        cin.ignore(100, '\n');  // remove the invalid input from memory            
        cout << "Invalid input! \n\n" 
        "Game Over" << endl << endl;
    }
    else if (answer_4 == 2){
        total_score++;
        cout << "Great! \n\n" 
        "Game Over" << endl << endl;
    }
    else {
        cout << "\nWrong Answer! \n\n"
        "*** Game Over ***" << endl << endl;
    }



    // Calculate the user's score percentage
    double percentage = (total_score / 4) * 100;



    // Create the final output of the program
    cout << "------------------------------------" << endl << endl;
    cout << right << setw(25) << "Quiz Score Report " << endl << endl;
    cout << left << setw(30) << "Total questions are" << right << setw(6) << "4" << endl << endl;  
    cout << left << setw(30) << "Your total correct answers: " << right << setw(6) << total_score << endl << endl;
    cout << left << setw(30) << "Your correct answer ratio: " << right << setw(6) << setprecision(2) << fixed << percentage << "%" << endl << endl;



    // Save the report to "Report.txt" file
    ofstream report ("Report.txt");   // Create the file
    report << "Cricket Quiz Score Report for " << user_name << endl << endl;
    report << "------------------------------------" << endl << endl;
    report << left << setw(30) << "Total questions are" << right << setw(6) << "4" << endl << endl;  
    report << left << setw(30) << "Total correct answers: " << right << setw(6) << total_score << endl << endl;
    report << left << setw(30) << "Correct answer ratio: " << right << setw(6) << setprecision(2) << fixed << percentage << "%" << endl;
    report.close();



    // Show a confirmation that the report was saved
    cout << "\n### Report saved successfully to report.txt file" << endl << endl;



    return 0;
}
