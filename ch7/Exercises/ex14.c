/*
14. Does the following statement always compute the fractional part of f correctly (assuming
that f and frac_part are float variables)?
frac_part = f - (int) f;
If not, what’s the problem?
*/

/*
No, if the f value is larger than the biggest representable int, then there will be overflow,
and the yielded value will be wrong
*/