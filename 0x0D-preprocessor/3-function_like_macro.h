<<<<<<< HEAD
#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))


#endif /* FUNCTION_LIKE_MACRO */
=======
#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_

#define ABS(x) (((x) < 0) ? -(x) : (x))
#endif
>>>>>>> 2ad4856dcf8bd0f82c3fe68c4aa7c784ea128e30
