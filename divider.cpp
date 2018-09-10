#include <iostream>
#include <string>
#include <map>


constexpr int SIZE = 6;

constexpr int CHAOS = 0;
constexpr int REGAL = 1;
constexpr int JEWELLERS = 2;
constexpr int FUSINGS = 3;
constexpr int VAAL = 4;
constexpr int CHROMATICS = 5;

std::string currencyNames[SIZE] = { "Chaos", "Regal", "Jewellers", "Fusings", "Vaal", "Chromatics" };
int currency[SIZE];
int dividedCurrency[SIZE];


void println(std::string message)
{
  std::cout << message << '\n';
}

void divide(int amount)
{
  for (int i = 0; i < SIZE - 1; ++i)
  {
    if (currency[i] > 0)
      dividedCurrency[i] = currency[i] / amount;
  }
}

void menu()
{
  int division = 0;
  println("Enter amount of people to divide between: ");
  std::cin >> division;

  for (int i = 0; i < SIZE - 1; ++i)
  {
    println("Enter total amount of " + currencyNames[i] + ": ");
    std::cin >> currency[i];

  }
  divide(division);

  println("Result:");
  for (int i = 0; i < SIZE - 1; ++i)
  {
    std::cout << currencyNames[i] << ": " << dividedCurrency[i] << '\n';
  }
}


int main(int argc, char *argv[])
{

  menu();

  return 0;
}
