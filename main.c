#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
//    srand(time(NULL));
//    int rand_number = rand() % 100;
//    int guessed_number;
//    int attempts = 4;
//    for (int count = 1; count <= attempts; ++count) {
//        printf_s("Guess a number in range 0-100: \n");
//        scanf_s("%d", &guessed_number);
//        if (rand_number > guessed_number) {
//            printf_s("The right number is greater\n");
//        }
//        else if (rand_number < guessed_number) {
//            printf_s("The right number is lower\n");
//        }
//        else {
//            printf_s("You are correct!\n");
//            break;
//        }
//        if (count == attempts) {
//            printf_s("You ran out of attempts!\n");
//        }
//    }
//    printf_s("The number was %d\n", rand_number);

    int year;
    printf_s("Input your year of birth:\n");
    scanf_s("%d", &year);
    if (year < 1 || year > 2023) {
        printf_s("Incorrect year\n");
    }
    else {
        if (year % 12 == 0) {
            printf_s("Monkey\n");
        }
        else if (year % 12 == 1) {
            printf_s("Rooster\n");
        }
        else if (year % 12 == 2) {
            printf_s("Dog\n");
        }
        else if (year % 12 == 3) {
            printf_s("Pig\n");
        }
        else if (year % 12 == 4) {
            printf_s("Rat\n");
        }
        else if (year % 12 == 5) {
            printf_s("Bull\n");
        }
        else if (year % 12 == 6) {
            printf_s("Tiger\n");
        }
        else if (year % 12 == 7) {
            printf_s("Rabbit\n");
        }
        else if (year % 12 == 8) {
            printf_s("Dragon\n");
        }
        else if (year % 12 == 9) {
            printf_s("Snake\n");
        }
        else if (year % 12 == 10) {
            printf_s("Horse\n");
        }
        else {
            printf_s("Sheep\n");
        }
    }

    int day, month;
    printf_s("Enter your day and month of birth:\n");
    scanf_s("%d%d", &day, &month);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf_s("Incorrect date");
    }
    else {
        if (month == 1) {
            if (day < 20) {
                printf_s("Capricorn");
            }
            else {
                printf_s("Aquarius");
            }
        }
        else if (month == 2) {
            if (day < 19) {
                printf_s("Aquarius");
            }
            else {
                printf_s("Pisces");
            }
        }
        else if (month == 3) {
            if (day < 21) {
                printf_s("Pisces");
            }
            else {
                printf_s("Aries");
            }
        }
        else if (month == 4) {
            if (day < 20) {
                printf_s("Aries");
            }
            else {
                printf_s("Taurus");
            }
        }
        else if (month == 5) {
            if (day < 21) {
                printf_s("Taurus");
            }
            else {
                printf_s("Gemini");
            }
        }
        else if (month == 6) {
            if (day < 21) {
                printf_s("Gemini");
            }
            else {
                printf_s("Cancer");
            }
        }
        else if (month == 7) {
            if (day < 23) {
                printf_s("Cancer");
            }
            else {
                printf_s("Leo");
            }
        }
        else if (month == 8) {
            if (day < 23) {
                printf_s("Leo");
            }
            else {
                printf_s("Virgo");
            }
        }
        else if (month == 9) {
            if (day < 23) {
                printf_s("Virgo");
            }
            else {
                printf_s("Libra");
            }
        }
        else if (month == 10) {
            if (day < 23) {
                printf_s("Libra");
            }
            else {
                printf_s("Scorpio");
            }
        }
        else if (month == 11) {
            if (day < 22) {
                printf_s("Scorpio");
            }
            else {
                printf_s("Sagittarius");
            }
        }
        else {
            if (day < 22) {
                printf_s("Sagittarius");
            }
            else {
                printf_s("Capricorn");
            }
        }
    }
    return 0;
}
