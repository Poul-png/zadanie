#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void console(const string& text, const string& color = "", int underline = 0) {

    static unordered_map<string, string> colorCodes = {
        {"red", "\033[31m"},
        {"green", "\033[32m"},
        {"blue", "\033[34m"},
        {"cyan", "\033[36m"},
        {"yellow", "\033[33m"},
        {"purple", "\033[35m"}
    };


    string code = "";


    if (!color.empty() && colorCodes.count(color)) {
        code += colorCodes[color];
    }


    if (underline) {
        code += "\033[4m";
    }

    cout << code << text;

    cout << "\033[0m" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    console("Привет мир");
    console("Это красный текст", "red");
    console("Это зеленый текст с подчеркиванием", "green", 1);
    console("Это синий текст без подчеркивания", "blue");
    console("Это желтый текст с подчеркиванием", "yellow", 1);
    console("Это фиолетовый текст", "purple");
    return 0;
}
