/*
13. Rewrite the following loop so that its body is empty:
for (n = 0; m > 0; n++)
m /= 2;
*/

int main(void) {

    int n, m;
    for (n = 0; m > 0; n++, m /= 2);

    return 0;
}