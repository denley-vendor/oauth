#ifndef _OAUTH_XMALLOC_H
#define _OAUTH_XMALLOC_H      1 

#ifdef __cplusplus
extern "C" {
#endif 

/* Prototypes for functions defined in xmalloc.c  */
void *xmalloc (size_t size);
void *xcalloc (size_t nmemb, size_t size);
void *xrealloc (void *ptr, size_t size);
char *xstrdup (const char *s);

#ifdef __cplusplus
}
#endif 

#endif
