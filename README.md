# Grading-students-CPP
# Grading Students

This C++ program implements the grading policy of HackerLand University. According to the policy, each student receives a grade in the range of 0 to 100. Grades less than 40 are considered failing grades. The program rounds each student's grade according to the following rules:

If the difference between the grade and the next multiple of 5 is less than 3, the grade is rounded up to the next multiple of 5.
If the grade is less than 38, no rounding occurs as the result will still be a failing grade.

# How to Use

Compile the program using a C++ compiler.
Run the compiled executable.
Input the grades for 10 students when prompted. The program will display the rounded grades according to the grading policy.
If an invalid input is entered (a grade less than 0 or greater than 100), the program will prompt for a valid input.
After processing all the grades, the program will display a message indicating that the maximum number of students has been reached (10).

# Example
yaml
Copy code
Input grade:
75
New grade: 75

Input grade:
38
New grade: 40

Input grade:
67
New grade: 67

...

Maximum number of students reached (10)
Note: The program terminates after processing the grades for 10 students.
