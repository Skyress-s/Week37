#include <iostream>
#include <string>
#include <vector>
using std::vector;

using std::cout;
using std::endl;
using std::cin;


void ClearCin();


//decleration of function // function prototype
void Task1();
int Compare(int, int);

void Task2();
void PrintToUpper(char);

//practicing calling funds prototypes
void func1();
void func2();
void func3();
void func4();

//task3
void task3();


int main() {
    task3();
    
}

//definition of task 1
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

//practicing calling funcs definitions

void func1() {
    cout << "Welcome to func1" << endl;
    cout << "Leaving func1" << endl;
}
void func2() {
    cout << "Welcome to func2" << endl;
    func1();
    cout << "Leaving func2" << endl;
}
void func3() {
    cout << "Welcome to func3" << endl;
    func2();
    cout << "Leaving func3" << endl;
}
//start by calling this one
void func4() {
    cout << "Welcome to func4" << endl;
    func3();
    cout << "Leaving func4" << endl;
}

//task3
void task3() {
    int length = 5;
    vector<char> chars(2, 0);
    cout << "Current size is " << chars.size() << endl;
    cout << "How many new elements/spaces do you want to add? : ";
    int ans{};
    cin >> ans;


    for (size_t i = 0; i < ans; i++)
    {
        chars.push_back(0);
    }

    cout << "Current size is " << chars.size() << endl;

}

void ClearCin() {
    std::cin.clear();                   //Clears eventual errors from buffer
    std::cin.ignore(32767, '\n');       //clears the buffer if anything is there
}