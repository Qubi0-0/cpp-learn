#pragma once
#include <vector>
#include <string>
namespace lasagna_master {

struct amount {
    int noodles = 0;
    double sauce = 0.0;
};
    int preparationTime(std::vector<std::string> layers, int time = 2);
    amount quantities(std::vector<std::string> layers);
    void addSecretIngredient(std::vector<std::string>& layers, const std::vector<std::string>& friend_layers);
    void addSecretIngredient(std::vector<std::string>& layers, const std::string& friend_layer);
    std::vector<double> scaleRecipe(const std::vector<double>& input,  int portions);
}  // namespace lasagna_master
