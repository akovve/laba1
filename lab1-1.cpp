
// Zadanie 1_1.
#include <iostream>
#include "iomanip"
using namespace std;

double fraction(double x) {
    return x - static_cast<int>(x);
}

int main1_1() {
    double number;
    
    cout << "Введите число: ";
    cin >> number;
    
    double result = fraction(number);
    
    cout << fixed << setprecision(6);
    cout << "Дробная часть числа " << number << " = " << result << endl;
    
    return 0;
}


// Zadanie 1_3
#include <iostream>
using namespace std;

int charToNum(char x) {
    return x - '0';
}

void processConversion() {
    char ch;
    cout << "Введите цифру: ";
    cin >> ch;
    
    if(ch >= '0' && ch <= '9') {
        int number = charToNum(ch);
        cout << "Результат: " << number << endl;
    } else {
        cout << "Ошибка: введен не цифровой символ!" << endl;
    }
}

int main1_3() {
    processConversion();
    
    return 0;
}


// Zadanie 1_5 
#include <iostream>
using namespace std;

bool is2Digits(int x) {
    return x >= 10 && x <= 99;
}

int main1_5() {
    cout << "is2Digits(32) = " << is2Digits(32) << endl;
    cout << "is2Digits(516) = " << is2Digits(516) << endl;
    cout << "is2Digits(9) = " << is2Digits(9) << endl;
    cout << "is2Digits(99) = " << is2Digits(99) << endl;
    cout << "is2Digits(100) = " << is2Digits(100) << endl;
    
    return 0;
}


// Zadanie 1_7
#include <iostream>

int a, b, num;
bool result;

void inputData()
{
    std::cout << "Введите левую границу: ";
    std::cin >> a;
    std::cout << "Введите правую границу: ";
    std::cin >> b;
    std::cout << "Введите число: ";
    std::cin >> num;
}

void checkRange()
{
    int min_val = a < b ? a : b;
    int max_val = a > b ? a : b;
    result = num >= min_val && num <= max_val;
}

void printResult()
{
    int min_val = a < b ? a : b;
    int max_val = a > b ? a : b;
    
    std::cout << "Диапазон: [" << min_val << ", " << max_val << "]" << std::endl;
    std::cout << "Число: " << num << std::endl;
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    std::cout << "-------------------" << std::endl;
}

int main1_7()
{
    inputData();
    checkRange();
    printResult();
    return 0;
}


// Zadanie 1_9
#include <iostream>
using namespace std;

bool isEqual(int a, int b, int c) {
    return (a == b) && (b == c);
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
    
    cout << boolalpha;
    cout << "Результат: " << isEqual(a, b, c) << endl;
    
    return 0;
}


// Zadanie 2_1
#include <iostream>
using namespace std;

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main2_1() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int result = abs(number);
    
    cout << "Модуль числа " << number << " равен: " << result << endl;
    
    return 0;
}


// Zadanie 2_3
#include <iostream>
using namespace std;

bool is35(int x) {
    bool by3 = (x % 3 == 0);
    bool by5 = (x % 5 == 0);
    
    return (by3 || by5) && !(by3 && by5);
}

int main2_3() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    bool result = is35(number);
    
    cout << boolalpha;
    cout << "Результат для числа " << number << ": " << result << endl;
    
    return 0;
}


// Zadanie 2_5
#include <iostream>
using namespace std;

int max3(int x, int y, int z) {
    int max = x;
    if (y > max) 
    max = y;
    if (z > max) 
    max = z;
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
    
    int result = max3(x, y, z);
    
    cout << "Максимальное из чисел " << x << ", " << y << ", " << z 
         << " равно: " << result << endl;
    
    return 0;
}


// Zadanie 2_7
#include <iostream>
using namespace std;

int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

int main2_7() {
    int x, y;
    
    cout << "Введите два числа:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    int result = sum2(x, y);
    int actualSum = x + y;
    
    cout << "Сумма чисел " << x << " + " << y << " = " << actualSum << endl;
    cout << "Результат функции sum2: " << result << endl;
    
    return 0;
}


// Zadanie 2_9
#include <iostream>
#include "string"
using namespace std;

string day(int x) {
    switch (x) {
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
    
    string result = day(dayNumber);
    
    cout << "Результат: " << result << endl;
    
    return 0;
}


// Zadanie 3_1
#include <iostream>
#include "string"
using namespace std;

string listNums(int x) {
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
    
    string result = listNums(number);
    
    cout << "Результат: \"" << result << "\"" << endl;
    
    return 0;
}


// Zadanie 3_3
#include <iostream>
#include "string"
using namespace std;

string chetniy(int x) {
    if (x < 0) return "";
    
    string result = "0";
    for (int i = 2; i <= x; i += 2) {
        result += " " + to_string(i);
    }
    return result;
}

int main3_3() {
    int number;
    
    cout << "Введите число x: ";
    cin >> number;
    
    string result = chetniy(number);
    
    cout << "Четные числа от 0 до " << number << ": \"" << result << "\"" << endl;
    
    return 0;
}


// Zadanie 3_5
#include <iostream>
using namespace std;

int numDlin(long x) {
    if (x == 0) return 1;
    
    int count = 0;
    long num = (x < 0) ? -x : x;
    
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main3_5() {
    long number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int length = numDlin(number);
    
    cout << "Количество цифр в числе " << number << ": " << length << endl;
    
    return 0;
}


// Zadanie 3_7
#include <iostream>
using namespace std;

void square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main3_7() {
    int size;
    
    cout << "Введите размер квадрата: ";
    cin >> size;
    
    cout << "Квадрат " << size << "x" << size << ":" << endl;
    square(size);
    
    return 0;
}


// Zadnie 3_9
#include <iostream>
using namespace std;

void rightTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        // Пробелы
        for (int j = 0; j < x - i; j++) {
            cout << ' ';
        }
        // Звездочки
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main3_9() {
    int height;
    
    cout << "Введите высоту треугольника: ";
    cin >> height;
    
    cout << "Правый треугольник высотой " << height << ":" << endl;
    rightTriangle(height);
    
    return 0;
}


// Zadanie 4_1
#include <iostream>
#include "cstdlib"
#include "ctime"
using namespace std;

int findFirst(int arr[], int size, int x) {
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
    
    // Создание динамического массива
    int* arr = new int[size];
    
    // Заполнение случайными числами от 0 до 99
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
    
    int index = findFirst(arr, size, x);
    
    if (index != -1) {
        cout << "Первое вхождение числа " << x << " найдено по индексу: " << index << endl;
    } else {
        cout << "Число " << x << " не найдено в массиве" << endl;
    }
    
    delete[] arr;
    
    return 0;
}


// Zadanie 4_3
#include <iostream>
#include "cstdlib"
#include "ctime"
#include "cmath"
using namespace std;

int maxAbs(int arr[], int size) {
    if (size == 0) return 0;
    
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        if (abs(arr[i]) > abs(result)) {
            result = arr[i];
        }
    }
    return result;
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
    
    int minVal, maxVal;
    cout << "Введите минимальное значение: ";
    cin >> minVal;
    cout << "Введите максимальное значение: ";
    cin >> maxVal;
    

    int arr[size];
    int range = maxVal - minVal + 1;
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % range + minVal;
    }
    
    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int result = maxAbs(arr, size);
    cout << "Наибольшее по модулю значение: " << result << endl;
    cout << "Его модуль: " << abs(result) << endl;

    delete[] arr;
    
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