/***************************************************************
*  5. Which of the following are not legal C identifiers?      *
*  (a) 100_bottles                                             *
*  (b) _100_bottles                                            *
*  (c) one__hundred__bottles                                   *
*  (d) bottles_by_the_hundred_                                 *
****************************************************************/

int main(void) {

    // int 100_bottles; illegal, can't start with a number
    int _100_bottles;
    int one__hundred__bottles;
    int bottles_by_the_hundred_;

    return 0;
}
