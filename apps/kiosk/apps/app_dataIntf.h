// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C)  Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _APP_DATAINTF_H
#define _APP_DATAINTF_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

#define ROOM_CHARGE 270
#define LATECHECKOUT_FEE 24.00
#define BREAKFAST_FEE 15.00
#define BALCONY_FEE 31.00

#define DEPOSIT_FEE 200.00
    
#define MAX_GUEST_NAME_LENGTH 128
#define MAX_CONF_NUM_LENGTH 128

typedef enum   
{ 
    KING, 
    DOUBLE_QUEEN,
    QUEEN, 
} BED_t;

typedef enum   
{ 
    LATE_CHECKOUT, 
    BALCONY_VIEW, 
    BREAKFAST, 
} UP_t; 

typedef enum
{
    CHECKIN,
    CHECKOUT,
} TRANS_t;

 

typedef enum
{ 
	CONFIRMED, 
	CHECKED_IN, 
	CHECKED_OUT, 
}   STATUS_t;

typedef enum  
{
	SUN,
	MON,
	TUE,
	WED,
    THU,
    FRI,
    SAT,
} DAY_t;

struct resInfo 
{ 
    char lastName[MAX_GUEST_NAME_LENGTH]; 
    char confNum[MAX_CONF_NUM_LENGTH]; 
    BED_t bedType; 
    unsigned int numRooms; 
    unsigned int numAdults; 
    unsigned int roomNumber;

    struct { 
        DAY_t wkDay;
        unsigned int month; 
        unsigned int day; 
        unsigned int year; 
    } dateIn; 
    
    struct { 
        DAY_t wkDay;
        unsigned int month; 
        unsigned int day; 
        unsigned int year; 
    } dateOut; 
    
    float totalCharges; 
    bool hasLateCheckout; 
    bool hasBalconyView; 
    bool hasBreakfast; 
    STATUS_t status; 
};

int get_reservation(char * lastname, char * confnum, struct resInfo * res);
int upgrade_reservation(char * lastname, char * confnum, UP_t upgrade);    
int complete_reservation(char * lastname, char * confnum, TRANS_t inout);
    
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif

#endif
//DOM-IGNORE-END