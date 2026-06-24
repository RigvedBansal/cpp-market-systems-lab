# Test Cases

Manual test cases used to verify the current market-data input and analytics functionality.

## 1. Mixed price movements

### Input

```text
Number of prices: 5
Prices: 100, 105, 105, 98, 110
```

### Expected result

```text
Observations: 5
Minimum price: 98
Maximum price: 110
Mean price: 103.6
Net price change: 10
Upward moves: 2
Downward moves: 1
Flat moves: 1
```

### Status

Passed.

---

## 2. Strictly increasing prices

### Input

```text
Number of prices: 3
Prices: 10, 20, 30
```

### Expected result

```text
Observations: 3
Minimum price: 10
Maximum price: 30
Mean price: 20
Net price change: 20
Upward moves: 2
Downward moves: 0
Flat moves: 0
```

### Status

Passed.

---

## 3. Strictly decreasing prices

### Input

```text
Number of prices: 5
Prices: 50, 40, 30, 20, 10
```

### Expected result

```text
Observations: 5
Minimum price: 10
Maximum price: 50
Mean price: 30
Net price change: -40
Upward moves: 0
Downward moves: 4
Flat moves: 0
```

### Status

Passed.

---

## 4. Single price

### Input

```text
Number of prices: 1
Prices: 42.5
```

### Expected result

```text
Observations: 1
Minimum price: 42.5
Maximum price: 42.5
Mean price: 42.5
Net price change: 0
Upward moves: 0
Downward moves: 0
Flat moves: 0
```

### Status

Passed.

---

## 5. Equal prices

### Input

```text
Number of prices: 3
Prices: 50, 50, 50
```

### Expected result

```text
Observations: 3
Minimum price: 50
Maximum price: 50
Mean price: 50
Net price change: 0
Upward moves: 0
Downward moves: 0
Flat moves: 2
```

### Status

Passed.

---

## 6. Decimal prices

### Input

```text
Number of prices: 3
Prices: 100.25, 99.75, 101.50
```

### Expected result

```text
Observations: 3
Minimum price: 99.75
Maximum price: 101.50
Mean price: 100.50
Net price change: 1.25
Upward moves: 1
Downward moves: 1
Flat moves: 0
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

The program rejects the observation count and exits.

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

### Input sequence

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

### Input sequence

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

### Input sequence

```text
Number of prices: 2
Price 1: hello
Price 1: 100
Price 2: 120
```

### Expected behaviour

The program clears the failed input state, discards the invalid input, and requests the same price again.

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
