#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

string green = "\x1b[92m";
string red = "\x1b[91m";
string blue = "\x1b[94m";
string yellow = "\x1b[93m";
string purple = "\x1b[95m";

const int SIZE = 3;
char board[SIZE][SIZE];

string us1Name = "Player 1";
string us2Name = "Player 2";
string coName = "Computer";

string us1Color = "\x1b[0m";
string us2Color = "\x1b[0m";
string coColor = "\x1b[0m";

char us1Sym = 'X';
char us2Sym = 'O';
char coSym = 'O';

int menuChoice;
int us1Lose = 0;
int us2Lose = 0;
int coLose = 0;
int us1Win = 0;
int us2Win = 0;
int coWin = 0;
int us1Draw = 0;
int us2Draw = 0;
int coDraw = 0;

void menu();
void exitProgram();
void setting();
void statistic();
void incorrectChoice();
void GameLoop();
bool checkDraw();
void initBoard();
void printBoard();
void updateColumnWidths(int&, int&, int&);

void initBoard() {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = ' ';
}

void printBoard() {
    system("cls");
    cout << "\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << " ";
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "---+---+---\n";
    }
    cout << "\n";
}

bool checkWin(char sym) {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == sym && board[i][1] == sym && board[i][2] == sym) return true;
        if (board[0][i] == sym && board[1][i] == sym && board[2][i] == sym) return true;
    }
    if (board[0][0] == sym && board[1][1] == sym && board[2][2] == sym) return true;
    if (board[0][2] == sym && board[1][1] == sym && board[2][0] == sym) return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ') return false;
    return true;
}

void updateColumnWidths(int& widthName1, int& widthName2, int& widthName3) {
    widthName1 = max((int)us1Name.length(), 4);
    widthName2 = max((int)us2Name.length(), 4);
    widthName3 = max((int)coName.length(), 4);
}

void GameLoop() {
    initBoard();
    bool gameOver = false;
    bool player1Turn = true;
    bool vsComputer = true;
    srand(time(0));
    while (!gameOver) {
        printBoard();
        int row, col;
        if (player1Turn) {
            cout << "Ход " << us1Name << " (" << us1Sym << "). Введите номер строки и столбца (1-3): ";
            cin >> row >> col;
        }
        else {
            if (vsComputer) {
                int r, c;
                do {
                    r = rand() % 3;
                    c = rand() % 3;
                } while (board[r][c] != ' ');
                row = r + 1;
                col = c + 1;
                cout << "Ход " << coName << " (" << coSym << ").\n";
                system("pause");
            }
            else {
                cout << "Ход " << us2Name << " (" << us2Sym << "). Введите номер строки и столбца (1-3): ";
                cin >> row >> col;
            }
        }
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            cout << "[ - ] Недопустимый ход. Попробуйте снова.\n";
            system("pause");
            continue;
        }
        if (board[row - 1][col - 1] != ' ') {
            cout << "[ - ] Эта ячейка уже занята.\n";
            system("pause");
            continue;
        }
        if (player1Turn) {
            board[row - 1][col - 1] = us1Sym;
        }
        else if (vsComputer) {
            board[row - 1][col - 1] = coSym;
        }
        else {
            board[row - 1][col - 1] = us2Sym;
        }
        if (checkWin(player1Turn ? us1Sym : (vsComputer ? coSym : us2Sym))) {
            printBoard();
            cout << "[ + ] Победа! ";
            if (player1Turn) {
                cout << us1Name << endl;
                us1Win++;
                if (vsComputer) coLose++; else us2Lose++;
            }
            else {
                if (vsComputer) {
                    cout << coName << endl;
                    coWin++;
                    us1Lose++;
                }
                else {
                    cout << us2Name << endl;
                    us2Win++;
                    us1Lose++;
                }
            }
            system("pause");
            gameOver = true;
        }
        else if (checkDraw()) {
            printBoard();
            cout << "[ + ] Ничья!\n";
            us1Draw++;
            us2Draw++;
            coDraw++;
            system("pause");
            gameOver = true;
        }
        else {
            player1Turn = !player1Turn;
        }
    }
}

void incorrectChoice() {
    cout << "[ - ] Введено неверное значение\n\n";
    system("pause");
    menu();
}

void exitProgram() {
    system("cls");
    cout << "До свидания игрок!\n\n";
    system("pause");
}

