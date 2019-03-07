#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int k, m, categoryCourseNum, minimumNumCourses;
  string courseCode;

  while(1) {
    // reset from last test case
    map<string, bool> courses;
    bool graduated = true;

    // read number of courses 
    cin >> k;
    
    // if number of courses Freddie has chosen
    // is 0 then exit the program
    if(!k) break;

    // read number of categories
    cin >> m;

    // read every course chosen
    for(int i = 0; i < k; i++) {
      cin >> courseCode;
      courses[courseCode] = true;
    }

    // read every category line
    for(int i = 0; i < m; i++) {
      cin >> categoryCourseNum >> minimumNumCourses;

      // read category courses
      for(int a = 0; a < categoryCourseNum; a++) {
        cin >> courseCode;

        // check if this course was chosen
        // if so, decrease the number of needed taken courses
        // to complete category and thus to complete the degree
        if(courses[courseCode] == true) {
          minimumNumCourses--;
        }
      }

      // if the balance of the courses taken
      // is positive, it means Freddie didn't take
      // all the courses to complete this category
      // and graduate
      if(minimumNumCourses > 0) graduated = false;
    }

    cout << (graduated ? "yes" : "no") << endl;
  }

  return 0;
}