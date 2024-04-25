// You don't need AI.
// All you need to do is running this code :)

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Function to pretend to check the weather
std::string checkWeather() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    // Based on the hour, just give some random weather condition
    if (ltm->tm_hour < 6) {
        return "cold";
    } else if (ltm->tm_hour < 12) {
        return "rainy";
    } else if (ltm->tm_hour < 18) {
        return "sunny";
    } else {
        return "windy";
    }
}

// Overly complicated decision function to decide what to wear
std::string decideOutfit(const std::string& weather) {
    if (weather == "sunny") {
        return "T-shirt and sunglasses";
    } else if (weather == "rainy") {
        std::vector<std::string> rainyOutfits = {"raincoat", "umbrella", "waterproof boots"};
        std::string outfit = "Wear a ";
        for (size_t i = 0; i < rainyOutfits.size(); ++i) {
            outfit += rainyOutfits[i];
            if (i < rainyOutfits.size() - 1) {
                outfit += ", ";
            }
        }
        return outfit;
    } else if (weather == "cold") {
        return "Thick jacket and warm hat";
    } else if (weather == "windy") {
        return "Windbreaker and a sturdy hat";
    } else {
        return "Stay home, weather unknown!";
    }
}

int main() {
    std::string weather = checkWeather();
    std::string outfit = decideOutfit(weather);
    std::cout << "Today's weather is " << weather << ". You should " << outfit << "." << std::endl;
    return 0;
}
