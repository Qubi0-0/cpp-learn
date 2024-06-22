#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <map>
#include <string>
#include <vector>

namespace grade_school {
    class school {
        
        public:
        std::map<int, std::vector<std::string>> roster() const;
        void add(std::string name, int grade);
        const std::vector<std::string> grade(int grade) const;
        private:
        std::map<int, std::vector<std::string>> students_by_grade;

    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H