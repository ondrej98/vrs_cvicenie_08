/*
 * display.c
 *
 *  Created on: 7. 12. 2021
 *      Author: Ondrej
 */

#include "display.h"

extern DisplayDigitData_ DisplayDigit_0;
extern DisplayDigitData_ DisplayDigit_1;
extern DisplayDigitData_ DisplayDigit_2;
extern DisplayDigitData_ DisplayDigit_3;

void resetSegments(void) {
	SEGMENT_A_OFF;
	SEGMENT_B_OFF;
	SEGMENT_C_OFF;
	SEGMENT_D_OFF;
	SEGMENT_E_OFF;
	SEGMENT_F_OFF;
	SEGMENT_G_OFF;
	SEGMENT_DP_OFF;
}

void setSegments(void) {
	SEGMENT_A_ON;
	SEGMENT_B_ON;
	SEGMENT_C_ON;
	SEGMENT_D_ON;
	SEGMENT_E_ON;
	SEGMENT_F_ON;
	SEGMENT_G_ON;
	SEGMENT_DP_ON;
}

void resetDigits(void) {
	DIGIT_0_OFF;
	DIGIT_1_OFF;
	DIGIT_2_OFF;
	DIGIT_3_OFF;
	DIGIT_TIME_OFF;
}

void setDigits(void) {
	DIGIT_0_ON;
	DIGIT_1_ON;
	DIGIT_2_ON;
	DIGIT_3_ON;
	DIGIT_TIME_ON;
}

void segmentsOn(uint8_t index, SegmentDigitStruct digitStruct) {
	resetSegments();
	if (digitStruct.sA)
		SEGMENT_A_ON;
	if (digitStruct.sB)
		SEGMENT_B_ON;
	if (digitStruct.sC)
		SEGMENT_C_ON;
	if (digitStruct.sD)
		SEGMENT_D_ON;
	if (digitStruct.sE)
		SEGMENT_E_ON;
	if (digitStruct.sF)
		SEGMENT_F_ON;
	if (digitStruct.sG)
		SEGMENT_G_ON;
	if (digitStruct.sDot)
		SEGMENT_DP_ON;

	resetDigits();
	if (index == 0)
		DIGIT_0_ON;
	else if (index == 1)
		DIGIT_1_ON;
	else if (index == 2)
		DIGIT_2_ON;
	else if (index == 3)
		DIGIT_3_ON;
}

void displayCharOnDigit(DisplayDigitData_ digitData) {
	SegmentDigitStruct digitStruct = GetSegmentDigit(digitData.chr);
	segmentsOn(digitData.index, digitStruct);
}
void updateDisplay(void) {
	displayCharOnDigit(DisplayDigit_0);
	LL_mDelay(5);
	displayCharOnDigit(DisplayDigit_1);
	LL_mDelay(5);
	displayCharOnDigit(DisplayDigit_2);
	LL_mDelay(5);
	displayCharOnDigit(DisplayDigit_3);
	LL_mDelay(5);
	resetDigits();
	resetSegments();
}
