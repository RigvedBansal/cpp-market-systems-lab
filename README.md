# C++ Market Systems Lab

An evolving C++ project focused on developing practical understanding of modern C++, quantitative market analytics, program architecture, memory management, and performance-sensitive system design.

The project currently contains a command-line market-data analytics application. It will progressively evolve into a single-instrument limit order book and matching engine.

## Current Status

The initial market-data analytics module is operational.

### Implemented

* Validated input for market-price observations
* Storage of decimal prices using `std::vector`
* Rejection of invalid, zero, and negative prices
* Minimum and maximum price
* Mean price
* Net price change
* Percentage price change
* Upward, downward, and flat movement counts
* Simple period-to-period returns
* Population standard deviation of returns
* Separation of declarations and implementations using header and source files
* Terminal-based compilation using Clang

## Current Output

The application generates a market-data report containing:

```text
Observations
Minimum price
Maximum price
Mean price
Net price change
Percentage price change
Upward moves
Downward moves
Flat moves
Simple returns
Per-period volatility
```

## Planned Analytics Features

* Maximum drawdown
* Improved numerical formatting
* File-based market-data input
* Automated unit testing
* Summary result structures

## Long-Term Roadmap

The project will gradually expand to include:

* Strongly typed order models
* Buy and sell limit-order books
* Price-time priority
* Full and partial fills
* Order cancellation
* Trade generation
* Market-event replay
* Performance benchmarking
* Move semantics and allocation tracking
* Multithreaded simulations
* CMake project configuration
* Sanitizers and static analysis
* Continuous integration

## Project Structure

```text
cpp-market-systems-lab/
├── include/
│   └── analytics.hpp
├── src/
│   ├── main.cpp
│   └── analytics.cpp
├── data/
│   └── sample_prices.txt
├── .gitignore
├── LICENSE
└── README.md
```

## Building the Project

From the repository root:

```bash
clang++ -std=c++20 -Wall -Wextra -Wpedantic \
src/main.cpp src/analytics.cpp \
-Iinclude \
-o market_stats
```

Run the executable:

```bash
./market_stats
```

## Example

```text
Number of prices to be entered: 5
Enter 5 prices:
Price 1: 100
Price 2: 105
Price 3: 105
Price 4: 98
Price 5: 110

MARKET DATA REPORT
------------------
Observations: 5
Minimum price: 98
Maximum price: 110
Mean price: 103.6
Net price change: 10
Percentage price change: 10%
Upward moves: 2
Downward moves: 1
Flat moves: 1
Simple returns:
0.05
0
-0.0666667
0.122449
Per-period volatility: ...
```

## Development Approach

The project is being built incrementally alongside The Cherno’s C++ course.

Each stage introduces new language concepts and immediately applies them to a growing market-systems project. The emphasis is on understanding implementation decisions, memory behaviour, correctness, and measured performance rather than copying a finished system.
