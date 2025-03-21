#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    srand(time(0)); // Tasodifiy sonlar uchun boshlang'ich vaqt

    int score = 0;
    char op[] = {'+', '-', '*'}; // Amal variantlari

    cout << "Matematik jumboq o‘yini! (Chiqish uchun -1 kiriting)" << endl;

    while (true) {
        int num1 = rand() % 10 + 1; // 1 dan 10 gacha son
        int num2 = rand() % 10 + 1;
        char operation = op[rand() % 3]; // Tasodifiy amal

        int correctAnswer;
        switch (operation) {
            case '+': correctAnswer = num1 + num2; break;
            case '-': correctAnswer = num1 - num2; break;
            case '*': correctAnswer = num1 * num2; break;
        }

        cout << num1 << " " << operation << " " << num2 << " = ? ";
        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == -1) {
            cout << "O‘yin tugadi! Jami ball: " << score << endl;
            break;
        }

        if (userAnswer == correctAnswer) {
            cout << "To‘g‘ri! " << endl;
            score++;
        } else {
            cout << "Xato! To‘g‘ri javob: " << correctAnswer << endl;
        }
    }

    return 0;
}
