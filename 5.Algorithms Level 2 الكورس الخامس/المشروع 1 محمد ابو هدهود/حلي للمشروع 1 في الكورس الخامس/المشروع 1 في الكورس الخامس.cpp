#include <iostream>
using namespace std;

struct stInfo {
    short number;   // عدد الجولات
    short number2;  // اختيار اللاعب
    short number3;  // اختيار الكمبيوتر
    int playerWins = 0;  // عداد فوز اللاعب
    int computerWins = 0; // عداد فوز الكمبيوتر
    int draws = 0; // عداد التعادل
};

// دالة للحصول على عدد الجولات
void number(stInfo& Info) {
    cout << "How many rounds 1 to 10 ? ";
    cin >> Info.number;
}

// دالة للجولة وتحديد الفائز
void number2(stInfo& Info, int round) {
    cout << "------------------ Round [" << round << "] ---------------------\n";
    cout << "Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors ? ";
    cin >> Info.number2;

    // اختيار الكمبيوتر بشكل عشوائي
    short computerChoice = rand() % 3 + 1;

    cout << "Player1 Choice: ";
    if (Info.number2 == 1) cout << "Stone\n";
    else if (Info.number2 == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    cout << "Computer Choice: ";
    if (computerChoice == 1) cout << "Stone\n";
    else if (computerChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    // تحديد الفائز
    if (Info.number2 == computerChoice) {
        cout << "Round Winner: [ No Winner ]\n";
        Info.draws++; // زيادة عدد التعادلات
    }
    else if ((Info.number2 == 1 && computerChoice == 3) ||
        (Info.number2 == 2 && computerChoice == 1) ||
        (Info.number2 == 3 && computerChoice == 2)) {
        cout << "Round Winner: Player1\n";
        Info.playerWins++; // زيادة عدد مرات فوز اللاعب
    }
    else {
        cout << "Round Winner: Computer\n";
        Info.computerWins++; // زيادة عدد مرات فوز الكمبيوتر
    }
}

// دالة لعرض النتيجة النهائية
void number3(stInfo& Info) {
    cout << "\t\t\t----------------------------------------------------------\t\t\t\n";
    cout << "\t\t\t\t\t+++ G a m e o v e r +++\t\t";
    cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------------------------\n";
    cout << "\t\t\t---------------------- [ Game results ] ------------------ \n";
    cout << "\t\t\tGame Rounds: " << Info.number << "\n";
    cout << "\t\t\tPlayer1 won times: " << Info.playerWins << "\n";
    cout << "\t\t\tComputer won times: " << Info.computerWins << "\n";
    cout << "\t\t\tDraw times: " << Info.draws << "\n";

    if (Info.playerWins > Info.computerWins) {
        cout << "\t\t\tFinal Winner: Player1\n";
    }
    else if (Info.computerWins > Info.playerWins) {
        cout << "\t\t\tFinal Winner: Computer\n";
    }
    else {
        cout << "\t\t\tFinal Result: [ No Winner ]\n";
    }
    cout << "\t\t\t----------------------------------------------------------\t\n";
}

// دالة لتكرار اللعبة إذا أراد اللاعب
bool playAgain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        return true;  // إذا اختار 'y' أو 'Y'
    }
    return false;  // إذا اختار 'n' أو أي شيء آخر
}

int main() {
    bool continuePlaying = true;

    while (continuePlaying) {
        stInfo Info;
        number(Info);  // عدد الجولات

        // تكرار الجولات حسب العدد المدخل
        for (int i = 1; i <= Info.number; i++) {
            number2(Info, i);  // استدعاء دالة الجولات مع رقم الجولة
        }

        number3(Info);  // عرض النتيجة النهائية بعد انتهاء الجولات

        // التحقق إذا كان اللاعب يريد اللعب مرة أخرى
        continuePlaying = playAgain();
    }

    cout << "Thanks for playing!\n";
    return 0;
}