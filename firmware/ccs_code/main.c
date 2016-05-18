#include "DSP28x_Project.h"

/*
 * This program puts the state of the input on the respective output,
 * e.g., if input 4 is high, input 5 is high. The pins are defined from
 * 1-8, e.g. GPIO18 is input 1, GPIO22 is input 2, etc.
 */

void main(void) {

	// Pin configuration
	EALLOW;

	// Inputs
	GpioCtrlRegs.GPADIR.bit.GPIO18 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO22 = 0;
	GpioCtrlRegs.GPBDIR.bit.GPIO33 = 0;
	GpioCtrlRegs.GPBDIR.bit.GPIO32 = 0;

	GpioCtrlRegs.GPADIR.bit.GPIO12 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO1 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO0 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO19 = 0;

	// Outputs
	GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;
	GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;
	GpioCtrlRegs.GPADIR.bit.GPIO16 = 1;
	GpioCtrlRegs.GPADIR.bit.GPIO17 = 1;

	GpioCtrlRegs.GPADIR.bit.GPIO13 = 1;
	GpioCtrlRegs.GPBDIR.bit.GPIO50 = 1;
	GpioCtrlRegs.GPBDIR.bit.GPIO51 = 1;
	GpioCtrlRegs.GPBDIR.bit.GPIO55 = 1;
	EDIS;
	
	while(1){
		// Check input 1
		if(GpioDataRegs.GPADAT.bit.GPIO18){
			GpioDataRegs.GPASET.bit.GPIO2 = 1;
		}
		else{
			GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
		}

		// Check input 2
		if(GpioDataRegs.GPADAT.bit.GPIO22){
			GpioDataRegs.GPASET.bit.GPIO3 = 1;
		}
		else{
			GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
		}

		// Check input 3
		if(GpioDataRegs.GPBDAT.bit.GPIO33){
			GpioDataRegs.GPASET.bit.GPIO16 = 1;
		}
		else{
			GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
		}

		// Check input 4
		if(GpioDataRegs.GPBDAT.bit.GPIO32){
			GpioDataRegs.GPASET.bit.GPIO17 = 1;
		}
		else{
			GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;
		}

		// Check input 5
		if(GpioDataRegs.GPADAT.bit.GPIO12){
			GpioDataRegs.GPASET.bit.GPIO13 = 1;
		}
		else{
			GpioDataRegs.GPACLEAR.bit.GPIO13 = 1;
		}

		// Check input 6
		if(GpioDataRegs.GPADAT.bit.GPIO1 == 1){
			GpioDataRegs.GPBSET.bit.GPIO50 = 1;
		}
		else{
			GpioDataRegs.GPBCLEAR.bit.GPIO50 = 1;
		}

		// Check input 7
		if(GpioDataRegs.GPADAT.bit.GPIO18 == 1){
			GpioDataRegs.GPBSET.bit.GPIO51 = 1;
		}
		else{
			GpioDataRegs.GPBCLEAR.bit.GPIO51 = 1;
		}

		// Check input 8
		if(GpioDataRegs.GPADAT.bit.GPIO19 == 1){
			GpioDataRegs.GPBSET.bit.GPIO55 = 1;
		}
		else{
			GpioDataRegs.GPBCLEAR.bit.GPIO55 = 1;
		}
	}
}
