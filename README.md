# SDC-PID
This code is PID Controller of a car

1. main.cpp --> this part recieves the error from the simulator and give the steering, throttle and speed controller of the car
2. PID.h and PID.cpp --> this part include the PID Controller

*Tunning Process for throttle 0.3*

### 1. P-Part
I tunned this part looking how the car behaves while driving straight.

* Kp=1 --> car was oscillating too much, while driving straight.
* Kp=0.5, 0.1 --> oscillations acceptable while driving straight.
* Kp=0.05 --> oscillations started to increased again
> Kp = 0.05

### 2. D-Part
This part is used to control the car on curves
* Kd= 0.1 --> almost no change
* Kd= 0.5 --> car can follow better the curve
* Kd = 1 and Kp = 0.1 --> To balance the control of the P-Part and the D-Part, I increased both together --> Car can follow curves good enough
> Kd = 1 and Kp = 0.1

### 3. I-Part
This part should correct offsets.
* Ki = 0.1 --> causes an increment of the oscillations
* Ki = 0.001 --> car can drive good enough

> Kd = 1, Ki=0.001 and Kp = 0.1
