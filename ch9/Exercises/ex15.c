/*
15. The following (rather confusing) function finds the median of three numbers. Rewrite the
function so that it has just one return statement.
double median(double x, double y, double z)
 {
  if (x <= y)
    if (y <= z) return y;
    else if (x <= z) return z;
    else return x;
  if (z <= y) return y;
  if (x <= z) return x;
  return z;
 }
*/

double median(double x, double y, double z);

double median(double x, double y, double z) {
  double result;
   if (x <= y) {
    if (y <= z) result = y;
    else if (x <= z) result = z;
    else result = x;
   } else {
    if (z <= y) result = y;
    else if (x <= z) result = x;
    else result = z;
  }

  return result;
}