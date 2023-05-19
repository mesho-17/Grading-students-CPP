/* HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100.
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
*/
#include <iostream>

using namespace std;

int gradingStudents(){
    
    int students[10];
    int grade;
    
    for(int i=0; i < 10; i++){
        cout<<"Input grade: "<<endl;
        cin>>grade;
        
        // do
        // {
        //condition to check if grade is above || = 38
        if(grade>=38)
        { 
            //checking grade before rounding
            if ((grade + 1)%5 == 0)
            {
              cout<<"New grade : "<<grade + 1<<endl;  
            }else if((grade + 2)%5 == 0)
            {
                cout<<"New grade : "<<grade + 2<<endl;
            }else if((grade + 3) % 5 == 0) 
            {
                cout<<"New grade : "<<grade<<endl;
            }
            else
            {
              cout<<"New grade :  "<<grade<<endl;   
            };
        }else if((grade < 40))
            {
                cout<<"New grade : "<<grade<<endl;
                cout<<"FAIL"<<endl;
            }
            else
            {
              cout<<"New grade :  "<<grade<<endl;   
            };
        // }// }while(grade>=38);
        
        
        //while loop to provide a range of required values
        while(grade < 0 || grade > 100){
            cout<<"Invalid input, range 0 - 100:"<<endl;
            cin>>grade;
        } //the grade values stored to the students array
        students[i] = grade;
    } 
    return grade;  //return value
};
int main()
{
    // calling the function
    gradingStudents();
    cout<<"Maximum number of students reached (10)";
    // system("pause");
    return 0;
};