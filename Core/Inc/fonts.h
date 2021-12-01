/*
 * font.h
 *
 *  Created on: Dec 1, 2021
 *      Author: Ondrej
 */

#ifndef INC_FONTS_H_
#define INC_FONTS_H_
#include "main.h"

#define FONTS_DIGITS_START 0
#define FONTS_CHARS_START 10
#define FONTS_UNDERSCORE 36
const uint8_t ConverterValue_SegmentA = 0b01000000;
const uint8_t ConverterValue_SegmentB = 0b00100000;
const uint8_t ConverterValue_SegmentC = 0b00010000;
const uint8_t ConverterValue_SegmentD = 0b00001000;
const uint8_t ConverterValue_SegmentE = 0b00000100;
const uint8_t ConverterValue_SegmentF = 0b00000010;
const uint8_t ConverterValue_SegmentG = 0b00000001;
const uint8_t ConverterValue_SegmentDot = 0b10000000;

typedef enum{
	false = 0b0,
	true = 0b1
}bool;

typedef struct{
	bool sA;
	bool sB;
	bool sC;
	bool sD;
	bool sE;
	bool sF;
	bool sG;
	bool sDot;
}SegmentDigitStruct;



SegmentDigitStruct GetSegmentDigit(uint8_t chr);

#endif /* INC_FONTS_H_ */
