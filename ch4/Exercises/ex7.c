/*
The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
Why doesn’t this technique work?
*/