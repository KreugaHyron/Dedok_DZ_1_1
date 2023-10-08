#include <iostream>
#include <string>
using namespace std;
//функция к заданию 1
void replaceDotsWithExclamationMarks(string& str) {
    for (char& c : str) {
        if (c == '.') {
            c = '!';
        }
    }
}
//Функция к заданию 2
int countOccurrence(const string& str, char target) {
    int count = 0;
    for (char c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    string strings[] = {  //массив строк к заданию 1 и 2 одновременно
        "Я очень умный.",
        "Ну я ужас как умный...",
        "И я просто умный,не спрашивайте почему."
    };
    for (string& str : strings) {
        replaceDotsWithExclamationMarks(str);
        cout << str << "\n";
    }
    cout << "\n";
    //Task_2
    char targetChar = 'о';
    for (const string& str : strings) {
        int count = countOccurrence(str, targetChar);
        cout << "Символ '" << targetChar << "' встречается " << count << " раз(а) в строке: " << str << "\n";
    }
}