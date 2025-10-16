#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

// Zadanie 1_1
double Fraction(double num1) {
    int inter_part = static_cast<int>(num1);
    return num1 - inter_part;
}

int main1_1() {
    double number;
    
    cout << "Введите число: ";
    cin >> number;
    
    double result = Fraction(number);
    
    cout << "Дробная часть числа " << number << " = " << result << endl;
    
    return 0;
}

// Zadanie 1_3
int CharToNum(char num2) { 
    return num2 - '0'; 
}

int main1_3() {
    char ch;
    cout << "Введите цифру: ";
    cin >> ch;
    
    if (ch >= '0' && ch <= '9') {
        int number = CharToNum(ch);
        cout << "Результат: " << number << endl;
    } else {
        cout << "Ошибка: введен не цифровой символ!" << endl;
    }
    
    return 0;
}

// Zadanie 1_5
bool Is2Digits(int num3) {
    return (num3 >= 10 && num3 <= 99) || (num3 <= -10 && num3 >= -99);
}

int main1_5() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    bool result = Is2Digits(number);
    
    cout << "Результат: " << (result ? "true" : "false") << endl;
    
    return 0;
}

// Zadanie 1_7
bool IsInRange(int a, int b, int num4) {
    int min_range = (a < b) ? a : b;
    int max_range = (a > b) ? a : b;
    return (num4 >= min_range && num4 <= max_range);
}

int main1_7() {
    int a, b, num;
    
    cout << "Введите левую границу: ";
    cin >> a;
    cout << "Введите правую границу: ";
    cin >> b;
    cout << "Введите число: ";
    cin >> num;
    
    bool result = IsInRange(a, b, num);
    int min_val = (a < b) ? a : b;
    int max_val = (a > b) ? a : b;
    
    cout << "Диапазон: [" << min_val << ", " << max_val << "]" << endl;
    cout << "Число: " << num << endl;
    cout << "Результат: " << (result ? "true" : "false") << endl;
    
    return 0;
}

// Zadanie 1_9
bool IsEqual(int c, int d, int e) { 
    return c == d && d == e; 
}

int main1_9() {
    int a, b, c;
    
    cout << "Введите три числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    bool result = IsEqual(a, b, c);
    
    cout << "Результат: " << (result ? "true" : "false") << endl;
    
    return 0;
}

// Zadanie 2_1
int Abs(int x6) {
    if (x6 > 0) {
        return x6;
    } else {
        return -x6;
    }
}

int main2_1() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int result = Abs(number);
    
    cout << "Модуль числа " << number << " равен: " << result << endl;
    
    return 0;
}

// Zadanie 2_3
bool Is35(int x7) { 
    return (x7 % 3 == 0) != (x7 % 5 == 0); 
}

int main2_3() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    bool result = Is35(number);
    
    cout << "Результат: " << (result ? "true" : "false") << endl;
    
    return 0;
}

// Zadanie 2_5
int Max3(int x8, int y8, int z8) {
    int max = x8;
    if (max < y8) max = y8;
    if (max < z8) max = z8;
    return max;
}

int main2_5() {
    int x, y, z;
    
    cout << "Введите три числа:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    
    int result = Max3(x, y, z);
    
    cout << "Максимальное из чисел " << x << ", " << y << ", " << z 
         << " равно: " << result << endl;
    
    return 0;
}

// Zadanie 2_7
int Sum2(int x9, int y9) {
    int sum9 = x9 + y9;
    if (sum9 >= 10 && sum9 <= 19) {
        return 20;
    }
    return sum9;
}

int main2_7() {
    int x, y;
    
    cout << "Введите два числа:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    int result = Sum2(x, y);
    int actualSum = x + y;
    
    cout << "Сумма чисел " << x << " + " << y << " = " << actualSum << endl;
    cout << "Результат функции Sum2: " << result << endl;
    
    return 0;
}

// Zadanie 2_9
string Day(int x10) {
    switch (x10) {
        case 1: 
            return "понедельник";
        case 2: 
            return "вторник";
        case 3: 
            return "среда";
        case 4: 
            return "четверг";
        case 5: 
            return "пятница";
        case 6: 
            return "суббота";
        case 7: 
            return "воскресенье";
        default: 
            return "это не день недели";
    }
}

int main2_9() {
    int dayNumber;
    
    cout << "Введите номер дня недели (1-7): ";
    cin >> dayNumber;
    
    string result = Day(dayNumber);
    
    cout << "Результат: " << result << endl;
    
    return 0;
}

// Zadanie 3_1
string ListNums(int x) {
    string result = "";
    for (int i = 0; i <= x; i++) {
        result += to_string(i);
        if (i < x) {
            result += " ";
        }
    }
    return result;
}

int main3_1() {
    int number;
    
    cout << "Введите число x: ";
    cin >> number;
    
    string result = ListNums(number);
    
    cout << "Результат: \"" << result << "\"" << endl;
    
    return 0;
}

// Zadanie 3_3
string Chet(int x) {
    string result = "";
    for (int i = 0; i <= x; i += 2) {
        result += to_string(i);
        if (i < x - 1) {
            result += " ";
        }
    }
    return result;
}

int main3_3() {
    int number;
    
    cout << "Введите число x: ";
    cin >> number;
    
    string result = Chet(number);
    
    cout << "Четные числа от 0 до " << number << ": \"" << result << "\"" << endl;
    
    return 0;
}

// Zadanie 3_5
int NumLen(long x) {
    if (x == 0) {
        return 1;
    }
    if (x < 0) {
        x = -x;
    }
    int count = 0;
    while (x > 0) {
        x = x / 10;
        count++;
    }
    return count;
}

int main3_5() {
    long number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int length = NumLen(number);
    
    cout << "Количество цифр в числе " << number << ": " << length << endl;
    
    return 0;
}

