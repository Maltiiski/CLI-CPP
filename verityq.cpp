#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> questions{
    "Who are you?\n",
    "What's the capital of France?\n",
    "What does the cow say?\n"
};

std::string ans;

std::string ask(int num);

int main() {
    if (ask(0) == "Verity"){
        std::cout << "Ask me anything\n";
        std::cout << "I know about a million things\n";
        std::cout << "I'll do everything\n";
    }

    if (ask(1) == "It is Paris"){
        std::cout << "Merci!\n";
    }

    if (ask(2) == "Moo moo moo")
    {
        std::cout << "I speak that too\n";
        std::cout << "All day\n";
    }

    return 0;
}

std::string ask(int num) {
    std::cout << "============ QUIZ ============\n";

    std::cout << questions[num];
    std::getline(std::cin, ans);

    std::cout << "==============================\n";

    return ans;
}