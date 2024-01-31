/*
 * sine.h
 *
 * Created: 05.01.2022 09:47:44
 *  Author: M53740
 */ 


#ifndef SINE_H_
#define SINE_H_

/*
A noisy sine wave recorded using a guitar 
*/

const uint8_t  sinewave[] = //256 values
{147,
	149,148,146,147,151,156,159,156,147,135,130,132,139,145,148,148,146,145,145,146,
	147,146,141,132,123,117,117,121,126,129,129,130,133,141,149,155,158,156,151,149,
	153,160,164,162,153,143,138,139,141,140,134,124,113,108,108,110,110,109,109,112,
	116,122,127,130,131,132,136,142,148,150,147,141,137,139,144,149,150,147,140,132,
	125,119,112,104,98,93,86,78,71,69,77,92,107,118,125,129,132,136,140,142,
	142,140,136,133,134,138,142,143,140,136,132,128,122,115,107,96,86,81,81,87,
	94,98,99,99,103,113,127,138,140,134,126,122,124,131,139,142,141,136,132,130,
	128,126,122,117,111,104,99,97,97,98,100,104,110,116,121,125,128,129,130,130,
	129,128,128,129,131,135,139,141,142,142,140,137,134,132,129,123,115,109,108,112,
	117,122,127,131,133,132,133,135,139,142,140,133,125,120,121,127,135,141,146,149,
	149,147,146,149,154,158,158,151,140,131,131,137,144,148,149,147,145,145,146,147,
	147,143,135,126,119,117,120,125,128,129,129,131,138,146,153,157,157,153,150,151,
	157,164,164,158,148,139,138,140,141,137,128,117,109,107,109,110,109,109,111,115,
	120,126,130,131,132,134,139,146,150,148,143,138,137,142,148,151,150,144,135,127,
	121,114,107,101,95,88,80,72,69,74,88,103,115,122,127,131,135,139,141,142,
	140,137,134,134,138,142,143,141,137,134,130,125,118,109,99,89,82,80,85,92,
	97,99,99,101,109,122,135,140,136,129,123,123,129,137,142,142,138,133,130,129,
	127,124,119,113,106,100,97,97,98,99,102,107,114,120,124,127,129,129,130,129,
	128,127,128,130,133,137,141,143,143,142,138,135,132,130,126,118,111,108,109,114,
	120,126,131,133,133,133,135,138,141,141,135,127,121,120,125,132,140,146,149,150,
	148,147,148,153,157,159,154,143,132,130,134,142,147,148,147,145,145,146,147,147,
	144,137,128,121,118,119,124,128,129,129,131,136,144,152,156,157,153,149,149,154,
	161,165,161,151,141,137,139,141,139,131,120,110,106,108,110,109,109,110,113,118,
	125,130,132,132,132,136,142,148,149,145,139,136,139,145,150,150,146,138,130,123,
	117,110,102,96,90,83,76,70,71,81,97,111,120,126,130,133,136,140,141,141,
	138,135,133,135,139,142,142,139,136,132,127,120,113,104,93,84,80,82,88,95,
	99,100,101,105,116,130,139,139,132,125,122,125,133,140,143,140,135,132,130,128,
	126,122,116,109,102,98,97,98,99,101,105,111,118,123,127,129,130,130,129,128,
	127,127,129,132,135,140,143,144,143,140,137,134,131,128,122,115,109,108,112,117,
	124,129,133,134,133,134,136,140,142,139,131,124,121,123,129,137,143,148,150,149,
	148,147,150,155,158,156,149,138,131,132,138,144,148,149,147,146,146,147,147,147,
	142,134,125,120,118,121,125,129,130,130,132,139,148,154,157,156,151,148,151,158,
	164,164,157,146,138,138,140,141,136,127,115,108,107,109,110,109,109,111,115,121,
	127,130,131,131,133,139,145,149,147,141,136,137,142,147,150,148,142,134,127,121,
	114,106,99,94,88,81,73,69,74,87,102,115,123,128,131,134,137,141,142,140,
	136,133,132,135,140,142,141,138,134,129,124,117,110,101,90,82,80,84,91,97,
	99,100,102,109,123,135,140,137,129,123,123,128,136,142,142,138,134,131,129,127,
	124,120,114,107,100,97,97,98,99,102,107,114,120,125,128,130,130,130,129,128,
	128,128,130,133,137,140,142,143,142,139,136,133,130,126,119,112,108,110,114,120,
	126,131,133,133,133,134,138,142,142,137,129,123,122,125,131,137,142,146,147,147,
	146,147,150,154,156,154,147,138,133,135,140,146,149,150,148,146,146,146,147,147,
	143,134,125,118,117,120,125,128,128,128,131,138,146,154,158,156,151,150,153,160,
	165,163,154,143,137,138,141,141,135,125,115,109,108,109,109,108,109,111,115,120,
	125,128,130,131,135,142,148,150,147,140,137,139,144,149,150,146,139,131,125,119,
	112,105,99,93,85,77,70,69,78,93,107,117,123,128,132,136,140,143,142,139,
	135,134,135,139,143,142,139,135,132,127,122,115,106,95,85,80,81,87,94,98,
	98,99,103,114,129,140,141,135,127,123,126,133,140,143,141,136,132,129,127,125,
	122,117,111,104,99,97,97,98,100,104,111,117,122,126,129,130,130,130,129,128,
	128,129,131,135,138,141,142,142,141,137,134,131,128,122,114,109,108,112,117,122,
	127,131,133,133,134,136,139,142,140,134,126,121,121,127,134,141,146,148,147,146,
	146,148,153,156,156,151,140,133,132,137,144,148,149,148,146,146,146,147,147,144,
	136,127,120,117,119,124,127,128,128,130,136,145,152,157,157,153,149,151,157,164,
	165,159,149,140,138,140,141,138,129,118,110,108,109,109,109,109,110,114,119,125,
	128,130,131,133,139,145,149,148,143,138,137,142,148,152,150,143,134,126,120,114,
	108,101,95,88,79,72,68,74,88,103,114,122,127,131,134,138,141,142,140,137,
	134,135,138,142,143,141,137,133,129,125,118,110,99,88,81,79,84,92,97,99,
	99,101,109,123,136,142,137,129,124,124,130,138,143,142,138,133,130,129,127,124,
	119,113,105,99,97,97,98,99,102,108,115,121,125,128,130,130,130,129,128,127,
	128,130,133,137,140,143,143,142,139,135,132,129,125,118,111,108,109,114,120,125,
	130,133,134,134,135,138,141,142,137,128,122,120,124,131,139,145,148,148,147,146,
	148,151,155,157,153,144,135,131,135,141,147,149,148,147,146,146,147,147,145,139,
	130,122,118,118,123,127,129,129,129,134,143,151,156,157,154,150,149,154,161,165,
	162,153,143,138,139,142,140,133,122,112,108,108,110,109,108,109,112,117,123,128,
	131,131,132,135,142,148,150,146,139,136,139,145,150,151,146,138,129,123,117,110,
	103,97,90,83,75,69,70,81,96,110,119,125,129,133,136,140,142,141,139,135,
	133,135,139,142,142,139,135,131,126,120,113,104,93,83,78,80,87,95,99,100,
	100,105,116,131,140,140,133,125,123,126,134,141,143,140,135,132,130,128,126,122,
	116,109,102,97,96,97,98,100,104,111,118,123,127,130,130,130,129,129,128,128,
	129,132,135,139,142,143,143,141,137,133,131,127,122,114,109,108,111,117,123,129,
	132,134,134,134,136,140,142,140,132,125,121,122,128,135,142,147,149,148,147,147,
	149,153,156,156,150,139,133,133,138,145,149,150,148,147,146,147,147,147,143,135,
	127,120,117,120,125,128,129,129,131,138,146,153,157,156,151,149,151,157,164,165,
	158,148,140,138,141,141,138,128,117,110,108,109,109,108,108,110,114,120,125,129,
	130,131,133,139,146,150,148,142,137,137,142,148,151,149,142,134,127,121,114,107,
	100,94,87,79,72,68,73,87,102,114,122,127,131,134,138,141,142,141,137,134,
	133,136,141,143,141,138,133,129,124,118,110,100,89,81,78,83,91,97,99,99,
	101,109,122,136,141,137,129,123,123,129,137,142,142,138,134,131,129,127,124,119,
	113,106,99,96,96,97,98,101,107,114,120,125,128,130,130,130,129,128,128,128,
	130,133,137,140,142,143,142,139,135,132,129,125,118,111,108,109,114,119,125,131,
	134,134,134,135,138,142,142,137,129,123,121,124,131,138,144,147,148,147,146,147,
	151,155,157,154,146,136,132,135,141,147,150,149,148,146,146,147,148,146,141,132,
	124,118,118,122,126,128,129,129,133,140,148,154,157,155,151,150,154,161,165,163,
	154,144,139,139,141,140,134,124,114,108,108,109,109,108,109,112,116,122,126,129,
	130,132,136,143,148,150,146,140,137,140,146,150,151,147,138,130,123,118,111,104,
	98,91,83,75,69,70,80,95,109,118,124,129,133,137,141,143,142,139,135,134,
	136,140,143,143,139,135,131,127,121,114,105,94,84,79,81,88,95,98,99,99,
	104,115,130,140,140,133,126,123,127,134,141,144,140,136,132,129,127,125,121,116,
	109,102,97,96,96,98,100,105,111,118,123,126,129,130,130,129,129,128,127,129,
	132,135,139,142,143,143,140,137,133,130,127,121,113,108,108,111,117,123,128,132,
	134,134,134,136,139,142,139,132,124,120,121,127,136,143,148,149,148,146,146,150,
	154,157,156,148,137,131,132,139,146,149,149,147,146,146,147,148,146,141,133,125,
	119,118,121,126,128,129,129,132,140,148,153,156,155,151,149,152,158,164,165,158,
	147,140,139,141,141,136,127,115,108,107,109,109,109,109,111,115,121,127,130,131,
	132,134,139,146,149,147,141,137,138,143,150,152,150,142,132,124,119,113,106,99,
	92,85,76,70,69,77,92,106,116,122,127,132,136,139,141,141,139,136,134,135,
	139,143,143,140,136,133,129,123,116,107,96,86,79,79,85,93,98,99,99,102,
	111,126,138,141,135,127,123,125,132,140,144,142,138,133,131,129,127,123,117,111,
	103,98,95,96,98,100,103,109,116,122,126,129,130,130,129,128,128,127,128,131,
	134,138,142,144,144,142,138,134,131,128,123,116,109,107,109,114,121,127,132,134,
	134,134,135,138,141,140,134,126,120,120,125,133,142,147,150,150,148,147,149,153,
	157,157,151,140,131,131,137,144,149,149,147,146,146,147,148,147,143,135,127,121,
	119,121,125,129,130,130,132,138,147,153,156,155,152,148,150,156,163,165,160,150,
	141,139,141,142,139,130,118,109,106,108,110,109,108,110,113,120,126,130,132,132,
	133,137,143,148,148,143,138,136,140,147,151,150,145,136,128,122,115,108,101,95,
	88,81,73,69,72,84,100,112,121,126,130,133,137,140,141,140,138,134,133,135,
	139,142,142,139,135,131,125,119,112,102,91,83,79,82,89,96,99,100,101,107,
	119,133,140,138,130,124,122,127,135,141,143,139,135,132,130,128,126,121,114,107,
	100,96,96,97,99,101,106,112,119,125,128,130,130,129,128,128,127,128,129,132,
	135,139,143,144,143,140,136,133,130,127,120,113,108,108,111,117,124,130,134,134,
	133,134,137,140,142,138,130,123,120,123,130,137,144,148,149,149,147,147,151,155,
	157,155,146,135,130,133,140,146,149,149,147,146,146,147,148,146,141,132,125,120,
	119,122,127,129,130,130,134,141,149,154,156,154,150,148,152,159,164,163,155,145,
	139,139,142,142,136,126,114,108,107,109,109,109,109,111,116,122,127,131,132,132,
	134,140,146,149,146,140,136,138,143,149,151,148,141,132,125,119,112,105,98,92,
	86,78,71,69,77,91,106,116,123,128,131,134,138,141,141,139,135,133,134,138,
	142,143,141,137,133,128,123,116,108,98,87,81,80,85,93,98,100,100,103,112,
	126,137,140,135,127,123,124,131,138,143,142,138,134,131,129,126,123,118,111,104,
	98,96,96,98,100,103,109,116,122,127,129,130,130,129,128,128,128,128,130,133,
	137,141,143,143,142,138,134,131,128,124,116,110,107,109,114,120,127,132,134,134,
	133,135,138,142,141,135,127,122,121,126,133,140,145,148,148,147,146,147,151,155,
	156,152,142,134,132,136,143,148,150,149,147,146,146,147,147,145,138,130,122,118,
	119,123,127,129,129,130,135,142,150,155,156,153,149,149,155,162,165,161,151,142,
	138,140,142,140,133,121,112,108,108,109,109,108,110,112,117,123,128,130,131,132,
	137,144,149,149,144,138,137,140,146,151,150,145,136,128,122,116,109,103,97,89,
	81,73,68,72,84,100,112,119,125,129,133,137,141,142,141,138,135,134,138,142,
	144,142,138,134,131,126,120,112,102,91,83,80,83,90,96,99,99,100,107,119,
	133,141,138,131,125,123,128,136,142,143,139,135,132,129,127,124,120,114,107,101,
	96,96,97,99,102,107,114,120,125,128,130,130,130,129,128,128,128,129,132,135,
	139,142,143,143,140,136,132,129,126,120,112,108,108,112,118,124,130,133,134,134,
	134,137,140,142,138,130,122,119,122,130,139,145,149,150,148,146,147,151,156,158,
	154,145,134,130,134,141,147,150,148,146,146,146,148,148,145,139,130,123,119,119,
	123,127,129,129,130,135,143,150,155,156,153,149,147,152,159,164,163,154,144,139,
	139,142,141,135,124,113,107,107,109,109,109,109,112,117,123,128,131,132,132,134,
	140,146,148,145,139,136,138,144,149,151,148,139,130,122,117,111,104,98,91,83,
	75,69,70,80,95,109,118,124,128,132,135,139,141,140,138,135,133,135,139,142,
	142,140,136,132,128,122,114,105,94,85,80,81,87,94,99,100,101,105,115,129,
	139,140,133,125,122,125,132,140,143,141,136,133,130,129,127,122,116,109,102,97,
	95,97,99,101,105,111,118,124,128,130,131,130,128,128,127,127,129,131,134,138,
	142,144,144,142,138,133,130,127,122,115,109,107,110,115,121,128,132,134,134,134,
	136,139,142,140,132,124,120,121,127,136,143,148,150,150,148,148,150,154,157,156,
	149,138,131,132,138,145,149,149,147,146,147,147,148,146,142,134,126,120,119,121,
	126,129,130,130,133,140,148,154,156,155,150,147,149,156,163,164,158,148,140,139,
	141,142,138,129,117,109,107,109,110,109,108,110,114,120,127,131,133,132,133,137,
	144,148,147,142,137,136,140,147,150,149,143,134,126,120,114,107,100,94,87,79,
	72,69,74,87,103,114,122,127,131,133,137,140,141,140,137,134,133,136,140,143,
	142,139,135,130,124,118,110,100,90,82,79,83,90,96,100,101,102,109,122,135,
	140,137,129,123,123,128,136,141,142,138,135,132,130,128,125,120,114,106,99,96,
	96,97,99,102,107,114,121,126,130,131,130,129,128,128,128,128,130,132,136,140,
	143,144,143,140,136,132,129,125,119,112,108,108,112,118,125,130,134,134,134,134,
	137,141,142,137,129,122,121,124,131,138,144,148,149,148,147,148,151,154,156,154,
	145,135,131,134,141,147,150,149,148,147,146,147,148,146,140,132,124,119,118,122,
	127,129,130,130,134,142,149,155,156,153,149,147,152,159,164,163,154,144,139,140,
	142,142,136,125,114,108,108,109,109,109,109,112,116,122,127,130,131,132,135,141,
	147,149,145,140,136,138,143,149,150,147,139,131,124,118,111,104,98,91,84,76,
	70,69,78,93,107,117,124,128,131,135,139,141,141,139,135,133,134,138,142,143,
	140,137,133,128,122,115,107,96,86,80,80,86,93,98,100,101,104,114,128,139,
	140,134,126,122,125,131,139,142,141,137,133,131,128,126,122,117,111,103,98,96,
	96,98,100,104,111,118,124,128,131,131,130,129,128,128,128,129,131,134,137,141,
	143,144,142,138,134,131,128,122,115,109,108,110,115,121,127,132,134,134,134,136,
	139,142,140,133,125,121,121,127,134,141,146,149,149,147,147,149,153,156,156,150,
	139,132,132,137,144,149,150,148,147,146,147,148,147,143,136,127,121,118,120,124,
	128,129,129,132,138,145,152,156,155,151,148,149,156,162,164,159,149,141,139,141,
	142,139,130,119,110,107,108,109,108,109,110,114,119,124,128,131,132,133,138,144,
	148,147,142,137,136,141,147,151,150,144,135,127,121,115,108,101,95,87,79,72,
	68,73,86,102,114,121,126,130,133,137,140,141,140,136,133,133,137,141,143,142,
	138,134,130,125,119,111,100,90,82,79,83,91,97,99,100,102,109,122,135,141,
	137,129,123,123,128,136,142,142,139,135,132,130,128,125,120,114,107,100,96,96,
	97,99,102,108,115,121,126,129,131,131,129,128,128,127,128,130,132,136,140,143,
	144,143,140,136,132,129,125,118,111,108,108,112,119,125,131,134,134,134,135,138,
	141,142,136,128,121,119,123,131,140,146,150,150,149,147,149,153,157,158,153,142,
	132,129,134,142,148,149,148,146,146,147,148,148,144,137,128,122,119,120,124,128,
	129,130,131,137,145,152,155,155,152,148,147,153,160,164,161,153,143,139,140,142,
	140,133,122,111,107,107,109,109,109,109,112,118,124,129,132,133,133,135,141,146,
	147,144,138,135,138,144,150,151,147,138,129,122,116,110,103,97,90,82,74,69,
	71,82,97,111,120,125,129,132,136,139,140,139,137,134,133,135,139,142,142,140,
	136,132,127,121,113,104,93,84,79,81,88,95,99,101,102,106,117,131,139,138,
	131,124,122,125,133,140,142,140,136,133,131,129,127,122,116,109,101,97,95,97,
	99,101,106,112,119,125,129,131,131,130,128,127,127,127,129,131,134,138,142,144,
	144,142,138,134,130,127,121,114,109,108,110,116,123,129,133,135,134,134,136,140,
	142,138,131,123,119,121,128,137,144,149,151,150,148,148,151,155,158,155,146,135,
	129,131,139,146,149,148,147,146,147,148,148,146,140,132,124,120,119,122,127,129,
	130,131,135,142,150,155,156,153,149,147,150,157,163,163,156,146,140,140,142,142,
	137,126,115,108,107,109,109,109,109,111,115,122,128,132,133,133,134,139,145,148,
	146,140,135,136,141,147,150,149,143,134,127,120,114,106,99,93,86,79,71,68,
	74,88,104,116,124,128,131,134,137,140,141,139,136,132,132,135,140,143,142,139,
	135,130,124,117,110,100,90,82,79,83,90,97,100,102,104,111,123,135,139,135,
	127,122,122,127,135,141,141,138,135,133,131,128,125,120,113,105,99,96,96,97,
	99,102,107,115,122,127,130,131,130,129,128,127,127,128,129,132,135,139,143,144,
	143,140,136,133,130,125,119,111,108,109,112,119,125,131,134,134,133,135,138,141,
	141,136,127,121,121,125,132,140,146,150,150,149,148,149,153,157,158,153,142,132,
	130,134,142,147,149,148,147,146,147,148,148,145,138,129,123,119,119,123,127,130,
	130,132,137,145,152,156,156,152,148,148,153,160,164,160,151,142,139,141,143,141,
	133,122,112,107,108,109,109,109,110,113,118,124,129,132,133,133,137,142,147,148,
	144,138,135,138,144,149,150,146,139,130,124,118,111,103,97,90,83,75,69,70,
	81,96,110,119,125,129,132,135,139,141,140,137,134,132,134,139,142,143,140,137,
	132,127,121,114,105,95,85,80,81,87,94,98,100,101,106,116,130,138,138,131,
	124,122,125,132,139,142,140,137,134,131,129,126,122,116,110,102,97,96,96,98,
	101,105,112,119,124,128,130,130,129,128,127,127,127,129,131,134,137,141,143,143,
	141,138,134,130,127,121,114,109,108,111,116,122,129,133,134,133,134,136,139,142,
139,131,123,120,122,128,137,144,149,150,150,148,148,151,156,158,156,147,135};



#endif /* SINE_H_ */
