// program for reading files
// and outputting information 
// such as lines, chars, letters counting

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function prototypes

void processData(ifstream &inFile);
bool isAlpha(char c);
bool isUpper(char c);
bool isLower(char c);

// main func

int main() {
    string fileName;
    bool fileEmpty = false;

    // gather inputs
    
    cout << "Enter the name of the input file." << endl;
    cin >> fileName;

    // authenticate file
    
    ifstream inFile(fileName);
    if (inFile) 
    { 
        string firstLine;
        if (getline(inFile, firstLine)) 
        {
            fileEmpty = false;
            inFile.close();
            inFile.open(fileName); // to start from begenning
        } 
        else 
        {
            fileEmpty = true;
        }
    }

    // error handling
    
    if (!inFile || fileEmpty) 
    {
        if (fileEmpty) 
        {
            cout << "\n\"" << fileName << "\" was empty." << endl;
        } 
        else if (!inFile) 
        {
            cout << "\nError, unable to open \"" << fileName << "\"." << endl;
        }
    } 
    else 
    {
        processData(inFile);
        inFile.close();
    }
    return 0;
}

// isalpha func (letters)

bool isAlpha(char c) 
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// isuper func (count uppercase letters)

bool isUpper(char c) 
{
    return c >= 'A' && c <= 'Z';
}

// islower func (count lowercase letters)

bool isLower(char c) 
{
    return c >= 'a' && c <= 'z';
}

// processdata func (process file)

void processData(ifstream &inFile) {
    int lines = 0, chars = 0, letters = 0;
    int letterCounts[26] = {0};
    string line;

    // read file
    
    while (getline(inFile, line)) {
        lines++; 
        chars += static_cast<int>(line.length()); //counts all the letters in a line
        for (char c : line) 
        {
            if (isAlpha(c)) 
            { 
                letters++;
                if (isUpper(c)) 
                {
                    letterCounts[c - 'A']++;
                } 
                else if (isLower(c)) 
                {
                    letterCounts[c - 'a']++;
                }
            }
        }
    }
    if (lines > 0) 
    {
        chars += lines - 1;
    }

    // display results

    cout << "\nLines read = " << lines << endl;
    cout << "Characters read = " << chars + 1 << endl;
    cout << "Letters read = " << letters << endl;
    cout << "\nThe individual letter totals were:" << endl;
    
    // prints all the letters

    for (int i = 0; i < 26; i++) 
    {
        cout << char('A' + i) << "'s = " << letterCounts[i] << endl;
    }
}
