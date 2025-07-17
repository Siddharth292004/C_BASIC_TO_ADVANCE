// Great! You're now learning **3-level nested structures** in C. Let’s walk through everything you need step-by-step to understand how to:

// ---

// ## ✅ **Goal:**

// Create a structure like this:

// ```
// University
//    └── College (array)
//           └── Student (array)
// ```

// You will:

// * Create a structure `Student`
// * Nest it inside `College`
// * Then nest `College` inside `University`
// * Read all data and display it

// ---

// ## 🔧 Structure Design

// ### 🔹 1. `Student` structure:

// ```c
// typedef struct {
//     char name[50];
//     int roll;
//     float marks;
// } Student;
// ```

// ### 🔹 2. `College` structure:

// ```c
// typedef struct {
//     char college_name[50];
//     Student students[50];  // array of students
//     int student_count;     // to track how many students
// } College;
// ```

// ### 🔹 3. `University` structure:

// ```c
// typedef struct {
//     char university_name[50];
//     College colleges[10];  // array of colleges
//     int college_count;     // to track how many colleges
// } University;
// ```

// ---

// ## 🧠 Explanation of Steps:

// 1. Input university name
// 2. Input number of colleges
// 3. For each college:

//    * Input college name
//    * Input number of students
//    * For each student:

//      * Input name, roll, marks
// 4. Print everything

// ---

// ## 🖥️ Sample Output

// ```
// Enter University Name: Delhi University
// Enter number of colleges: 2

// Enter name of college 1: Hindu College
// Enter number of students in Hindu College: 2
// Enter student 1 name: Anjali
// Enter roll: 101
// Enter marks: 88.5
// Enter student 2 name: Raj
// Enter roll: 102
// Enter marks: 91.0

// Enter name of college 2: Kirori Mal College
// Enter number of students in Kirori Mal College: 1
// Enter student 1 name: Neha
// Enter roll: 201
// Enter marks: 86.0

// ------ University Details ------

// University: Delhi University

// College: Hindu College
//   Student: Anjali, Roll: 101, Marks: 88.50
//   Student: Raj, Roll: 102, Marks: 91.00

// College: Kirori Mal College
//   Student: Neha, Roll: 201, Marks: 86.00
// ```

// ---

// ## 🔁 Summary of Access Pattern

// | To Access...           | Use                                 |
// | ---------------------- | ----------------------------------- |
// | University name        | `uni.university_name`               |
// | College 0 name         | `uni.colleges[0].college_name`      |
// | Student 1 of College 0 | `uni.colleges[0].students[1].name`  |
// | Student marks          | `uni.colleges[i].students[j].marks` |

// ---

// Would you like me to now write the **full working C code** for this?



// Create a structure University → contains array of Colleges, 
// each college has array of Students. Read and display all details 
// (3-level nested structure).
//  give me explaination and output deatialis