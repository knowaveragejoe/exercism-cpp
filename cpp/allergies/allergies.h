#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <map>
#include <unordered_set>

namespace allergies {
  class allergy_test {
    public:
      int allergy_score;
      allergy_test(int score);

      bool is_allergic_to(std::string);

      std::unordered_set<std::string> get_allergies();
    private:
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

  };
}  // namespace allergies

#endif // ALLERGIES_H