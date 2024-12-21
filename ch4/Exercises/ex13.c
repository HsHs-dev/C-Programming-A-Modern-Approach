/*
13. Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it?
Justify your answer.
*/

/*
The expression `++i` is exactly the same as `(i += 1)`.

### Justification:

1. **Effect on `i`**:
   - Both `++i` and `(i += 1)` increment the value of `i` by 1 before any other operation. 
   - The operation modifies the variable `i` directly and immediately.

2. **Return Value**:
   - `++i` returns the incremented value of `i` after the increment operation.
   - `(i += 1)` also returns the new value of `i` after the addition.

3. **Difference with `i++`**:
   - `i++` increments `i` by 1, but **returns the original value of `i`** before the increment. This distinction means `i++` has a different return value than `(i += 1)` or `++i`.

Thus, since both `++i` and `(i += 1)` increment `i` and return the updated value, they are functionally equivalent in both effect and return value.
*/