// this makes it possible to do rolling combos (zx) with keys that
// convert to other keys on hold (z becomes ctrl when you hold it,
// and when this option isn't enabled, z rapidly followed by x
// actually sends Ctrl-x. That's bad.)
#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING

// #define FORCE_NKRO

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#define TAPPING_TERM 200
#endif // TAPPING_TERM

