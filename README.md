# Parabolic-Object-Movement

**Here, I have moved a object in a parabolic path using equation Y = aX<sup>2</sup> + bX + c**

### Steps:

**1. Take three points: starting point, ending point and a point that lies in the path.** *For my case, points are (10, 100), (70, 80) and (50, 20) respectively.*

**2. Put these all points in equation above and generate three equations as:**

&emsp;&emsp; **100 = a`*`10<sup>2</sup> + b`*`10 + c** *..............(i)*

&emsp;&emsp; **80 = a`*`70<sup>2</sup> + b`*`70 + c** *..............(ii)*

&emsp;&emsp; **20 = a`*`50<sup>2</sup> + b`*`50 + c** *..............(iii)*

**3. Solve the above three equations to get the value of constants a, b and c**

**4. Then equation becomes Y = (1/12)X<sup>2</sup> - (7)X + (485/30)**

**5. Use this equation and use loop to move object as shown in sample code.**
