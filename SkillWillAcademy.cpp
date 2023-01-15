
#include <iostream>

using namespace std;
class AbstractLecturer{
    protected:
        string FirstName;
        string Surname;
        string SubjectName;
    public:
        AbstractLecturer(string FirstName, string Surname, string SubjectName){
            this -> FirstName=FirstName;
            this -> Surname=Surname;
            this -> SubjectName=SubjectName;
        }
        virtual void Lecturer_teaching()=0;
        string getFirstName(){
            return FirstName;
        }
        void setFirstName(string FirstName){
            this -> FirstName=FirstName;
        }
        string getSurname(){
            return Surname;
        }
        void setSurname(string Surname){
            this -> Surname=Surname;
        }
        string getSubjectName(){
            return SubjectName;
        }
        void setSubjectName(){
            this -> SubjectName=SubjectName;
        }
};

class SkillWillLecturer:public AbstractLecturer{
    protected:
         string Chapter;
         string Level;
    public:
         SkillWillLecturer(string FirstName, string Surname, string SubjectName, string Chapter, string Level):AbstractLecturer(FirstName, Surname,SubjectName){
             this -> Chapter=Chapter;
             this -> Level=Level;
         }
        void Lecturer_teaching(){
            cout <<Level << FirstName << " " << Surname << "Is conducting lecture about " << Chapter << SubjectName<< endl;
            
        }
    
};

class AbstractStudent{
    protected:
        string First_Name;
        string SurName;
        int Age;
        string Subject;
    public:
        AbstractStudent(string First_Name, string SurName, int Age, string Subject){
            this -> First_Name=First_Name;
            this -> SurName=SurName;
            this -> Age=Age;
            this -> Subject=Subject;
        }
        virtual void Student_Attending_Lecture()=0;
        string getFirst_Name(){
            return First_Name;
        }
        void setFirst_Name(string First_Name){
            this -> First_Name=First_Name;
        }
        string getSurName(){
            return SurName;
        }
        void setSurName(string SurName){
            this -> SurName=SurName;
        }
        int getAge(){
            return Age;
        }
        void setAge(int Age){
            this -> Age=Age;
        }
        string getSubject(){
            return Subject;
        }
        void setSubject(string Subject){
            this -> Subject=Subject;
        }
        virtual void StudentOnline()=0;
};

class SkillWillStudent: public AbstractStudent{
    protected:
        string Section;
        string Course;
        int QuizzScore;
    public:
        SkillWillStudent( string First_Name, string SurName, int Age, string Subject, string Section, string Course, int QuizzScore): AbstractStudent(First_Name, SurName, Age, Subject){
            this -> Section=Section;
            this -> Course=Course;
            this -> QuizzScore=QuizzScore;
        }
        void Student_Attending_Lecture(){
            cout << First_Name << " " << SurName << " " << Age << " " << Subject << " " << Section << " " << Course << " " << QuizzScore << endl;
        }
        int getQuizzScore(){
            return QuizzScore;
        }
        void updateQuizzScore(int newQuizzScore){
            QuizzScore+=newQuizzScore;
        }
        void totalscore(){
            cout << getFirst_Name() << " " << getSurName () << "kahoot Score: " << QuizzScore << endl; 
        }
        void StudentOnline(){
            cout << "Student is online" << endl;
        }
        
};

class AbstractSubject{
    protected:
        string Subject_name;
        int CourseDuration;
        string StartDate;
    public:
        AbstractSubject(string Subject_name, int CourseDuration, string StartDate){
            this -> Subject_name=Subject_name;
            this -> CourseDuration=CourseDuration;
            this -> StartDate=StartDate;
        }
        virtual void Subject_Info()=0;
        string getSubject_name(){
            return Subject_name;
        }
        void setSubject_name(string Subject_name){
            this -> Subject_name=Subject_name;
        }
        int getCourseDuration(){
            return CourseDuration;
        }
        void setCourseDuration(int CourseDuration){
            this -> CourseDuration=CourseDuration;
        }
        string getStartDate(){
            return StartDate;
        }
        void setStartDate(string StartDate){
            this -> StartDate=StartDate;
        }
        
};

class SkillWillSubject: public AbstractSubject{
    protected:
        string LastSubjectName;
    public:
        SkillWillSubject( string Subject_name, int CourseDuration, string StartDate, string LastSubjectName): AbstractSubject(Subject_name, CourseDuration, StartDate){
            this -> LastSubjectName=LastSubjectName;
        }
        void Subject_Info(){};
        
};


int main()
{
    SkillWillStudent obj1("Mariam " , "Kavtaradze ",25,"Front-end ","B ","IT ", 700);
    SkillWillStudent obj2("Vato ","Papavadze ",30,"Back-end ","A ","IT ",600);
    
    SkillWillLecturer lecture1("Lika ","Sikharulia ","Python ","Chapter 7 ","Senior ");
    lecture1.Lecturer_teaching();
    
    obj1.updateQuizzScore(800);
    obj1.updateQuizzScore(500);
    obj1.totalscore();
    obj2.updateQuizzScore(5000);
    obj2.totalscore();
    obj1.StudentOnline();

    
    return 0;
}