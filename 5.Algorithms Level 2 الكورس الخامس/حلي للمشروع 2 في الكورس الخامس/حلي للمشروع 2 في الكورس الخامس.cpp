#include <iostream>
#include <vector>
using namespace std;

// هيكل لتخزين السؤال والإجابة الصحيحة
struct Question {
    string questionText;
    string correctAnswer;
};

struct stInfo {
    short number;           // عدد الأسئلة
    short Questoinslevel;   // مستوى الأسئلة
    short Questoinstype;    // نوع الأسئلة
};

// دالة لتوليد سؤال عشوائي من قائمة
Question getRandomQuestion(const vector<Question>& questions) {
    int index = rand() % questions.size();
    return questions[index];
}

// دالة للحصول على عدد الأسئلة من المستخدم
void getNumberOfQuestions(stInfo& Info) {
    cout << "How many questions do you want to answer? ";
    cin >> Info.number;
}

// دالة للحصول على مستوى الأسئلة من المستخدم
void getQuestionsLevel(stInfo& Info) {
    cout << "Enter questions level [1] Easy, [2] Medium, [3] Hard, [4] Mix ? ";
    cin >> Info.Questoinslevel;
}

// دالة للحصول على نوع الأسئلة من المستخدم
void getQuestionsType(stInfo& Info) {
    cout << "Enter questions type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] mix ? ";
    cin >> Info.Questoinstype;
}

// دالة لمعرفة ما إذا كان المستخدم يريد اللعب مرة أخرى
bool playAgain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}
string getLevelName(int level) {
    switch (level) {
    case 1: return "Easy";
    case 2: return "Medium";
    case 3: return "Hard";
    case 4: return "Mix";
    default: return "Unknown";
    }
}
string gettypelName(int type) {
    switch (type) {
    case 1: return "+";
    case 2: return "-";
    case 3: return "x";
    case 4: return "/";
    case 5: return "Mix";
    default: return "Unknown";
    }
}

// دالة لتنفيذ اللعبة
void playGame() {
    stInfo Info;
    getNumberOfQuestions(Info);
    getQuestionsLevel(Info);
    getQuestionsType(Info);

    // قوائم الأسئلة
    vector<Question> addQuestions = {
        {"5 + 10 ?", "15"},
        {"7 + 3 ?", "10"},
        {"20 + 5 ?", "25"},
        {"123 + 34 ?", "157"},
        {"643 + 235 ?", "878"},
        {"77 + 356 ?", "433"},
        {"46 + 46 ?", "92"},
        {"33 + 56 ?", "89"},
        {"1000 + 2879 ?", "3879"},
        {"379 + 820 ?", "1199"}
    };

    vector<Question> subQuestions = {
        {"10 - 5 ?", "5"},
        {"76 - 26 ?", "50"},
        {"93 - 25 ?", "68"},
        {"72 - 33 ?", "39"},
        {"84 - 29 ?", "55"},
        {"93 - 43 ?", "50"},
        {"1067 - 693 ?", "374"},
        {"282 - 72 ?", "210"}
    };

    vector<Question> MulQuestions = {
        {"5 x 5 ?", "25"},
        {"6 x 3 ?", "18"},
        {"7 x 6 ?", "42"},
        {"9 x 8 ?", "72"},
        {"8 x 6 ?", "48"},
        {"11 x 10 ?", "110"},
        {"8 x 4 ?", "32"},
        {"9 x 6 ?", "54"},
        {"12 x 11 ?", "132"},
        {"12 x 6 ?", "72"}
    };

    vector<Question> DivQuestions = {
        {"9 / 3 ?", "3"},
        {"6 / 3 ?", "2"},
        {"4 / 2 ?", "2"},
        {"7 / 2 ?", "3.5"},
        {"8 / 2 ?", "4"},
        {"9 / 4 ?", "2.25"},
        {"10 / 2 ?", "5"},
        {"11 / 5 ?", "2.2"},
        {"12 / 8 ?", "1.5"},
        {"11 / 4 ?", "2.75"}
    };

    vector<Question> MixQuestions = {
        {"300 + 224 ?", "524"},
        {"867 - 498 ?", "369"},
        {"13 x 2 ?", "26"},
        {"12 / 3 ?", "4"},
        {"12 / 2 ?", "6"},
        {"20 x 3 ?", "60"},
        {"600 - 358 ?", "242"},
        {"30 + 287 ?", "317"},
        {"62 x 2 ?", "124"},
        {"68 / 2 ?", "34"}
    };

    // اختيار نوع الأسئلة بناءً على إدخال المستخدم
    vector<Question> selectedQuestions;

    if (Info.Questoinstype == 1) {
        selectedQuestions = addQuestions;
    }
    else if (Info.Questoinstype == 2) {
        selectedQuestions = subQuestions;
    }
    else if (Info.Questoinstype == 3) {
        selectedQuestions = MulQuestions;
    }
    else if (Info.Questoinstype == 4) {
        selectedQuestions = DivQuestions;
    }
    else if (Info.Questoinstype == 5) {
        selectedQuestions = MixQuestions;
    }
    else {
        cout << "Invalid question type selected! Please select a number from 1 to 5" << endl;
        return;
    }

    int correctAnswers = 0;
    int wrongAnswers = 0;

    // عرض الأسئلة والإجابة عليها
    for (int i = 0; i < Info.number; ++i) {
        Question selectedQuestion = getRandomQuestion(selectedQuestions);

        cout << "Question [" << i + 1 << "/" << Info.number << "]\n " << selectedQuestion.questionText << endl;
        cout << "Your answer: ";

        string userAnswer;
        cin >> userAnswer;

        if (userAnswer == selectedQuestion.correctAnswer) {
            cout << "Right answer :-)" << endl;
            correctAnswers++;
            system("color 2F");
        }
        else {
            cout << "Wrong answer :-( \nThe right answer is: " << selectedQuestion.correctAnswer << endl;
            wrongAnswers++;
            system("color 4F");
        }
    }

    string levelName = getLevelName(Info.Questoinslevel); 
    string typeName = gettypelName(Info.Questoinstype);  
    // عرض النتائج النهائية
    if (correctAnswers > wrongAnswers) {
        cout << "--------------------\n";
        cout << "Final Results: Pass\n";
        cout << "--------------------" << endl;
    }
    else {
        cout << "--------------------\n";
        cout << "Final Results: Fail\n";
        cout << "--------------------" << endl;
    }
    cout << "Number of Questions: " << Info.number << endl;
    cout << "Questions level: " << levelName << endl;
    cout << "Question type: " << typeName << endl;
    cout << "Number of Correct Answers: " << correctAnswers << endl;
    cout << "Number of Wrong Answers: " << wrongAnswers << endl;
    cout << "---------------------------" << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    bool continuePlaying = true;

    while (continuePlaying) {
        playGame();
        continuePlaying = playAgain();
    }

    cout << "Thank you for playing!" << endl;
    return 0;
}
