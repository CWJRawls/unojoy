/*  dataForController_t.h
 *
 *	  Alan Chatham - 2011
 *
 *  This is simply a typedef for a struct
 *   that holds information about controller
 *   button presses.  It is used by the controller
 *   libraries to pass information from an application
 *   to a library function that formats and sends
 *   appropriate controller data
 */

#ifndef DATA_FOR_CONTROLLER_T
#define DATA_FOR_CONTROLLER_T

#define BUTTON_ARRAY_LENGTH 4

	typedef struct dataForMegaController_t
	{
		uint8_t id;
		// We'll support 144 buttons
		//  DirectInput supports up to 150, but this is a nice round number?
		uint8_t buttonArray[BUTTON_ARRAY_LENGTH];
		//Playstation 3 buttons are in the following order:
	/*	uint8_t triangleOn : 1;  // variables to abstractly tell us which buttons are pressed		
		uint8_t circleOn : 1;
		uint8_t squareOn : 1;
		uint8_t crossOn : 1;
		uint8_t l1On : 1;
		uint8_t l2On : 1;
		uint8_t l3On : 1;
		uint8_t r1On : 1;
		
		uint8_t r2On : 1;
		uint8_t r3On : 1;
		uint8_t selectOn : 1;
		uint8_t startOn : 1;
		uint8_t homeOn : 1;
		*/
		uint8_t dpadLeftOn : 1;
		uint8_t dpadUpOn : 1;
		uint8_t dpadRightOn : 1;		
		uint8_t dpadDownOn : 1;
		uint8_t : 4; // Padding, just to make our current system work nicely

		
		uint8_t leftStickX : 8; 
		uint8_t leftStickY : 8;
		uint8_t rightStickX : 8;
		uint8_t rightStickY : 8;
		uint8_t stick3X : 8;
		uint8_t stick3Y : 8;
	} dataForMegaController_t;


#endif
