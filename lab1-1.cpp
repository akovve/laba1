#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Zadanie 1_1
double Fraction(double num1) {
    int inter_part = static_cast<int>(num1);
    return num1 - inter_part;
}

int main1_1() {
    double number;
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    double result = Fraction(number);
    
    std::cout << "Дробная часть числа " << number << " = " << result << std::endl;
    
    return 0;
}

// Zadanie 1_3
int CharToNum(char num2) { 
    return num2 - '0';
}

int main1_3() {
    char ch;
    std::cout << "Введите цифру: ";
    std::cin >> ch;
    
    if (ch >= '0' && ch <= '9') {
        int number = CharToNum(ch);
        std::cout << "Результат: " << number << std::endl;
    } else {
        std::cout << "Ошибка: введен не цифровой символ!" << std::endl;
    }
    
    return 0;
}

// Zadanie 1_5
bool Is2Digits(int num3) {
    return (num3 >= 10 && num3 <= 99) || (num3 <= -10 && num3 >= -99);
}

int main1_5() {
    int number;
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    bool result = Is2Digits(number);
    
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}

// Zadanie 1_7
bool IsInRange(int a, int b, int num4) {
    int min_range = (a < b) ? a : b;
    int max_range = (a > b) ? a : b;
    return (num4 >= min_range && num4 <= max_range);
}

int main1_7() {
    int a = 0;
    int b = 0;
    int num = 0;
    
    std::cout << "Введите левую границу: ";
    std::cin >> a;
    std::cout << "Введите правую границу: ";
    std::cin >> b;
    std::cout << "Введите число: ";
    std::cin >> num;
    
    bool result = IsInRange(a, b, num);
    int min_val = (a < b) ? a : b;
    int max_val = (a > b) ? a : b;
    
    std::cout << "Диапазон: [" << min_val << ", " << max_val << "]" << std::endl;
    std::cout << "Число: " << num << std::endl;
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}

// Zadanie 1_9
bool IsEqual(int c, int d, int e) { 
    return c == d && d == e; 
}

int main1_9() {
    int a = 0; 
    int b = 0;
    int c = 0;
    
    std::cout << "Введите три числа:" << std::endl;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    
    bool result = IsEqual(a, b, c);
    
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    
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
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    int result = Abs(number);
    
    std::cout << "Модуль числа " << number << " равен: " << result << std::endl;
    
    return 0;
}

// Zadanie 2_3
bool Is35(int x7) { 
    return (x7 % 3 == 0) != (x7 % 5 == 0); 
}

int main2_3() {
    int number;
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    bool result = Is35(number);
    
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    
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
    int x = 0; 
    int y = 0; 
    int z = 0;
    
    std::cout << "Введите три числа:" << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;
    
    int result = Max3(x, y, z);
    
    std::cout << "Максимальное из чисел " << x << ", " << y << ", " << z 
         << " равно: " << result << std::endl;
    
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
    int x = 0; 
    int y = 0;
    
    std::cout << "Введите два числа:" << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    
    int result = Sum2(x, y);
    int actualSum = x + y;
    
    std::cout << "Сумма чисел " << x << " + " << y << " = " << actualSum << std::endl;
    std::cout << "Результат функции Sum2: " << result << std::endl;
    
    return 0;
}

// Zadanie 2_9
std::string Day(int x10) {
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
    
    std::cout << "Введите номер дня недели (1-7): ";
    std::cin >> dayNumber;
    
    std::string result = Day(dayNumber);
    
    std::cout << "Результат: " << result << std::endl;
    
    return 0;
}

// Zadanie 3_1
std::string ListNums(int x) {
    std::string result = "";
    for (int i = 0; i <= x; i++) {
        result += std::to_string(i);
        if (i < x) {
            result += " ";
        }
    }
    return result;
}

int main3_1() {
    int number;
    
    std::cout << "Введите число x: ";
    std::cin >> number;
    
    std::string result = ListNums(number);
    
    std::cout << "Результат: \"" << result << "\"" << std::endl;
    
    return 0;
}

