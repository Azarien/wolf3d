#define ARTSEXTERN
#define DEMOSEXTERN
#define CARMACIZED

#ifdef DEMO
#ifdef SPEAR
#define SPEARDEMO
#else
#define UPLOAD
#endif
#endif

#ifndef SPEAR
#ifndef DEMO
// comment out this to enable "read this"
#define GOODTIMES
#endif
#endif
