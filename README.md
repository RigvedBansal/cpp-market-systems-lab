# C++ Market Systems Lab

An evolving C++ project focused on developing a practical understanding of modern C++, program architecture, memory, performance, and market-system design.

The project currently contains a command-line market-data analytics module and will gradually evolve into a single-instrument limit order book and matching engine.

## Current Status

The first version of the market-data analytics module is operational.

### Implemented

* Validated input for the number of price observations
* Storage of decimal market prices using `std::vector`
* Rejection of non-numeric, zero, and negative prices
* Minimum-price calculation
* Maximum-price calculation
* Mean-price calculation
* Net price change
* Upward-move count
* Downward-move count
* Flat-move count
* Separation of declarations and implementations using header and source files
* Manual test cases covering normal and invalid input
* Terminal-based compilation using Clang

## Planned Analytics Features

* Percentage price change
* Simple returns
* Per-period volatility
* Maximum drawdown
* File-based market-data input
* Automated unit tests

## Long-Term Roadmap

The project will eventually include:

* Limit-order modelling
* Buy and sell order books
* Price-time priority
* Full and partial order fills
* Order cancellation
* Trade generation
* Market-event replay
* Performance benchmarks
* Move semantics and allocation tracking
* Multithreaded simulation
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
├── tests/
│   └── test_cases.md
├── .gitignore
├── LICENSE
└── README.md
```

## Building the Project

From the repository root, compile using:

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
Upward moves: 2
Downward moves: 1
Flat moves: 1
```

## Learning Objectives

This project is being built alongside The Cherno’s C++ course to develop practical understanding of:

* The C++ compilation and linking process
* Header and source-file separation
* References and value semantics
* Standard-library containers
* Input validation
* Modular program design
* Testing and debugging
* Object lifetime and memory ownership
* Benchmark-driven optimisation
* Performance-sensitive systems programming

## Development Approach

Features are implemented incrementally and recorded through meaningful Git commits.

The emphasis is on understanding how each component works and why particular design decisions are made, rather than copying a complete implementation.
