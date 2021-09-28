#include<iostream>
using namespace std;

class Student{
	
	public:
		string name;
		int rollN;
		void getData(){
			cout<<"Enter the name ";
			cin>>name;
			cout<<"Enter roll number";
			cin>>rollN;
		}
		void display(){
			cout<<"The name of the student with roll number "<<rollN<<" is "<<name;
		}
};
class Exam: public Student{
	
	public:
		int sub1, sub2, sub3;
		void getMarks(){
			cout<<"Enter the marks of the 3 subject :";
			cin>>sub1>>sub2>>sub3;
			
		}
		void displayMarks(){
			cout<<"The marks of the 3 subjects are : "<<sub1<<endl<<sub2<<endl<<sub3;
		}
};

class Sport: public Student{
	
	public:
		int score;
		void getScore(){
			cout<<"Enter the score: ";
			cin>>score;
		}
		void displayScore(){
			cout<<"The score is : "<<score;
		}
};
class Result : public Sport, public Exam{
	int avg;
	int total;
	public:
		void average(){
			avg = (sub1 + sub2 + sub3)/3;
			total = (sub1 + sub2 + sub3);
		}
		void totalDisplay(){
			cout<<"The avg and total score of subjects are : "<<avg<<endl<<total<<" respectively";
		}
};

int main(){
	Exam e;
	e.getData();
	e.display();
	Result r;
	
	
	r.getMarks();
	
	r.getScore();
	r.average();
	r.totalDisplay();
	return 0;
	
}
