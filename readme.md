# RUSH00
## Iterative with nested 'while'

1. Edges
```c 
x == 0 && y == 0
```

```c
x == 0 && y == h - 1
```

```c
x == w - 1 && y == 0
```

```c
x == w - 1 && y = h - 1
```

2. Top & Bottom "walls"
```c
y == 0
```

```c
y == height - 1
```

3. Left & Right "walls"
```c
x == 0
```

```c
x == w - 1
```

4. Inside the square

Print a ' '

