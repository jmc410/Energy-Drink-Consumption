#include <iostream>

int main() {
  // Customer Numer
  int customerNumber = 16500;

  // Percentages In Decimal Form
  double percentageBoughtEG = 0.15;
  double percentageBoughtPC = 0.58;

  // Calculate
  int egCustomers = customerNumber * percentageBoughtEG;
  int pcPreferance = egCustomers * percentageBoughtPC;

  // Display/Output
  std::cout << "Results of Survey:\n";
  std::cout << "Customers Who Bought Energy Drink Per Week " << egCustomers << "\n";
  std::cout << "Customers Who Prefer Citrus " << pcPreferance << "\n";
  endl(std::cout);
  endl(std::cout);
  std::cout << "The Angry Face\n";
  std::cout << "୧(๑•̀ᗝ•́)૭\n";
  return 0;
}