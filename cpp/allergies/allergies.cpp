#include "allergies.h"
#include <string>
#include <unordered_set>
#include <map>
#include <iostream>

namespace allergies {
  allergy_test::allergy_test(int score) {
    allergy_score = score;

    for (auto const& [food_name, food_score] : food_scores)
    {
        if ((allergy_score & food_score) == food_score) {
          allergy_names.insert(food_name);
        }
    }
  }

  bool allergy_test::is_allergic_to(std::string food) {
    return allergy_names.count(food);
  }

  std::unordered_set<std::string> allergy_test::get_allergies() {
    return allergy_names;
  }
}  // namespace allergies
