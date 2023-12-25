// #include "allergies.h"
#include <string>
#include <unordered_set>
#include <map>

namespace allergies {
  class allergy_test {
    public:
      allergy_test(int score) {
        allergy_score = score;

        for (auto const& [food_name, food_score] : food_scores)
        {
            if (allergy_score % food_score) {
              set_allergy(food_name);
            }
        }
      }

      bool is_allergic_to(std::string food) {
        int score = 0;
        int food_score = get_allergy_score_for_food(food);
        if (food_score >= 1) {
          score = allergy_score % food_score;
        }

        return score == 0;
      }

      std::unordered_set<std::string> get_allergies() {
        return allergy_names;
      }

      void set_allergy(std::string food) {
        allergy_names.emplace(food);
      }

    private:
      int allergy_score = 0;

      const std::map<std::string, int> food_scores{
        {"eggs", 1},
        {"peanuts", 2},
        {"shellfish", 4},
        {"strawberries", 8},
        {"tomatoes", 16},
        {"chocolate", 32},
        {"pollen", 64},
        {"cats", 128}
      };

      std::unordered_set<std::string> allergy_names{};

      int get_allergy_score_for_food(std::string food) {
        auto score = food_scores.find(food);

        return score != food_scores.end() ? score->second : 0;
      }

  };
}  // namespace allergies
