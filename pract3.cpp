#include<iostream>
#include<fstream>
using namespace std;


class student
{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData(); 
   void displayData(); 
};

void student :: getData() {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   
   cout << "\nEnter Name :: ";
   cin>>name[30];
   
   cin.getline(name, 30);
   cout << "\nEnter Marks :: ";
   cin >> marks;
}

void student :: displayData() {
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nMarks :: " << marks << endl;
}

int main()
{
   student s[1]; // array of 3 student objects
   fstream file;
   int i;

   file.open("student-record.doc", ios :: out); // open file for writing
    cout << "\nEnter one students Details to the File :- " << endl;

   for (i = 0; i < 1; i++)
    {
      s[i].getData();
      // write the object to a file
      file.write((char *)&s[i], sizeof(s[i]));
    }

   file.close(); // close the file

   file.open("student-record.doc", ios :: in); // open file for reading
   cout << "\nReading Student information to the file :- " << endl;

   for (i = 0; i < 1; i++)
    {
      // read an object from a file
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }

   file.close(); // close the file

   return 0;
}
