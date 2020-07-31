//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"", "dwmb-vol.sh",                   0,            10},
    {"", "dwmb-bat.sh",                   120,          3},
    {"", "dwmb-clock.sh",                 60,           1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
