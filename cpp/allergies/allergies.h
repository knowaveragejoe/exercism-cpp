#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <map>
#include <unordered_set>

namespace allergies {
  class allergy_test {
    public:
      allergy_test(int score);

      bool is_allergic_to(std::string);

      std::unordered_set<std::string> get_allergies();

      void set_allergy(std::string food);
    private:
      int allergy_score;

      const std::map<std::string, int> food_scores;

      std::unordered_set<std::string> allergy_names;

      int get_allergy_score_for_food(std::string food);
  };
}  // namespace allergies

#endif // ALLERGIES_H