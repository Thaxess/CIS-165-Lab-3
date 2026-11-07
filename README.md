# CIS-165 Lab 3

Course section: [CIS-165-B030 or CIS-165-W099]

## Initial plans

### diamond.cpp
How I will display the seven lines: <br>
Probably by using a 7 different cout lines to write out each asteriks.


### game_time.cpp
I will store 78 minutes for Level 1 and 144 minutes for Level 2. <br>
I will use integer division to find the whole hours and the remainder operator to find the leftover minutes. <br>

Calculations:
I will subtract the Level 1 time from the Level 2 time, then convert that difference into hours and remaining minutes. <br>
I will store each result in a variable before displaying it with a clear label and units. <br>

Output:

## Compiling and running
Just used the C/C++ plugin using g++ in VsCode. <br>
diamond.cpp -> cmd /c chcp 65001>nul && C:\msys64\ucrt64\bin\g++.exe -fdiagnostics-color=always -g "C:\Users\arif\OneDrive\Desktop\Server\CIS-165 Lab-3\diamond.cpp" -o "C:\Users\arif\OneDrive\Desktop\Server\CIS-165 Lab-3\diamond.exe" <br>
game_time.cpp -> cmd /c chcp 65001>nul && C:\msys64\ucrt64\bin\g++.exe -fdiagnostics-color=always -g "C:\Users\arif\OneDrive\Desktop\Server\CIS-165 Lab-3\game_time.cpp" -o "C:\Users\arif\OneDrive\Desktop\Server\CIS-165 Lab-3\game_time.exe" <br>

## Testing

### Diamond pattern

Expected pattern:

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

Actual pattern:

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

### Assigned time values

Values: Level 1 = 78 minutes; Level 2 = 144 minutes <br>

Expected results before running:

```text
Level One: 1 hours and 18 minutes.
Level Two: 2 hours and 24 minutes.
Level Two took 1 hours and 6 minutes more than Level One.
```

Actual output:

```text
Level One: 1 hours and 18 minutes.
Level Two: 2 hours and 24 minutes.
Level Two took 1 hours and 6 minutes more than Level One.
```

Match or correction: <br>
It worked flawlessly, as expected. 

### Changed time values

Values: 93 and 187<br>

Expected results before running:

```text
Level One: 1 hours and 33 minutes.
Level Two: 3 hours and 7 minutes.
Level Two took 1 hours and 34 minutes more than Level One.
```

Actual output:

```text
Level One: 1 hours and 33 minutes.
Level Two: 3 hours and 7 minutes.
Level Two took 1 hours and 34 minutes more than Level One.
```

Match or correction: <br>
As same as the last one, It worked flawlessly, as expected. 

### Final reruns

```text
Level One: 1 hours and 18 minutes.
Level Two: 2 hours and 24 minutes.
Level Two took 1 hours and 6 minutes more than Level One.
```
