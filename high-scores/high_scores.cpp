#include "high_scores.h"

#include <algorithm>

namespace arcade {

    std::vector<int> HighScores::list_scores() {
        return scores;
    }

    int HighScores::latest_score() {
        return scores.at(scores.size() - 1);
    }

    int HighScores::personal_best() {
        return *std::max_element(scores.begin(), scores.end());
    }

    std::vector<int> HighScores::top_three() {
        std::vector<int> result = scores;
        std::sort(result.begin(),result.end(), std::greater<int>());
        if (result.size() <= 3)
            return result;
        else {
            result.erase(result.begin() + 3, result.end());
            return result;
        }
    }

}  // namespace arcade