// Zadanie 3_3
std::string Chet(int x) {
    std::string result = "";
    for (int i = 0; i <= x; i += 2) {
        result += std::to_string(i);
        if (i < x - 1) {
            result += " ";
        }
    }
    return result;
}

int main3_3() {
    int number;
    
    std::cout << "Введите число x: ";
    std::cin >> number;
    
    std::string result = Chet(number);
    
    std::cout << "Четные числа от 0 до " << number << ": \"" << result << "\"" << std::endl;
    
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
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    int length = NumLen(number);
    
    std::cout << "Количество цифр в числе " << number << ": " << length << std::endl;
    
    return 0;
}

// Zadanie 3_7
void Square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main3_7() {
    int size;
    
    std::cout << "Введите размер квадрата: ";
    std::cin >> size;
    
    std::cout << "Квадрат " << size << "x" << size << ":" << std::endl;
    Square(size);
    
    return 0;
}

// Zadanie 3_9
void RightTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < x - i; j++) {
            std::cout << " ";
        }
        for (int k = 0; k < i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main3_9() {
    int height;
    
    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;
    
    std::cout << "Правый треугольник высотой " << height << ":" << std::endl;
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
    std::srand(std::time(NULL));
    
    int size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    if (size <= 0) {
        std::cout << "Размер массива должен быть положительным числом!" << std::endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 100;
    }
    
    std::cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    int x = 0;
    std::cout << "Введите число для поиска: ";
    std::cin >> x;
    
    int index = FindFirst(arr, size, x);
    
    if (index != -1) {
        std::cout << "Первое вхождение числа " << x << " найдено по индексу: " << index << std::endl;
    } else {
        std::cout << "Число " << x << " не найдено в массиве" << std::endl;
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
    std::srand(std::time(NULL));
    
    int size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    if (size <= 0) {
        std::cout << "Размер массива должен быть положительным числом!" << std::endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 201 - 100;
    }
    
    std::cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    int result = MaxAbs(arr, size);
    std::cout << "Наибольшее по модулю значение: " << result << std::endl;
    std::cout << "Его модуль: " << Abs(result) << std::endl;
    
    delete[] arr;
    
    return 0;
}

void showMenu() {
    std::cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << std::endl;
    std::cout << "1 - задача 1_1" << std::endl;
    std::cout << "2 - задача 1_3" << std::endl;
    std::cout << "3 - задача 1_5" << std::endl;
    std::cout << "4 - задача 1_7" << std::endl;
    std::cout << "5 - задача 1_9" << std::endl;
    std::cout << "6 - задача 2_1" << std::endl;
    std::cout << "7 - задача 2_3" << std::endl;
    std::cout << "8 - задача 2_5" << std::endl;
    std::cout << "9 - задача 2_7" << std::endl;
    std::cout << "10 - задача 2_9" << std::endl;
    std::cout << "11 - задача 3_1" << std::endl;
    std::cout << "12 - задача 3_3" << std::endl;
    std::cout << "13 - задача 3_5" << std::endl;
    std::cout << "14 - задача 3_7" << std::endl;
    std::cout << "15 - задача 3_9" << std::endl;
    std::cout << "16 - задача 4_1" << std::endl;
    std::cout << "17 - задача 4_3" << std::endl;
    std::cout << "0 - Выход" << std::endl;
    std::cout << "Выберите задачу: ";
}

int main() {
    int choice = 0;
    
    do {
        showMenu();
        std::cin >> choice;
        
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
                std::cout << "Выход из программы..." << std::endl;
                break;
            default:
                std::cout << "Неверный выбор! Попробуйте снова." << std::endl;
                break;
        }
        
        if (choice != 0) {
            std::cout << "\nНажмите Enter для продолжения...";
            std::cin.ignore();
            std::cin.get();
        }
        
    } while (choice != 0);
    
    return 0;
}
