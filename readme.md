# RUSH00
## Iterative with nested 'while'

1. Corners

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

2. Top & Bottom edges

   ```c
               y == 0
   ```

   ```c
               y == height - 1
   ```

3. Left & Right edges

   ```c
               x == 0
   ```

   ```c
               x == w - 1
   ```

4. Inside the square

   Print a whitespace

For the next exercises (*rush0x*) the methodology is the same. The only thing to pay attention, and this is the *core of the rush*, is the good use of **_logical operators_** and __*logical bloacks*__ to get the expected result.

## Setting up a 'pattern' to make next exercises easier

1. Identify and split particular cases

 * 1, 1 given as width and height

     ```c
               width == 1 && height == 1
     ```

 * width is 1 so only a column is printed (size doesn't matter)

     ```c
               width == 1 && hegiht > 1
     ```

   Write a function for this case

 * height is 1 so only a row is printed (size doesn't matter)

     ```c
               height == 1 && width > 1
     ```

   Also write a function for this case

2. Write a function that will print the top or the bottom of the square/rectangle (depending on params)

   Looking like `print_top_down(width, char_left, char_filler, char_right)`

   This way it can be used for both top and bottom.

3. Loop through columns (height value) and print the row using width case function

```c
while ([case])
   print_row(width, char_left, char_filler, char_right)
```

4. Join last two points and make the calls in order to print the squares correctly

# RUSH01
## Iterative with nested 'while'

   As the main concept is already explained in *Rush00* I won't explain all the methodology around but the things to change or to modify in order to reach the goal.

1. Only one type of edges, so one can be removed and the other replace the `char` according to the one of the exercise.

2. Corners in this case change. 

* Top corners:

```c
            x == 0 && y == 0
```

```c
            x == width - 1 && y == height - 1
```

* Bottom corners:

```c
            x == width - 1 && y == 0
```

```c
            x == 0 && y == height - 1
```

3. With this in mind. Make well use of __*logical operators*__ and __*logical blocks*__.

## Same pattern as Rush00

   Same goes for this. I won't explain everything. And with this method though only `char`'s have to be replaced. You'll notice doing it.

* Just modify `char`'s to be printed in __*function calls*__. Simple isn't it?

# RUSH02
## Iterative with nested 'while'

   Mostly like Rush00, just making good use of __*logical operations*__ and __*logical blocks*__

1. Top corners

```c
            x == 0 && y == 0
```

```c
            x == width - 1 && y == 0
```

2. Bottom corners

```c
            x == 0 && y == height - 1
```

```c
            x == width - 1 && y == height - 1
```

## Same pattern as Rush00

* Just modify `char`'s to be printed in __*function calls*__. Again, simple.

# RUSH03
## Iterative with nested 'while'

   Super similar to Rush02. Just check on __*logical operators and blocks!*__.

1. Top corners

```c
            y == 0 && x == 0
```

```c
            y == height - 1 && x == 0
```

2. Bottom corners

```c
            y == 0 && x == width - 1
```

```c
            y == height - 1 && x == width - 1
```

## Same pattern as Rush00

* Just modify `char`'s to be printed in __*function calls*__. Once again, simple.

# RUSH04
## Iterative with nested 'while'

   Super similar to Rush01 more than others. Specially important, although it is in the others too, but here more, and sorry to repeat it again, the good use of __*logical operators and blocks*__.

1. Top corners:

```c
            y == 0 && x == 0
```

```c
            y == height - 1 && x == width - 1
```

2. Bottom corners:

```c
            y == 0 && x == width - 1
```

```c
            y == height - 1 && x == 0
```

## Same pattern as Rush00 and the others

* Just modify `char`'s to be printed in __*function calls*__. Once and for last, simple.

