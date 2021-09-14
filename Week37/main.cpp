#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

void ClearCin();


/// <summary>
/// a task where the user asks for two ints and prints the biggest one
/// </summary>
void Task1();
int Compare(int, int);

void Task2();
void PrintToUpper(char);

int main() {
    Task2();
}

void Task1() {
    int a1{};
    int a2{};

    cout << " Please input a interger : ";
    cin >> a1;
    ClearCin();

    cout << " Please input another interger : ";
    cin >> a2;
    ClearCin();

    cout << endl;

    Compare(a1, a2);
    


}

int Compare(int numOne, int numTwo) {
    if (numOne > numTwo)
    {
        cout << "The first number " << numOne << " is bigger than " << numTwo<< endl;
    }
    else if (numTwo > numOne)
    {
        cout << "The second number " << numTwo << " is bigger than " << numOne << endl;
    }
    else
    {
        cout << "The numbers are equal" << endl;
    }
    return 0;
}


void Task2() {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y'};
    cout << "Please input a lower case character : ";
    char answer{};
    cin >> answer;
    ClearCin();

    PrintToUpper(answer);

    bool isVowel = false;
    for (int i = 0; i < sizeof(vowels) / sizeof(vowels[0]); i++)
    {
        if (vowels[i] == answer)
        {
            isVowel = true;
        }
        
    }

    if (isVowel)
    {
        cout << answer << " is a vowel" << endl;
    }
    else
    {
        cout << answer << " is not  a vowel" << endl;
    }

}

void PrintToUpper(char ch) {
    char ch2 = toupper(ch);
    cout << ch2 << endl;
}


void ClearCin() {
    std::cin.clear();    //Clears eventual errors from buffer
    std::cin.ignore(32767, '\n');    //clears the buffer if anything is there
}