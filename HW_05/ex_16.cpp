3#include <iostream>
#include <string>
#include <vector>

using namespace std;

//took some things from the internet

class TestQuestion
{
public:
    TestQuestion(const string& questionText)
    {
        text = questionText;
    }
    void addAnswer(const string& answerText, bool isCorrect)
    {
        answers.push_back(make_pair(answerText, isCorrect));
    }
    const string& GetText() const
    {
        return text;
    }
    const vector<pair<string, bool>>& GetAnswers() const
    {
        return answers;
    }
private:
    string text;
    vector<pair<string, bool>> answers;
};

class TestAnswer
{
public:
    TestAnswer(const string& answerText, const string& Explanation, int PointsForCorrect, int PointsForIncorrect)
    {
        text = answerText;
        explanation = Explanation;
        pointsCorrect = PointsForCorrect;
        pointsIncorrect = pointsIncorrect;
    }
    const string& GetText() const
    {
        return text;
    }
    const string& GetExplanation() const
    {
        return explanation;
    }
    int GetPointsCorrect() const 
    {
        return pointsCorrect;
    }
    int GetPointsIncorrect() const
    {
        return pointsIncorrect;
    }

private:
    string text;
    string explanation;
    int pointsCorrect;
    int pointsIncorrect;
};

class Test
{
public:
    Test(const string& Description)
    {
        description = Description;
    }
    void AddQuestion(const TestQuestion& question)
    {
        questions.push_back(question);
    }
    void runTest()
    {
        int totalPoints = 0;
        cout << "-Test Start-\n";
        cout << description << "\n\n";

        for (const auto& question : questions)
        {
            cout << "Question: " << question.GetText() << "\n";
            cout << "Choose one or more correct answers:\n";

            int questionPoints = 0;

            for (const auto& answer : question.GetAnswers())
            {
                cout << " - " << answer.first << "\n";
            }
            cout << "You'r answer: ";
            string userAnswer;
            cin.ignore();
            getline(cin, userAnswer);

            for (const auto& answer : question.GetAnswers())
            {
                if (userAnswer.find(answer.first) != string::npos && answer.second)
                {
                    questionPoints += answerPointsForCorrect;
                }
                else if (userAnswer.find(answer.first) != string::npos && !answer.second)
                {
                    questionPoints -= answerPointsForIncorrect;
                }
            }
            totalPoints += questionPoints;
            cout << "Question score: " << questionPoints << "\n";
        }
        cout << " - Test End - \n";
        cout << "Total score: " <<  totalPoints << " points.";
    }
private:
    string description;
    vector<TestQuestion> questions;
    int answerPointsForCorrect = 10;
    int answerPointsForIncorrect = 5;
};

int main()
{
    string testName, questionText, answerText, explanation;
    int numQuestions, numAnswers;
    bool isCorrect;

    cout << "Enter test name: ";
    getline(cin, testName);

    Test test(testName);

    cout << "Enter number of questions: ";
    cin >> numQuestions;
    cin.ignore();

    for (int i = 0; i < numQuestions; ++i)
    {
        cout << "Enter question text: ";
        getline(cin, questionText);
        TestQuestion question(questionText);

        cout << "Enter number of answers: ";
        cin >> numAnswers;

        cin .ignore();

        for (int j = 0; j < numAnswers; ++j)
        {
            cout << "Enter answer text: ";
            getline(cin,answerText);
            cout << "Is this answer correct: (1 for yes or 0 for no)";
            cin >> isCorrect;
            question.addAnswer(answerText, isCorrect);
            cin.ignore();
        }
        test.AddQuestion(question);
    }
    test.runTest();
}