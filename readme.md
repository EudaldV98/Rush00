# RUSH00
## Iterative with nested 'while'

1. Edges

   ```c x == 0 && y == 0 ```

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

   Print a whitespace

For the next exercises (*rush0x*) the methodology is the same. The only thing to pay attention, and this is the *core of the rush*, is the good use of **_logical operators_** to get the expected result.

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

