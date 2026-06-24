# C++ Market Systems Lab

An evolving C++ project focused on building a deeper understanding of modern C++, memory, performance, and market-system design.

The project begins with a command-line market-data analytics module and will gradually develop into a single-instrument limit order book and matching engine.

## Current Status

The market-data analytics module is currently under development.

### Implemented

* Validated input for the number of price observations
* Storage of decimal market prices using `std::vector`
* Rejection of non-numeric, zero, and negative prices
* Minimum-price calculation
* Maximum-price calculation
* Separation of declarations and implementations across header and source files
* Terminal-based compilation using Clang

## Planned Analytics Features

* Mean price
* Net and percentage price change
* Upward, downward, and flat move counts
* Simple returns
* Per-period volatility
* Maximum drawdown
* Documented test cases and edge-case handling

## Long-Term Roadmap

The project will eventually include:

* Limit order modelling
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
├── docs/
│   └── learning_log.md
├── .gitignore
├── LICENSE
└── README.md
```

## Building the Project

From the repository root, compile the program using:

```bash
clang++ -std=c++20 -Wall -Wextra -Wpedantic \
src/main.cpp src/analytics.cpp \
-Iinclude \
-o market_stats
```

Run the executable with:

```bash
./market_stats
```

## Example

```text
Number of prices to be entered: 4
Enter 4 prices:
Price 1: 100
Price 2: 120
Price 3: 90
Price 4: 105

Minimum price: 90
Maximum price: 120
```

## Learning Objectives

This project is being built alongside The Cherno’s C++ course to develop practical understanding of:

* The C++ compilation and linking process
* Header and source-file separation
* References and value semantics
* Object lifetime and memory ownership
* Standard-library containers
* Modern C++ design
* Testing and debugging
* Benchmark-driven optimisation
* Performance-sensitive systems programming

## Development Approach

Each feature is implemented incrementally and documented through meaningful Git commits.

The emphasis is on understanding the design decisions and trade-offs rather than copying a complete implementation.
