#include<iostream>
#include<list>
using namespace std;
int score=0;
class quiz{
public:

string question_text;
list<string> option;

quiz(string question){
    question_text=question;
}
void Info(){
    cout<<question_text<<endl;
    for(string options:option)
    cout<<options<<endl;
}
void AnswerCheck(char check){
    char answer;
    cin>>answer;
    if(answer==check){
        cout<<"\nCorrect :)";
        score+=1;
    }
    else{
        cout<<"\nIncorrect :(";
    }
}
};

int main(){
    quiz question1("Who is the founder of Google?");
    question1.option.push_back("a) Mark Zukerberg");
    question1.option.push_back("b) larry Page");
    question1.option.push_back("c) Sachin Patel");
     question1.Info();
    question1.AnswerCheck('b');
    
   quiz question2("Who is considered as an inventor of digital computers? ");
    question2.option.push_back("a) Anal Turing");
    question2.option.push_back("b) Charles Babbage");
    question2.option.push_back("c) Elon Musk");
    question2.Info();
    question2.AnswerCheck('a');

    quiz question3("Who gave the theory of evolution?");
    question3.option.push_back("a) Sergey brin");
    question3.option.push_back("b) Charles Darwin");
    question3.option.push_back("c) Albert Einstein");
     question3.Info();
    question3.AnswerCheck('b');

    quiz question4("When was the first Marshall imposed in Pakistan?");
    question4.option.push_back("a) 1971");
    question4.option.push_back("b) 1958");
    question4.option.push_back("c) 1964");
     question4.Info();
    question4.AnswerCheck('b');

    quiz question5("First computer Virus was created by? ");
    question5.option.push_back("a) Amjad Farooq Alvi");
    question5.option.push_back("b) Matthew Bevan");
    question5.option.push_back("c) Kevin Poulsen");
     question5.Info();
    question5.AnswerCheck('a');

    quiz question6("Who is the Current CEO Google?");
    question6.option.push_back("a) Sergey brin");
    question6.option.push_back("b) larry Page");
    question6.option.push_back("c) Sachin Patel");
     question6.Info();
    question6.AnswerCheck('c');

    quiz question7("Who founded APPLE?");
    question7.option.push_back("a) Elon Musk");
    question7.option.push_back("b) Steve Jobs");
    question7.option.push_back("c) Bill Gates");
     question7.Info();
    question7.AnswerCheck('b');

    quiz question8("When dis Pakistan joined SEATO?");
    question8.option.push_back("a) 1954");
    question8.option.push_back("b) 1961");
    question8.option.push_back("c) 1957");
     question8.Info();
    question8.AnswerCheck('a');

    quiz question9("Who was the 5th PM of Pakistan?");
    question9.option.push_back("a) Feroze Khan Noon");
    question9.option.push_back("b) Mian Nawaz Shareef");
    question9.option.push_back("c) Huseyn Shaheed Suhrawardy");
     question9.Info();
    question9.AnswerCheck('c');

    quiz question10("Who was 44th President of USA?");
    question10.option.push_back("a) Barack Obama");
    question10.option.push_back("b) Donald Trump");
    question10.option.push_back("c) Joe Biden");
     question10.Info();
    question10.AnswerCheck('a');

    cout<<"Your score is "<<score<<"/10"<<endl;
}