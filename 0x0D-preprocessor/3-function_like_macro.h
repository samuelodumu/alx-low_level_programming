#ifndef _FUNCTION_LIKE_MACRO_H_
#define _FUNCTION_LILE_MACRO_H_

#define ABS(x)

#if (ABS < 0)
{
	#undef ABS
	#define ABS(x) ((-1) * (x))
}

#elif (ABS >= 0)
{
	#undef ABS
	#define ABS(x) (x)
}
#endif /* ABS */

#endif /* _FUNCTION_LIKE_MACRO_H_ */
