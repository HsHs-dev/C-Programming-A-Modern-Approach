/******************************************************************************************************
*  6. Why is it not a good idea for an identifier to contain more than one adjacent underscore (as    *
*  in current___balance, for example)?                                                                *
*******************************************************************************************************/

/*
Identifiers beginning with an underscore followed by an uppercase letter or identifiers containing double underscores
are reserved by the implementation (compiler or standard library).
For example, names like __FILE__, __LINE__, or __func__ are predefined macros in C.
*/
