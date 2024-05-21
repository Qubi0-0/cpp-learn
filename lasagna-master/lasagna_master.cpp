#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> layers, int time) {
        return time * layers.size();
    }
    amount quantities(std::vector<std::string> layers) {
        amount amount;
        for (const std::string& layer : layers) {
            if (layer == "noodles") {
                amount.noodles += 50;
            }
            else if (layer == "sauce") {
                amount.sauce += 0.2;
            }
        }
        return amount;
    }
    void addSecretIngredient(std::vector<std::string>& layers, const std::vector<std::string>& friend_layers) {
        layers.pop_back();
        layers.push_back(friend_layers.back());
    }
    void addSecretIngredient(std::vector<std::string>& layers, const std::string& friend_layer) {
        layers.pop_back();
        layers.push_back(friend_layer);
    }
    std::vector<double> scaleRecipe(const std::vector<double>& input,  int portions) {
        std::vector<double> scaled_input;
        for (double ingredient : input) {
            scaled_input.push_back(ingredient *= (portions / 2.0));
        }
        return scaled_input;
    }
}  // namespace lasagna_master
