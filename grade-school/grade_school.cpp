#include "grade_school.h"
#include <algorithm> 

namespace grade_school {

    std::map<int, std::vector<std::string>> school::roster() const {
        return students_by_grade;
    }
    
    void school::add(std::string name, int grade) {
        auto& names = students_by_grade[grade];
        auto it = std::lower_bound(names.begin(), names.end(), name);
        names.insert(it, std::move(name));
    }

    const std::vector<std::string> school::grade(int grade_number) const {
        return students_by_grade.find(grade_number)->second;
    }
}  // namespace grade_school
