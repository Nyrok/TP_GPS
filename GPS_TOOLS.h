#ifndef GPS_TOOLS
#define GPS_TOOLS

// Exercice 1
typedef enum
{
    UNKNOWN_FRAME=0,
    XRMC_FRAME,
    XGGA_FRAME,
    XGLL_FRAME,
    XGNS_FRAME
} GPS_FRAME_TYPE;

// Exercice 2
struct GPS_DATA { 
    char * frame;
    int frame_type;
    int is_valid;
    int year, month, day, hours, minutes;
    double seconde;
    double latitude;
    double longitude;
    double altitude;
};

#endif