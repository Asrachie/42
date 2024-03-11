//NAME
//       malloc, free, calloc, realloc, reallocarray - allocate and free dy
//       namic memory
//
//SYNOPSIS
//       #include <stdlib.h>
//
//       void *malloc(size_t size);
//       void free(void *ptr);
//       void *calloc(size_t nmemb, size_t size);
//       void *realloc(void *ptr, size_t size);
//       void *reallocarray(void *ptr, size_t nmemb, size_t size);
//
//   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
//
//       reallocarray():
//           Since glibc 2.29:
//               _DEFAULT_SOURCE
//           Glibc 2.28 and earlier:
//               _GNU_SOURCE
//
//DESCRIPTION
//       The malloc() function allocates size bytes and returns a pointer to
//       the  allocated  memory.  The memory is not initialized.  If size is
//       0, then malloc() returns either NULL, or  a  unique  pointer  value
//       that can later be successfully passed to free().
//
//       The free() function frees the memory space pointed to by ptr, which
//       must have been returned by a previous call to  malloc(),  calloc(),
//       or  realloc().   Otherwise, or if free(ptr) has already been called
//       before, undefined behavior occurs.  If ptr is NULL, no operation is
//       performed.
//
//       The  calloc()  function allocates memory for an array of nmemb ele
//       ments of size bytes each and returns a  pointer  to  the  allocated
//       memory.   The  memory  is set to zero.  If nmemb or size is 0, then
//       calloc() returns either NULL, or a unique pointer  value  that  can
//       later  be  successfully passed to free().  If the multiplication of
//       nmemb and size would result in integer overflow, then calloc()  re
//       turns  an error.  By contrast, an integer overflow would not be de
//       tected in the following call to malloc(), with the result  that  an
//       incorrectly sized block of memory would be allocated:
//
//           malloc(nmemb * size);
//
//       The realloc() function changes the size of the memory block pointed
//       to by ptr to size bytes.  The contents will  be  unchanged  in  the
//       range from the start of the region up to the minimum of the old and
//       new sizes.  If the new size is larger than the old size, the  added
//       memory  will  not be initialized.  If ptr is NULL, then the call is
//       equivalent to malloc(size), for all values  of  size;  if  size  is
//       equal  to zero, and ptr is not NULL, then the call is equivalent to
//       free(ptr).  Unless ptr is NULL, it must have been  returned  by  an
//       earlier  call  to  malloc(),  calloc(),  or realloc().  If the area
//       pointed to was moved, a free(ptr) is done.
//
//       The reallocarray() function changes the size of  the  memory  block
//       pointed  to  by  ptr  to be large enough for an array of nmemb ele
//       ments, each of which is size bytes.  It is equivalent to the call
//
//               realloc(ptr, nmemb * size);
//
//       However, unlike that realloc() call, reallocarray() fails safely in
//       the case where the multiplication would overflow.  If such an over
//       flow occurs, reallocarray() returns NULL, sets errno to ENOMEM, and
//       leaves the original block of memory unchanged.
//
//RETURN VALUE
//       The  malloc()  and calloc() functions return a pointer to the allo
//       cated memory, which is suitably aligned for any built-in type.   On
//       error, these functions return NULL.  NULL may also be returned by a
//       successful call to malloc() with a size of zero, or by a successful
//       call to calloc() with nmemb or size equal to zero.
//
//       The free() function returns no value.
//
//       The  realloc()  function  returns  a pointer to the newly allocated
//       memory, which is suitably aligned for any built-in type, or NULL if
//       the request failed.  The returned pointer may be the same as ptr if
//       the allocation was not moved (e.g., there was room  to  expand  the
//       allocation  in-place),  or different from ptr if the allocation was
//       moved to a new address.  If size was equal to 0, either NULL  or  a
//       pointer  suitable to be passed to free() is returned.  If realloc()
//       fails, the original block is left untouched; it  is  not  freed  or
//       moved.
//
//       On  success,  the  reallocarray() function returns a pointer to the
//       newly allocated memory.  On failure, it returns NULL and the origi
//       nal block of memory is left untouched.
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *)malloc(nmemb * size);
	if (result)
		return (ft_memset(result, 0, nmemb * size));
	return (NULL);
}

//int	main(void)
//{
//	char *arr = (char *)ft_calloc(2, sizeof(char));
//
//	if (arr == NULL) {
//		printf("Memory allocation failed\n");
//		return 1;
//	}
//
//	printf("Allocated array elements: %c %c\n", arr[0], arr[1]);
//	printf("Allocated array elements: %s\n", arr);
//
//	free(arr);
//
//	return 0;
//}