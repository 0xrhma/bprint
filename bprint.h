#include <stdio.h>

#ifdef DEBUG
#define dbg_out stderr
#define print_dbg(...) fprintf(dbg_out, __VA_ARGS__)
#else
#define print_dbg(...) ((void)0)
#endif

#define rel_out stderr
#define print(...) fprintf(rel_out, __VA_ARGS__)
#define printc(val) putc(val, rel_out)

#ifdef __linux__
    #define CS_RESET        "\033[0m"
    #define CS_BOLD         "\033[1m"
    #define CS_DIM          "\033[2m"
    #define CS_UNDERLINE    "\033[4m"
    #define CS_BLINK        "\033[5m"
    #define CS_REVERSE      "\033[7m"
    #define CS_HIDDEN       "\033[8m"

    #define CS_FG_BLACK     "\033[30m"
    #define CS_FG_RED       "\033[31m"
    #define CS_FG_GREEN     "\033[32m"
    #define CS_FG_YELLOW    "\033[33m"
    #define CS_FG_BLUE      "\033[34m"
    #define CS_FG_MAGENTA   "\033[35m"
    #define CS_FG_CYAN      "\033[36m"
    #define CS_FG_WHITE     "\033[37m"

    #define CS_FG_BBLACK    "\033[90m"
    #define CS_FG_BRED      "\033[91m"
    #define CS_FG_BGREEN    "\033[92m"
    #define CS_FG_BYELLOW   "\033[93m"
    #define CS_FG_BBLUE     "\033[94m"
    #define CS_FG_BMAGENTA  "\033[95m"
    #define CS_FG_BCYAN     "\033[96m"
    #define CS_FG_BWHITE    "\033[97m"

    #define CS_BG_BLACK     "\033[40m"
    #define CS_BG_RED       "\033[41m"
    #define CS_BG_GREEN     "\033[42m"
    #define CS_BG_YELLOW    "\033[43m"
    #define CS_BG_BLUE      "\033[44m"
    #define CS_BG_MAGENTA   "\033[45m"
    #define CS_BG_CYAN      "\033[46m"
    #define CS_BG_WHITE     "\033[47m"

    #define CS_BG_BBLACK    "\033[100m"
    #define CS_BG_BRED      "\033[101m"
    #define CS_BG_BGREEN    "\033[102m"
    #define CS_BG_BYELLOW   "\033[103m"
    #define CS_BG_BBLUE     "\033[104m"
    #define CS_BG_BMAGENTA  "\033[105m"
    #define CS_BG_BCYAN     "\033[106m"
    #define CS_BG_BWHITE    "\033[107m"
#else

    #define CS_RESET        ""
    #define CS_BOLD         ""
    #define CS_DIM          ""
    #define CS_UNDERLINE    ""
    #define CS_BLINK        ""
    #define CS_REVERSE      ""
    #define CS_HIDDEN       ""

    #define CS_FG_BLACK     ""
    #define CS_FG_RED       ""
    #define CS_FG_GREEN     ""
    #define CS_FG_YELLOW    ""
    #define CS_FG_BLUE      ""
    #define CS_FG_MAGENTA   ""
    #define CS_FG_CYAN      ""
    #define CS_FG_WHITE     ""

    #define CS_FG_BBLACK    ""
    #define CS_FG_BRED      ""
    #define CS_FG_BGREEN    ""
    #define CS_FG_BYELLOW   ""
    #define CS_FG_BBLUE     ""
    #define CS_FG_BMAGENTA  ""
    #define CS_FG_BCYAN     ""
    #define CS_FG_BWHITE    ""

    #define CS_BG_BLACK     ""
    #define CS_BG_RED       ""
    #define CS_BG_GREEN     ""
    #define CS_BG_YELLOW    ""
    #define CS_BG_BLUE      ""
    #define CS_BG_MAGENTA   ""
    #define CS_BG_CYAN      ""
    #define CS_BG_WHITE     ""

    #define CS_BG_BBLACK    ""
    #define CS_BG_BRED      ""
    #define CS_BG_BGREEN    ""
    #define CS_BG_BYELLOW   ""
    #define CS_BG_BBLUE     ""
    #define CS_BG_BMAGENTA  ""
    #define CS_BG_BCYAN     ""
    #define CS_BG_BWHITE    ""

#endif