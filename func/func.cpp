#include <iostream>
#include <algorithm>
using namespace std;
//Завдання 1
//void max_min(int first_num, int second_num, int third_num) {
//    int max_num = first_num, min_num = first_num;
//    if (second_num < min_num) min_num = second_num;
//    if (third_num < min_num) min_num = third_num;
//    if (second_num > max_num) max_num = second_num;
//    if (third_num > max_num) max_num = third_num;
//    cout << "Maximum: " << max_num << endl;
//    cout << "Minimum: " << min_num << endl;
//}
//Завдання 2
//void numbers(const int arr[], int size, int &positive_num, int &zero_num, int &negative_num) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > 0) {
//            positive_num++;
//        }
//        else if (arr[i] < 0) {
//            negative_num++;
//        }
//        else {
//            zero_num++;
//        }
//    }
//}
//Завдання 3
//void sort_massive(int arr[], int size, int choice = 1) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (choice == 1 && arr[i] < arr[j]){ 
//                swap(arr[i], arr[j]);
//            }
//            else if (choice == 0 && arr[i] > arr[j]) {
//                swap(arr[i], arr[j]);
//            }
//        }
//    }
//}
//void print_sort_array(const int arr[], int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//Завдання 4
//int generationRandom() {
//    return rand() % 6 + 1;
//}
//void cubesSymbol(int number) {
//    const char* dices[] = { "1", "2", "3", "4", "5", "6" };
//    cout << dices[number - 1];
//}
//int roundPlay(const string player) {
//    int cube1 = generationRandom();
//    int cube2 = generationRandom();
//    int sum = cube1 + cube2;
//
//    cout << player << " roll dices: ";
//    cubesSymbol(cube1);
//    cout << " | ";
//    cubesSymbol(cube2);
//    cout << endl;
//    
//    return sum;
//}
//void gamePlay() {
//    srand(time(NULL)); 
//
//    string first_player, second_player, choice;
//
//    cout << "Who goes first? (player or bot): ";
//    cin >> choice;
//
//    if (choice == "player") {
//        first_player = "player";
//        second_player = "bot";
//    }
//    else {
//        first_player = "bot";
//        second_player = "player";
//    }
//
//    int player_score = 0, bot_score = 0;
//
//    for (int i = 0; i < 5; i++) {
//        cout << "\nRound " << i + 1 << ":\n";
//        if (first_player == "player") {
//            player_score += roundPlay("player");
//            bot_score += roundPlay("bot");
//        }
//        else {
//            bot_score += roundPlay("bot");
//            player_score += roundPlay("player");
//        }
//    }
//    float player_ave = player_score / 5;
//    float bot_ave = bot_score / 5;
//
//    cout << "\nAverage player score: " << player_ave << endl;
//    cout << "Average bot score: " << bot_ave << endl;
//
//    if (player_score > bot_score) {
//        cout << "Player win" << endl;
//    }
//    else if (player_score < bot_score) {
//        cout << "Bot win" << endl;
//    }
//    else {
//        cout << "Draw" << endl;
//    }
//}
//Завдання 5
int findMinimalPosition(int* arr, int size) {
    int min_sum = 0;
    for (int i = 0; i < 10; i++) {
        min_sum += arr[i];
    }
    int min_position = 0; 
    for (int i = 1; i <= size - 10; i++) {
        int sum = 0;
        for (int j = i; j < i + 10; j++) {
            sum += arr[j];
        }
        if (sum < min_sum) {
            min_sum = sum;
            min_position = i;
        }
    }

    return min_position;
}


int main()
{
    /*max_min(3, 5, 12);*/
    srand(time(NULL));
    /*int size;
    cout << "Input size: " << endl;
    cin >> size;

    int *arr = new int[size];

    int positive_num = 0, zero_num = 0, negative_num = 0;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 15;
        cout << arr[i] << " ";
    }
    cout << endl;

    numbers(arr, size, positive_num, zero_num, negative_num);

    cout << "Positive: " << positive_num << endl;
    cout << "Zero: " << zero_num << endl;
    cout << "Negative: " << negative_num << endl;
    
    delete[] arr;*/

    /*int size = 10;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    sort_massive(arr, size, 1);
    print_sort_array(arr, size);

    delete[] arr;*/
    /*cout << "Game Cubes";
    gamePlay();*/
    int size = 100;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i * 10 + j] << " ";
        }
        cout << endl;
    }
    
    int minimal_position = findMinimalPosition(arr, size);
    cout << minimal_position << endl;
    
    delete[] arr;
    
    return 0;
}

