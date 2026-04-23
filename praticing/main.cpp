#include <iostream>

using namespace std;

string name;
int subject;
double score;
double TotalPointsEarned = 0.0;
double TotalPossiblePoints = 0.0;
double average = 0.0;

void capture(){
    cout<< "===== Student Grade Calculator ====="<<endl;
    cout<< ""<<endl;
    cout<< "Enter Student Name: ";
    cin >> name;
    cout << "Enter Number Of Assignments: ";
    cin >> subject;
    if (subject <= 0) {
        cout << "Number of assignments must be greater than 1." <<endl;
        exit(1);
    }
    cout << ""<<endl;
    cout << "===== Enter Scores ====="<< endl;

    for (int i = 1; i <= subject; i++) {
        cout << "Enter score for assignment " << i << ": ";
        cin >> score;


        TotalPointsEarned += score;
        TotalPossiblePoints += 100;

    }
}
void display(){
    cout << ""<<endl;
    cout << "===== Grade Report For "<< name<<" ===== "<<endl;
    average = TotalPointsEarned / subject;
    cout << "Average Score: "<< average <<endl;

   if(average >= 90 & average <= 100){
    cout << "Letter Grade: A"<<endl;
   }
   else if(average >= 80 & average <= 89){
    cout << "Letter Grade: B"<<endl;
   }
   else if(average >= 70 & average <= 79){
    cout << "Letter Grade: C"<<endl;
   }
   else if(average >= 60 & average <= 69){
    cout << "Letter Grade: D"<<endl;
   }
   else if(average < 60){
    cout << "Letter Grade: F"<<endl;
   }


   cout << "Total Points Earned: "<<  TotalPointsEarned<<endl;
   cout << "Total Possible Points: "<<  TotalPossiblePoints<<endl;
}
int main()
{
    capture();
    display();
    return 0;
}