// Zadanie 3_7
void Square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main3_7() {
    int size;
    
    cout << "Введите размер квадрата: ";
    cin >> size;
    
    cout << "Квадрат " << size << "x" << size << ":" << endl;
    Square(size);
    
    return 0;
}

// Zadanie 3_9
void RightTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < x - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main3_9() {
    int height;
    
    cout << "Введите высоту треугольника: ";
    cin >> height;
    
    cout << "Правый треугольник высотой " << height << ":" << endl;
    RightTriangle(height);
    
    return 0;
}

// Zadanie 4_1
int FindFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main4_1() {
    srand(time(NULL));
    
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Размер массива должен быть положительным числом!" << endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    
    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int x;
    cout << "Введите число для поиска: ";
    cin >> x;
    
    int index = FindFirst(arr, size, x);
    
    if (index != -1) {
        cout << "Первое вхождение числа " << x << " найдено по индексу: " << index << endl;
    } else {
        cout << "Число " << x << " не найдено в массиве" << endl;
    }
    
    delete[] arr;
    
    return 0;
}

// Zadanie 4_3
int MaxAbs(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int max_abs_value = arr[0];
    for (int i = 1; i < size; i++) {
        if (Abs(arr[i]) > Abs(max_abs_value)) {
            max_abs_value = arr[i];
        }
    }
    return max_abs_value;
}

int main4_3() {
    srand(time(NULL));
    
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Размер массива должен быть положительным числом!" << endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201 - 100;
    }
    
    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int result = MaxAbs(arr, size);
    cout << "Наибольшее по модулю значение: " << result << endl;
    cout << "Его модуль: " << Abs(result) << endl;
    
    delete[] arr;
    
    return 0;
}

void showMenu() {
    cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << endl;
    cout << "1 - задача 1_1" << endl;
    cout << "2 - задача 1_3" << endl;
    cout << "3 - задача 1_5" << endl;
    cout << "4 - задача 1_7" << endl;
    cout << "5 - задача 1_9" << endl;
    cout << "6 - задача 2_1" << endl;
    cout << "7 - задача 2_3" << endl;
    cout << "8 - задача 2_5" << endl;
    cout << "9 - задача 2_7" << endl;
    cout << "10 - задача 2_9" << endl;
    cout << "11 - задача 3_1" << endl;
    cout << "12 - задача 3_3" << endl;
    cout << "13 - задача 3_5" << endl;
    cout << "14 - задача 3_7" << endl;
    cout << "15 - задача 3_9" << endl;
    cout << "16 - задача 4_1" << endl;
    cout << "17 - задача 4_3" << endl;
    cout << "0 - Выход" << endl;
    cout << "Выберите задачу: ";
}

int main() {
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        
        switch(choice) {
            case 1:
                main1_1();
                break;
            case 2:
                main1_3();
                break;
            case 3:
                main1_5();
                break;
            case 4:
                main1_7();
                break;
            case 5:
                main1_9();
                break;    
            case 6:
                main2_1();
                break;
            case 7:
                main2_3();
                break;
            case 8:
                main2_5();
                break;
            case 9:
                main2_7();
                break;
            case 10:
                main2_9();
                break;
            case 11:
                main3_1();
                break;
            case 12:
                main3_3();
                break;
            case 13:
                main3_5();
                break;
            case 14:
                main3_7();
                break;
            case 15:
                main3_9();
                break;
            case 16:
                main4_1();
                break;
            case 17:
                main4_3();
                break;
            case 0:
                cout << "Выход из программы..." << endl;
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова." << endl;
                break;
        }
        
        if (choice != 0) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 0);
    
    return 0;
}
// Zadanie 4_5

// Zadanie 4_7

// Zadanie 4_9

void showMenu() {
    cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << endl;
    cout << "1 - задача 1_1" << endl;
    cout << "2 - задача 1_3" << endl;
    cout << "3 - задача 1_5" << endl;
    cout << "4 - задача 1_7" << endl;
    cout << "5 - задача 1_9" << endl;
    cout << "6 - задача 2_1" << endl;
    cout << "7 - задача 2_3" << endl;
    cout << "8 - задача 2_5" << endl;
    cout << "9 - задача 2_7" << endl;
    cout << "10 - задача 2_9" << endl;
    cout << "11 - задача 3_1" << endl;
    cout << "12 - задача 3_3" << endl;
    cout << "13 - задача 3_5" << endl;
    cout << "14 - задача 3_7" << endl;
    cout << "15 - задача 3_9" << endl;
    cout << "16 - задача 4_1" << endl;
    cout << "17 - задача 4_3" << endl;
    cout << "18 - задача 4_5" << endl;
    cout << "19 - задача 4_7" << endl;
    cout << "20 - задача 4_9" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите задачу: ";
}

int main() {
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        
        switch(choice) {
            case 1:
                main();
                break;
            case 2:
                main1_3();
                break;
            case 3:
                main1_5();
                break;
            case 4:
                main1_7();
                break;
            case 5:
                main1_9();
                break;    
            case 6:
                main2_1();
                break;
            case 7:
                main2_3();
                break;
            case 8:
                main2_5();
                break;
            case 9:
                main2_7();
                break;
            case 10:
                main2_9();
                break;
            case 11:
                main3_1();
                break;
            case 12:
                main3_3();
                break;
            case 13:
                main3_5();
                break;
            case 14:
                main3_7();
                break;
            case 15:
                main3_9();
                break;
            case 16:
                main4_1();
                break;
            case 17:
                main4_3();
                break;
            // case 18
            
            // case 19
            
            // case 20
            case 0:
                cout << "Выход из программы..." << endl;
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова." << endl;
                break;
        }
        
        if (choice != 0) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 0);
    
    return 0;
}
