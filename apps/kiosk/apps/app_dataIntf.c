#include <stdbool.h>
#include <string.h>

#include "app_dataIntf.h"

#define NO_VERIFY 1

struct resInfo dummy =
{
    .lastName = "mchp",
    .confNum = "1234",

    .bedType = DOUBLE_QUEEN,
    .numAdults = 4,
    .numRooms = 2,
    .roomNumber = 214,
    
    .dateIn = {
        .wkDay = THU,
        .day = 12,
        .month = 6,
        .year = 2025,
    },
    
    .dateOut = {
        .wkDay = SUN,
        .day = 15,
        .month = 6,
        .year = 2025,
    },
    
    .totalCharges = ROOM_CHARGE,
    
    .hasBalconyView = false,
    .hasBreakfast = false,
    .hasLateCheckout = false,

    .status = CONFIRMED,
};

int get_reservation(char * lastname, char * confnum, struct resInfo * res)
{
    int retval = -1;

#ifndef NO_VERIFY    
    if (strcmp(lastname, dummy.lastName) == 0 && 
        strcmp(confnum, dummy.confNum) == 0)
#endif        
    {
        memcpy((void *) res, (void *) &dummy, sizeof(struct resInfo));
        
        retval = 0;
    }
    
    return retval;
}

int complete_reservation(char * lastname, char * confnum, TRANS_t inout)
{
    int retval = -1;

#ifndef NO_VERIFY    
    if (strcmp(lastname, dummy.lastName) == 0 && 
        strcmp(confnum, dummy.confNum) == 0)
#endif        
    {
        switch(dummy.status)
        {
	        case CONFIRMED:
            {
                if (inout == CHECKIN)
                {
                    dummy.status = CHECKED_IN;

                    /* Deposit was paid during check in */
                    dummy.totalCharges -= DEPOSIT_FEE;

                    retval = 0;
                }
                break;
            }
	        case CHECKED_IN:
            {
                if (inout == CHECKOUT)
                {
                    dummy.status = CHECKED_OUT;

                    retval = 0;
                }
                break;
            }
            case CHECKED_OUT:
            default:
            {
                retval = -1;
                break;
            }
        }
    }   

    return retval; 
}

int upgrade_reservation(char * lastname, char * confnum, UP_t upgrade)
{
    int retval = -1;

#ifndef NO_VERIFY        
    if (strcmp(lastname, dummy.lastName) == 0 && 
        strcmp(confnum, dummy.confNum) == 0)
#endif        
    {
        switch(upgrade)
        {
            case LATE_CHECKOUT:
            {
                dummy.hasLateCheckout = true;
                dummy.totalCharges += LATECHECKOUT_FEE;

                break;
            }
            case BALCONY_VIEW:
            {
                dummy.hasBalconyView = true;
                dummy.totalCharges += BALCONY_FEE;

                break;
            }
            case BREAKFAST:
            {
                dummy.hasBreakfast = true;
                dummy.totalCharges += BREAKFAST_FEE;
                break;
            }
            default:
                break;
        }
        
        retval = 0;
    }
        
    return retval;
}