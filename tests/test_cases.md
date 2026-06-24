# Test Cases

This document records the manual test cases used to verify the market-data input system and analytics functions.

## 1. Normal price sequence

### Input

```text
Number of prices: 4
Prices: 100, 120, 90, 105
```

### Expected result

```text
Minimum price: 90
Maximum price: 120
```

### Status

Passed.

---

## 2. Single price

### Input

```text
Number of prices: 1
Prices: 42.5
```

### Expected result

```text
Minimum price: 42.5
Maximum price: 42.5
```

### Status

Passed.

---

## 3. Equal prices

### Input

```text
Number of prices: 3
Prices: 50, 50, 50
```

### Expected result

```text
Minimum price: 50
Maximum price: 50
```

### Status

Passed.

---

## 4. Decimal prices

### Input

```text
Number of prices: 3
Prices: 100.25, 99.75, 101.50
```

### Expected result

```text
Minimum price: 99.75
Maximum price: 101.50
```

### Status

Passed.

---

## 5. Strictly increasing prices

### Input

```text
Number of prices: 5
Prices: 10, 20, 30, 40, 50
```

### Expected result

```text
Minimum price: 10
Maximum price: 50
```

### Status

Passed.

---

## 6. Strictly decreasing prices

### Input

```text
Number of prices: 5
Prices: 50, 40, 30, 20, 10
```

### Expected result

```text
Minimum price: 10
Maximum price: 50
```

### Status

Passed.

---

## 7. Zero observations

### Input

```text
Number of prices: 0
```

### Expected behaviour

The program rejects the observation count and exits without requesting prices.

### Expected output

```text
Invalid number of prices.
```

### Status

Passed.

---

## 8. Negative observation count

### Input

```text
Number of prices: -3
```

### Expected behaviour

The program rejects the observation count and exits.

### Expected output

```text
Invalid number of prices.
```

### Status

Passed.

---

## 9. Non-numeric observation count

### Input

```text
Number of prices: abc
```

### Expected behaviour

The program detects the failed input operation and exits.

### Expected output

```text
Invalid number of prices.
```

### Status

Passed.

---

## 10. Zero price

### Input

```text
Number of prices: 2

Price 1: 0
Price 1: 100
Price 2: 120
```

### Expected behaviour

The program rejects zero and requests the same price again.

### Expected output

```text
Price must be positive.
```

### Final stored prices

```text
100, 120
```

### Status

Passed.

---

## 11. Negative price

### Input

```text
Number of prices: 2

Price 1: -50
Price 1: 100
Price 2: 120
```

### Expected behaviour

The program rejects the negative value and requests the same price again.

### Expected output

```text
Price must be positive.
```

### Final stored prices

```text
100, 120
```

### Status

Passed.

---

## 12. Non-numeric price

### Input

```text
Number of prices: 2

Price 1: hello
Price 1: 100
Price 2: 120
```

### Expected behaviour

The program clears the failed input state, removes the invalid input, and requests the same price again.

### Expected output

```text
Please enter a number.
```

### Final stored prices

```text
100, 120
```

### Status

Passed.
