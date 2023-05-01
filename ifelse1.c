// Programe of Asrological Signs and Dates - Zodiac Sign Dates

#include <stdio.h>
void main()

{
    int date, month, num;

    printf("Enter your birth date ");
    scanf("%d", &date);
    printf("Enter your birth Month ");
    scanf("%d", &month);

    if (month == 3 && date >= 21)
    {
        printf("Your Zodiac Sign is Aries\n Symbol is The Ram");
    }
    else if (month == 4 && date <= 19)
    {
        printf("Your Zodiac Sign is Aries\nSymbol is The Ram");
    }

    else if (month == 4 && date >= 20)
    {
        printf("Your Zodiac Sign is Taurus\nSymbol is The Bull");
    }
    else if (month == 5 && date <= 20)
    {
        printf("Your Zodiac Sign is Taurus\nSymbol is The Bull");
    }
    else if (month == 5 && date >= 21)
    {
        printf("Your Zodiac Sign is Gemini\nSymbol is The Twins");
    }
    else if (month == 6 && date <= 20)
    {
        printf("Your Zodiac Sign is Gemini\nSymbol is The  Twins");
    }
    else if (month == 6 && date >= 21)
    {
        printf("Your Zodiac Sign is Cancer\nSymbol is The Crab");
    }
    else if (month == 7 && date <= 22)
    {
        printf("Your Zodiac Sign is Cancer\nSymbol is The  Crab");
    }

    else if (month == 7 && date >= 23)
    {
        printf("Your Zodiac Sign is Leo\nSymbol is The Lion");
    }
    else if (month == 8 && date <= 22)
    {
        printf("Your Zodiac Sign is Leo\nSymbol is The Lion");
    }

    else if (month == 8 && date >= 23)
    {
        printf("Your Zodiac Sign is Virgo\nSymbol is The Virgin");
    }
    else if (month == 9 && date <= 22)
    {
        printf("Your Zodiac Sign is Virgo\nSymbol is The Virgin");
    }
    else if (month == 9 && date >= 23)
    {
        printf("Your Zodiac Sign is Libra\nSymbol is The Scales");
    }
    else if (month == 10 && date <= 22)
    {
        printf("Your Zodiac Sign is Libra\nSymbol is The Scales");
    }

    else if (month == 10 && date >= 23)
    {
        printf("Your Zodiac Sign is Scorpio\nSymbol is The Scorpion");
    }
    else if (month == 11 && date <= 21)
    {
        printf("Your Zodiac Sign is Scorpio\nSymbol is The Scorpion");
    }

    else if (month == 11 && date >= 22)
    {
        printf("Your Zodiac Sign is Sagittarius\nSymbol is The Sagittarius");
    }
    else if (month == 12 && date <= 21)
    {
        printf("Your Zodiac Sign is Sagittarius\nSymbol is The Sagittarius");
    }

    else if (month == 1 && date >= 19)
    {
        printf("Your Zodiac Sign is Capricorn\nSymbol is The Capricorn");
    }
    else if (month == 21 && date <= 18)
    {
        printf("Your Zodiac Sign is Capricorn\nSymbol is The Capricorn");
    }

    else if (month == 1 && date >= 20)
    {
        printf("Your Zodiac Sign is Aquarius\nSymbol is The Aquarius");
    }
    else if (month == 2 && date <= 18)
    {
        printf("Your Zodiac Sign is Aquarius\nSymbol is The Aquarius");
    }

    else if (month == 2 && date >= 19)
    {
        printf("Your Zodiac Sign is Pisces\nSymbol is The Fisher");
    }
    else if (month == 3 && date <= 20)
    {
        printf("Your Zodiac Sign is Pisces\nSymbol is The Fisher");
    }
}