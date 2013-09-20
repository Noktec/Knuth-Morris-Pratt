Knuth-Morris-Pratt Algorithm
==============

This is an implementation of the KMP algorithm. This algorithm is used to find a pattern![equation](http://www.texify.com/img/%5Cnormalsize%5C%21P%3D%5C%7Bp_1%2Cp_2%2C...%2Cp_m%5C%7D.gif) of length m with an alphabet of ![equation2](http://www.texify.com/img/%5Cnormalsize%5C%21%5CSigma%20%3D%2026.gif) in a text ![equation3](http://www.texify.com/img/%5Cnormalsize%5C%21T%3D%5C%7Bt_1%2Ct_2%2C...%2Ct_n%5C%7D.gif) with a length of n.

Getting Started
--------------
To compile the example simply use : 

``$ sudo make``

To use the KMP library create a main.c file and use the following functions :

``searchKMP(word,m,myString,n)``

Where the different variables corresponds to the description of the KMP Algorithm. 

References
------------
* Donald E. Knuth, James H. Morris, and Vaughan R. Pratt. SIAM Journal on Computing 6(2):323--350 (March 1977)


License
----------
This code is released under [The MIT License](http://opensource.org/licenses/MIT).