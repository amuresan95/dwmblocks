// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"| ", "cat /home/andrei/.cache/spotifyd/currentsong", 0, 30},

    {"| ", "volume", 0, 10},

    {"| ", "cat /home/andrei/.cache/dockercount", 0, 9},

    {"| ", "mailbox", 180, 12},

    {"| ", "cat /home/andrei/.cache/newsboat", 0, 6},

    {"| ", "todos", 0, 7},

    {"| ", "cat /home/andrei/.cache/pacupdates", 0, 8},

    {"| ", "network", 10, 0},

    {"| ", "battery", 60, 0},

    {"| ", "calendar", 60, 7},

    {"| ", "date '+ %Y-%m-%d %I:%M%p'", 60, 0},

    {"| ", "date --utc '+ %Y-%m-%d %I:%M%p'", 60, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';
