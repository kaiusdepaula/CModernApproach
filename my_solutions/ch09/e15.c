/*
The following (rather confusing) function finds the median of three numbers. Rewrite the
function so that it has just one return statement.
double median(double x, double y, double z)
if (x <= y)
if (y <= z) return y;
else if (x <= z) return z;
else return x;
if (z <= y) return y;
if (x <= z) return x;
return z;
}
*/

double median(double x, double y, double z) {
    double median = x;
    if (x <= y) {
        if (y <= z) {
            median = y;
        } else if (x <= z) {
            median = z;
        }
    } else if (z <= y) {
        median = y;
    } else {
        median = z;
    }
    return median;
}