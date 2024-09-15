//
// Created by Марк Саушкин on 15.09.2024.
//
#include <gtest/gtest.h>
#include "../Calculator.h"

// Тестовый случай для класса Calculator
TEST(CalculatorTest, SumTest) {
    // Создаем объект класса Calculator
    Calculator calc;

    // Проверяем работу метода Sum
    EXPECT_EQ(calc.Sum(1, 1), 2);  // Ожидаем, что 1 + 1 = 2
    EXPECT_EQ(calc.Sum(-1, 1), 0); // Ожидаем, что -1 + 1 = 0
    EXPECT_EQ(calc.Sum(0, 0), 0);  // Ожидаем, что 0 + 0 = 0
    EXPECT_EQ(calc.Sum(123, 456), 579); // Ожидаем, что 123 + 456 = 579
}