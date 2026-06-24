#pragma once
#include <vector>

double calculateMinimum(const std::vector<double>& prices);
double calculateMaximum(const std::vector<double>& prices);
double calculateMean(const std::vector<double>& prices);
double calculateNetPriceChange(const std::vector<double>& prices);
int countUpwardMoves(const std::vector<double>& prices);
int countDownwardMoves(const std::vector<double>& prices);
int countFlatMoves(const std::vector<double>& prices);
double calculatePercentagePriceChange(const std::vector<double>& prices);
std::vector<double> calculateSimpleReturns(const std::vector<double>& prices);
