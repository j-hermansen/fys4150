# Project 1

## Problem 1
1. Solve second-order differential equation and find the general solution
2. Plugin boundary conditions and get an exact solution

## Problem 2
Compile program: 
```g++ p2.cpp -o p2.exe```
Run: 
```./p2.exe``` 

This generates a data file (data.txt) that is used by a python script
to plot the data on a line graph. To run python script:
```python3 p2plot.py```

## Problem 3
Discretized version of the Possion equation:


```
x -> x_i          x_0, x_1, ..., x_n
u(x) -> u_i       u_0, u_1, ..., u_n

\frac{d^2u}{dx^2}|_x_i = u''_i=\frac{u_{i+1}-2u_i+u_{i-1}}{h^2} + O(h^2)

```

<img src="https://latex.codecogs.com/gif.latex?\frac{d^2u}{dx^2}|_x_i&space;=&space;u''_i=\frac{u_{i&plus;1}-2u_i&plus;u_{i-1}}{h^2}&space;&plus;&space;O(h^2)" title="\frac{d^2u}{dx^2}|_x_i = u''_i=\frac{u_{i+1}-2u_i+u_{i-1}}{h^2} + O(h^2)" />


## Problem 4