void statistic() {
    int widthName1, widthName2, widthName3;
    updateColumnWidths(widthName1, widthName2, widthName3);
    const int widthStats = 10;
    system("cls");
    cout << "|" << setw(widthName1 + 2) << "Имя"
        << "|" << setw(widthStats + 2) << "Победы"
        << "|" << setw(widthStats + 2) << "Поражения"
        << "|" << setw(widthStats + 2) << "Ничья" << "|\n";
    cout << string(widthName1 + 3, '-')
        << string(widthStats + 3, '-')
        << string(widthStats + 3, '-')
        << string(widthStats + 3, '-') << "\n";
    cout << "|" << setw(widthName1) << us1Name
        << "|" << setw(widthStats) << us1Win
        << "|" << setw(widthStats) << us1Lose
        << "|" << setw(widthStats) << us1Draw << "|\n";
    cout << "|" << setw(widthName2) << us2Name
        << "|" << setw(widthStats) << us2Win
        << "|" << setw(widthStats) << us2Lose
        << "|" << setw(widthStats) << us2Draw << "|\n";
    cout << "|" << setw(widthName3) << coName
        << "|" << setw(widthStats) << coWin
        << "|" << setw(widthStats) << coLose
        << "|" << setw(widthStats) << coDraw << "|\n";
    system("pause");
    menu();
}

void setting() {
    int settingChoice;
    int userSettingChoice;
    system("cls");
    cout << "[ + ] Настройки игрока\n\n" << "[ 1 ] " << us1Name << endl << "[ 2 ] " << us2Name << endl << "[ 3 ] Назад" << endl << endl << "[ > ] Ввод: ";
    cin >> settingChoice;
    if (settingChoice == 1) {
        system("cls");
        cout << "[ + ] Настройки " << us1Name << endl << endl;
        cout << "[ 1 ] Ник     :  " << us1Name << "\n[ 2 ] Фигура  :  " << us1Sym << "\n[ 3 ] Цвет    :  " << us1Color << "\n\n[ > ] Ввод  :";
        cin >> userSettingChoice;
        switch (userSettingChoice) {
        case 1:
            system("cls");
            cout << "[ + ] Ваш ник сейчас ->  " << us1Name;
            cout << "\n\n[ > ] Введите новый ник :  ";
            cin >> us1Name;
            break;
        case 2:
            system("cls");
            cout << "[ + ] Ваша фигура сейчас ->  " << us1Sym;
            cout << "\n\n[ > ] Введите новую фигуру :  ";
            cin >> us1Sym;
            break;
        case 3:
            system("cls");
            cout << "\n[ 1 ] Красный\n[ 2 ] Зеленый\n[ 3 ] Фиолетовый\n[ 4 ] Желтый\n[ 5 ] Синий";
            cout << "\n\n[ > ] Выберите новый цвет :  ";
            int colChoice;
            cin >> colChoice;
            switch (colChoice) {
            case 1: us1Color = red; break;
            case 2: us1Color = green; break;
            case 3: us1Color = purple; break;
            case 4: us1Color = yellow; break;
            case 5: us1Color = blue; break;
            default: cout << "\n[ - ] Цвет не найден!"; break;
            }
            break;
        default:
            setting();
        }
        setting();
    }
    else if (settingChoice == 2) {
        system("cls");
        cout << "[ + ] Настройки " << us2Name << endl << endl;
        cout << "[ 1 ] Ник     :  " << us2Name << "\n[ 2 ] Фигура  :  " << us2Sym << "\n[ 3 ] Цвет    :  " << us2Color << "\n\n[ > ] Ввод   :";
        cin >> userSettingChoice;
        switch (userSettingChoice) {
        case 1:
            system("cls");
            cout << "[ + ] Ваш ник сейчас ->  " << us2Name;
            cout << "\n\n[ > ] Введите новый ник :  ";
            cin >> us2Name;
            break;
        case 2:
            system("cls");
            cout << "[ + ] Ваша фигура сейчас ->  " << us2Sym;
            cout << "\n\n[ > ] Введите новую фигуру :  ";
            cin >> us2Sym;
            break;
        case 3:
            system("cls");
            cout << "\n[ 1 ] Красный\n[ 2 ] Зеленый\n[ 3 ] Фиолетовый\n[ 4 ] Желтый\n[ 5 ] Синий";
            cout << "\n\n[ > ] Выберите новый цвет :  ";
            int colChoice;
            cin >> colChoice;
            switch (colChoice) {
            case 1: us2Color = red; break;
            case 2: us2Color = green; break;
            case 3: us2Color = purple; break;
            case 4: us2Color = yellow; break;
            case 5: us2Color = blue; break;
            default: cout << "\n[ - ] Цвет не найден!"; break;
            }
            break;
        default:
            setting();
        }
        setting();
    }
    else if (settingChoice == 3) {
        menu();
    }
    else {
        setting();
    }
}

void menu() {
    system("cls");
    cout << "== Меню ==";
    cout << "\n\n[ 1 ] Начать игру" << "\n[ 2 ] Настройки" << "\n[ 3 ] Статистика" << "\n[ 4 ] Выйти";
    cout << "\n\n[ > ] Ввод : ";
    cin >> menuChoice;
    switch (menuChoice) {
    case 1:
        GameLoop();
        break;
    case 2:
        setting();
        break;
    case 3:
        statistic();
        break;
    case 4:
        exitProgram();
        break;
    default:
        incorrectChoice();
        break;
    }
}

int main() {
    menu();
    return 0;
}
