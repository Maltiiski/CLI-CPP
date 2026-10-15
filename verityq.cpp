#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> questions{
    "Who are you?\n",
    "What's the capital of France?\n",
    "What does the cow say?\n"
};

std::string ans;

void ask(int num);

int main() {
    ask(0);
    if (ans == "Verity"){
        std::cout << "Ask me anything\n";
        std::cout << "I know about a million things\n";
        std::cout << "I'll do everything\n";
    }

    ask(1);
    if (ans == "It is Paris"){
        std::cout << "Merci!\n";
    }

    ask(2);
    if (ans == "Moo moo moo")
    {
        std::cout << "I speak that too\n";
        std::cout << "All day\n";
    }

    return 0;
}

void ask(int num) {
    std::cout << "============ QUIZ ============\n";

    std::cout << questions[num];
    std::cin >> ans;

    std::cout << "==============================\n";
}