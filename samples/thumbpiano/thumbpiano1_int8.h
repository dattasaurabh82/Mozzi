#ifndef THUMBPIANO1_H_
#define THUMBPIANO1_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define THUMBPIANO1_NUM_CELLS 8193
#define THUMBPIANO1_SAMPLERATE 16384
 
const char __attribute__((progmem)) THUMBPIANO1_DATA [] = {-1, 0, -1, 0, -1, 0,
-1, 0, -1, -4, 5, -16, -37, -18, 18, 16, -9, -6, -1, 31, 49, 34, 12, 4, 44, 41,
21, -5, 6, 26, 10, 17, 17, -7, -47, -45, -25, 6, -29, -64, -73, -84, -57, -41,
-35, -68, -72, -46, -40, -38, -35, -29, -10, 16, 30, 50, 36, 45, 92, 97, 75, 64,
79, 110, 117, 84, 81, 100, 100, 91, 84, 67, 36, 8, -17, -16, -31, -64, -73, -76,
-86, -81, -91, -120, -114, -121, -128, -120, -111, -90, -69, -66, -70, -49, -29,
1, 20, 16, 30, 25, 33, 65, 88, 101, 102, 89, 88, 93, 83, 87, 78, 53, 26, 10, 0,
-9, -12, -33, -48, -60, -71, -74, -85, -82, -74, -83, -91, -89, -77, -52, -34,
-30, -23, -16, -5, 24, 51, 56, 47, 46, 60, 88, 107, 94, 75, 68, 77, 80, 66, 53,
41, 27, 12, -3, -12, -8, -19, -36, -43, -45, -44, -44, -43, -52, -60, -59, -45,
-29, -19, -16, -16, -7, 6, 21, 27, 37, 46, 47, 39, 37, 51, 63, 61, 48, 36, 28,
24, 25, 21, 0, -22, -35, -40, -44, -44, -52, -62, -66, -67, -66, -64, -61, -62,
-66, -67, -56, -36, -17, -9, -13, -9, 7, 27, 42, 49, 50, 46, 51, 61, 66, 59, 54,
55, 50, 36, 31, 31, 26, 16, -3, -19, -22, -18, -19, -26, -42, -53, -50, -43,
-41, -45, -48, -45, -40, -32, -18, -5, 2, 8, 12, 14, 25, 44, 55, 50, 41, 47, 58,
61, 61, 55, 44, 32, 28, 23, 16, 8, 2, -10, -24, -30, -29, -29, -35, -43, -53,
-56, -48, -42, -39, -39, -39, -31, -18, -9, -2, 6, 17, 22, 25, 35, 46, 52, 53,
56, 52, 45, 42, 43, 36, 20, 8, 4, 2, -3, -12, -28, -43, -52, -58, -63, -68, -71,
-75, -76, -74, -67, -57, -47, -43, -39, -31, -22, -12, 3, 16, 21, 29, 45, 61,
68, 72, 78, 78, 73, 70, 70, 64, 51, 42, 36, 30, 22, 14, 3, -11, -26, -37, -46,
-52, -55, -58, -59, -60, -60, -57, -50, -47, -45, -42, -37, -27, -12, 3, 12, 20,
34, 45, 49, 53, 60, 63, 58, 57, 59, 58, 53, 50, 45, 36, 28, 22, 14, 2, -10, -22,
-29, -33, -35, -36, -38, -41, -45, -48, -47, -44, -41, -38, -38, -35, -24, -12,
-5, -4, 1, 8, 14, 18, 23, 26, 25, 24, 24, 20, 11, 8, 6, 1, -6, -11, -15, -17,
-19, -23, -31, -36, -36, -33, -31, -30, -30, -26, -20, -14, -10, -4, 0, 4, 12,
21, 28, 35, 43, 50, 51, 52, 56, 58, 55, 47, 41, 35, 28, 21, 16, 9, 2, -4, -11,
-19, -28, -35, -42, -48, -50, -50, -47, -42, -40, -40, -38, -33, -26, -20, -18,
-14, -4, 9, 19, 28, 38, 45, 49, 51, 54, 55, 52, 51, 48, 41, 31, 26, 25, 19, 9,
-2, -12, -20, -29, -38, -45, -53, -55, -55, -55, -54, -53, -52, -53, -50, -46,
-39, -33, -26, -16, -5, 4, 15, 25, 30, 33, 35, 40, 44, 46, 49, 50, 47, 39, 35,
32, 26, 18, 11, 3, -5, -11, -16, -21, -27, -31, -34, -36, -36, -36, -36, -36,
-35, -31, -26, -21, -14, -7, 0, 6, 12, 20, 26, 29, 31, 34, 37, 40, 42, 42, 37,
29, 24, 21, 17, 12, 7, 1, -5, -12, -17, -21, -25, -29, -31, -32, -31, -28, -26,
-25, -22, -19, -16, -13, -9, -3, 3, 9, 14, 20, 24, 26, 29, 30, 31, 31, 30, 27,
21, 15, 11, 8, 3, -4, -9, -14, -20, -26, -32, -37, -40, -41, -41, -39, -37, -34,
-31, -29, -26, -22, -17, -12, -7, 1, 8, 16, 24, 31, 33, 35, 37, 39, 40, 40, 41,
40, 35, 30, 25, 20, 13, 5, -2, -9, -16, -22, -27, -32, -34, -37, -37, -37, -36,
-35, -35, -33, -30, -26, -21, -17, -10, -2, 5, 12, 20, 26, 28, 31, 35, 37, 39,
41, 44, 42, 36, 31, 27, 23, 16, 9, 4, -1, -6, -11, -17, -22, -26, -29, -32, -33,
-33, -32, -31, -29, -26, -23, -20, -16, -12, -8, -3, 4, 11, 15, 16, 20, 24, 26,
26, 26, 28, 25, 20, 15, 12, 8, 3, -2, -6, -10, -16, -20, -25, -29, -33, -35,
-34, -33, -31, -29, -27, -24, -21, -18, -14, -10, -5, 0, 7, 15, 23, 27, 29, 32,
34, 35, 34, 35, 36, 33, 28, 25, 23, 19, 13, 7, 2, -4, -9, -14, -18, -22, -26,
-28, -29, -28, -27, -26, -26, -24, -22, -19, -15, -11, -7, -3, 4, 12, 17, 19,
19, 21, 24, 24, 24, 24, 25, 23, 19, 16, 13, 8, 2, -3, -7, -10, -14, -18, -21,
-24, -27, -29, -29, -27, -26, -25, -23, -19, -16, -12, -8, -4, 0, 4, 10, 18, 23,
25, 26, 29, 30, 29, 28, 29, 28, 24, 19, 16, 14, 9, 3, -2, -7, -11, -16, -20,
-25, -29, -33, -36, -35, -33, -32, -31, -28, -25, -22, -19, -15, -12, -8, -4, 3,
11, 17, 19, 21, 25, 26, 26, 25, 26, 26, 23, 20, 19, 17, 13, 8, 3, 0, -4, -9,
-12, -15, -18, -21, -23, -21, -19, -19, -18, -15, -13, -11, -9, -5, -1, 2, 6,
13, 20, 24, 25, 26, 27, 27, 25, 24, 24, 22, 20, 17, 15, 11, 5, 0, -5, -10, -15,
-19, -22, -24, -27, -31, -32, -31, -30, -30, -29, -27, -25, -22, -18, -14, -10,
-7, -2, 4, 10, 14, 15, 18, 20, 21, 21, 21, 20, 19, 17, 16, 14, 10, 5, 0, -3, -5,
-8, -11, -13, -16, -18, -21, -21, -20, -19, -18, -16, -13, -10, -8, -4, -1, 1,
4, 8, 13, 18, 21, 24, 26, 27, 27, 25, 23, 21, 19, 17, 14, 12, 8, 3, -2, -5, -8,
-12, -16, -19, -21, -23, -25, -25, -23, -23, -22, -19, -17, -15, -13, -10, -7,
-4, 0, 5, 10, 15, 19, 21, 22, 23, 22, 19, 17, 16, 15, 13, 11, 9, 5, 0, -5, -9,
-12, -15, -18, -20, -22, -23, -24, -23, -22, -22, -21, -19, -17, -14, -12, -9,
-5, -1, 3, 8, 12, 16, 19, 21, 22, 23, 22, 20, 19, 18, 17, 16, 14, 11, 6, 1, -3,
-7, -9, -12, -15, -17, -18, -19, -20, -20, -20, -20, -19, -17, -14, -11, -8, -5,
-2, 1, 5, 8, 12, 15, 18, 20, 22, 23, 22, 19, 18, 17, 16, 14, 11, 8, 4, 0, -3,
-6, -8, -11, -14, -15, -17, -18, -19, -18, -17, -17, -15, -13, -10, -8, -6, -3,
-1, 2, 5, 8, 11, 15, 17, 19, 19, 19, 17, 14, 12, 10, 9, 7, 5, 2, -2, -6, -10,
-13, -16, -20, -22, -23, -24, -24, -23, -22, -21, -20, -18, -16, -13, -11, -8,
-4, -1, 2, 6, 10, 14, 17, 19, 21, 21, 21, 19, 18, 18, 17, 16, 14, 12, 9, 6, 2,
-2, -6, -9, -11, -12, -13, -13, -13, -13, -12, -11, -11, -10, -8, -5, -3, -1, 2,
5, 7, 10, 12, 13, 15, 17, 17, 17, 16, 14, 13, 11, 9, 7, 4, 0, -3, -7, -10, -14,
-17, -19, -21, -22, -23, -24, -23, -23, -22, -21, -19, -17, -14, -11, -8, -5,
-1, 2, 5, 7, 10, 13, 16, 18, 19, 20, 19, 18, 17, 16, 14, 12, 10, 7, 4, 2, -1,
-4, -7, -10, -12, -13, -14, -14, -14, -13, -12, -11, -10, -8, -6, -5, -3, 0, 2,
5, 7, 9, 11, 13, 15, 15, 15, 14, 12, 10, 9, 8, 6, 4, 2, 0, -3, -6, -9, -12, -15,
-17, -19, -19, -19, -18, -17, -15, -14, -13, -11, -9, -7, -5, -2, 2, 5, 8, 11,
13, 15, 17, 18, 18, 18, 17, 16, 14, 13, 12, 10, 7, 4, 1, -2, -5, -8, -10, -13,
-15, -16, -17, -17, -17, -16, -16, -15, -14, -12, -10, -8, -6, -2, 1, 3, 6, 8,
10, 11, 12, 13, 13, 13, 12, 12, 11, 9, 8, 5, 3, 1, -2, -4, -6, -8, -10, -12,
-13, -14, -15, -15, -14, -14, -12, -11, -9, -7, -5, -2, 0, 3, 5, 8, 10, 12, 13,
15, 16, 16, 16, 15, 13, 12, 11, 9, 7, 4, 2, 0, -3, -5, -7, -10, -13, -14, -16,
-17, -17, -17, -16, -15, -13, -12, -10, -8, -6, -4, -1, 1, 4, 7, 9, 11, 13, 14,
15, 15, 14, 13, 12, 11, 10, 8, 6, 4, 2, 0, -3, -5, -8, -10, -12, -13, -15, -15,
-15, -14, -13, -12, -11, -10, -9, -7, -5, -3, 0, 3, 5, 7, 9, 11, 12, 12, 12, 12,
11, 10, 9, 8, 7, 5, 3, 1, -1, -4, -6, -8, -10, -12, -13, -14, -14, -14, -14,
-13, -12, -11, -10, -8, -6, -4, -1, 2, 4, 7, 9, 11, 12, 14, 15, 15, 15, 14, 14,
13, 12, 10, 8, 6, 4, 1, -1, -4, -6, -8, -10, -11, -13, -14, -15, -15, -15, -14,
-13, -12, -10, -9, -7, -5, -2, 0, 2, 4, 6, 8, 10, 11, 12, 13, 13, 12, 11, 10, 9,
7, 5, 3, 2, 0, -2, -4, -6, -8, -10, -11, -12, -13, -13, -12, -12, -11, -10, -8,
-7, -5, -4, -2, 0, 2, 4, 6, 8, 10, 11, 12, 13, 12, 12, 10, 9, 8, 6, 5, 3, 1, -1,
-4, -6, -8, -10, -12, -13, -14, -15, -15, -14, -13, -13, -12, -11, -9, -8, -6,
-4, -1, 1, 4, 6, 9, 11, 12, 13, 14, 14, 14, 14, 13, 12, 11, 10, 8, 7, 4, 2, 0,
-2, -5, -6, -8, -9, -10, -10, -11, -11, -10, -10, -9, -9, -7, -6, -4, -2, 0, 2,
3, 5, 6, 7, 8, 9, 9, 9, 9, 8, 7, 6, 4, 2, 0, -2, -4, -6, -8, -9, -11, -13, -14,
-14, -15, -15, -15, -14, -13, -12, -11, -9, -7, -5, -3, 0, 2, 4, 6, 8, 10, 11,
12, 14, 14, 14, 14, 13, 12, 11, 9, 7, 6, 4, 2, 0, -2, -4, -6, -7, -8, -10, -10,
-10, -10, -9, -8, -8, -7, -5, -4, -3, -1, 1, 3, 4, 6, 8, 9, 10, 10, 10, 10, 9,
9, 7, 6, 5, 3, 2, 0, -2, -4, -6, -8, -10, -12, -13, -14, -14, -14, -14, -13,
-12, -11, -10, -9, -7, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 10, 10, 10, 10, 9, 9, 8,
7, 5, 4, 1, -1, -2, -4, -6, -7, -8, -9, -10, -10, -10, -9, -9, -8, -7, -6, -4,
-3, -1, 1, 3, 5, 6, 8, 9, 10, 10, 11, 11, 11, 11, 10, 9, 8, 7, 5, 3, 1, -1, -3,
-5, -6, -8, -10, -11, -12, -13, -13, -13, -13, -12, -11, -10, -8, -6, -5, -3,
-1, 0, 2, 4, 6, 7, 8, 9, 9, 10, 10, 9, 8, 7, 6, 5, 4, 3, 1, -1, -2, -3, -5, -7,
-8, -9, -10, -10, -10, -10, -9, -8, -7, -6, -4, -3, -2, 0, 1, 3, 5, 6, 7, 8, 9,
9, 9, 9, 8, 8, 6, 5, 4, 3, 1, 0, -2, -4, -6, -7, -9, -10, -11, -12, -12, -12,
-12, -11, -10, -9, -8, -7, -5, -3, -1, 1, 3, 5, 7, 8, 9, 10, 11, 11, 11, 11, 11,
10, 10, 9, 8, 6, 4, 2, 0, -1, -3, -4, -6, -7, -8, -9, -9, -9, -9, -9, -9, -8,
-7, -6, -5, -3, -2, 0, 1, 2, 4, 5, 5, 5, 6, 6, 6, 5, 5, 4, 3, 1, 0, -1, -3, -5,
-6, -7, -8, -9, -10, -11, -11, -11, -11, -11, -10, -9, -8, -6, -4, -2, -1, 1, 3,
5, 7, 8, 10, 11, 12, 13, 14, 14, 13, 13, 12, 10, 9, 8, 6, 4, 3, 1, -1, -2, -4,
-6, -7, -8, -9, -10, -10, -10, -10, -10, -9, -8, -7, -6, -5, -4, -2, -1, 1, 2,
3, 4, 4, 5, 5, 5, 4, 4, 3, 2, 1, 0, -1, -2, -4, -5, -6, -7, -8, -9, -9, -9, -9,
-9, -8, -7, -6, -5, -4, -3, -1, 0, 2, 4, 6, 8, 9, 10, 11, 12, 12, 12, 12, 12,
11, 10, 9, 8, 6, 4, 3, 1, -1, -3, -5, -6, -7, -8, -9, -10, -10, -11, -11, -11,
-10, -9, -8, -7, -6, -4, -3, -1, 0, 1, 3, 3, 4, 5, 5, 6, 6, 6, 5, 4, 3, 2, 1, 0,
-1, -3, -3, -4, -5, -6, -7, -8, -8, -8, -8, -7, -7, -6, -5, -4, -2, -1, 0, 2, 3,
4, 6, 7, 8, 9, 9, 10, 10, 10, 9, 9, 8, 6, 5, 4, 2, 1, -1, -2, -4, -5, -7, -8,
-9, -10, -10, -10, -10, -9, -9, -8, -7, -6, -5, -4, -3, -1, 0, 2, 3, 5, 6, 6, 7,
7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0, -2, -3, -4, -6, -7, -8, -8, -9, -8, -8, -8, -7,
-7, -6, -5, -4, -3, -1, 0, 1, 3, 4, 5, 6, 7, 7, 7, 8, 7, 7, 7, 6, 5, 4, 3, 2, 0,
-2, -3, -4, -5, -6, -7, -8, -8, -8, -8, -8, -8, -7, -7, -5, -4, -3, -2, 0, 1, 2,
4, 5, 6, 6, 7, 7, 8, 8, 8, 7, 7, 6, 5, 4, 2, 1, -1, -2, -3, -4, -6, -7, -7, -8,
-8, -9, -8, -8, -8, -7, -6, -5, -4, -3, -2, 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7,
6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -9, -9, -8, -8, -7, -6,
-5, -4, -3, -2, -1, 0, 2, 3, 4, 5, 6, 6, 7, 7, 7, 7, 6, 6, 5, 4, 3, 2, 1, 0, -1,
-3, -4, -5, -6, -6, -7, -7, -7, -7, -6, -6, -5, -4, -3, -2, -1, 0, 2, 3, 4, 5,
6, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, -1, -2, -4, -5, -6, -7, -8, -9, -9,
-9, -9, -9, -9, -9, -8, -7, -6, -5, -3, -2, -1, 0, 2, 3, 4, 4, 5, 5, 6, 6, 6, 5,
5, 4, 3, 2, 1, 0, -1, -1, -2, -3, -4, -5, -5, -6, -6, -6, -6, -5, -5, -4, -3,
-2, -1, 0, 2, 3, 4, 5, 6, 6, 7, 8, 8, 8, 8, 7, 7, 6, 5, 4, 3, 2, 0, -1, -2, -3,
-4, -6, -7, -8, -8, -9, -9, -9, -9, -9, -8, -7, -6, -5, -4, -3, -2, -1, 1, 2, 3,
4, 4, 5, 5, 5, 5, 5, 5, 4, 3, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -7, -7,
-6, -6, -6, -5, -5, -4, -3, -2, -1, 0, 1, 3, 4, 5, 6, 6, 7, 7, 7, 7, 7, 6, 6, 5,
4, 3, 2, 1, 0, -1, -3, -4, -4, -5, -6, -6, -6, -7, -7, -6, -6, -6, -5, -4, -3,
-2, -1, 0, 1, 2, 3, 4, 4, 5, 5, 6, 6, 5, 5, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5,
-6, -6, -7, -8, -8, -8, -8, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 3, 3, 4,
5, 6, 6, 7, 7, 6, 6, 5, 5, 4, 3, 2, 1, 0, -1, -1, -2, -3, -4, -5, -5, -5, -5,
-5, -5, -4, -4, -3, -3, -2, -1, 0, 1, 2, 3, 3, 4, 5, 5, 5, 5, 5, 5, 4, 4, 3, 2,
1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -8, -8, -8, -8, -7, -7, -6, -6, -5, -4,
-3, -2, 0, 1, 2, 3, 4, 5, 6, 6, 6, 7, 7, 6, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3,
-4, -4, -5, -5, -6, -6, -6, -6, -5, -5, -4, -4, -3, -2, -1, 0, 1, 2, 2, 3, 3, 4,
4, 4, 4, 4, 4, 3, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -6, -6, -6, -6, -6,
-6, -5, -4, -3, -2, -1, 0, 1, 2, 2, 4, 4, 5, 6, 6, 7, 7, 7, 7, 6, 6, 5, 4, 3, 2,
1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8, -8, -8, -7, -7, -6, -6, -5, -4, -3,
-2, -1, 0, 0, 1, 2, 3, 3, 4, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3,
-4, -4, -4, -4, -4, -4, -3, -3, -2, -1, -1, 0, 1, 2, 3, 4, 5, 5, 6, 6, 6, 6, 6,
6, 6, 5, 4, 4, 3, 2, 1, 0, -2, -3, -4, -5, -6, -7, -8, -8, -8, -9, -9, -9, -8,
-8, -7, -6, -6, -5, -4, -3, -1, 0, 0, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2,
1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 3, 4,
4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8,
-8, -8, -8, -8, -7, -7, -6, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 4, 4, 4,
4, 3, 3, 3, 2, 2, 1, 0, 0, -1, -2, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -2,
-2, -1, 0, 0, 1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 3, 2, 2, 1, 0, -1, -2,
-3, -4, -5, -5, -6, -6, -6, -6, -6, -6, -6, -5, -5, -4, -3, -3, -2, -1, 0, 1, 2,
2, 3, 3, 4, 4, 4, 4, 3, 3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5,
-5, -5, -5, -4, -4, -3, -3, -2, -1, 0, 1, 2, 2, 3, 4, 4, 5, 5, 5, 5, 5, 4, 4, 3,
3, 2, 1, 0, 0, -1, -2, -3, -4, -4, -5, -5, -6, -6, -6, -6, -5, -5, -4, -4, -3,
-2, -2, -1, 0, 1, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 2, 1, 0, 0, -1, -2, -2,
-3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 3, 3,
4, 4, 3, 3, 3, 3, 2, 1, 0, 0, -1, -2, -3, -4, -4, -5, -5, -6, -6, -6, -6, -6,
-6, -5, -5, -4, -4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4,
3, 2, 2, 1, 0, -1, -1, -2, -2, -3, -3, -3, -4, -4, -3, -3, -3, -2, -2, -2, -1,
0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, -1, -2, -2, -3, -4, -5, -5, -6,
-6, -6, -7, -7, -7, -6, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1, 2, 3, 4, 4, 5, 5,
6, 6, 6, 6, 5, 5, 5, 4, 3, 3, 2, 1, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -1, -1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1,
-2, -3, -3, -4, -5, -5, -5, -6, -6, -6, -6, -6, -5, -5, -4, -4, -3, -2, -1, 0,
0, 1, 2, 3, 3, 4, 4, 4, 5, 5, 5, 4, 4, 4, 3, 2, 2, 1, 0, -1, -1, -2, -2, -3, -3,
-4, -4, -4, -4, -4, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 3, 4, 3,
3, 3, 3, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -4, -4, -3,
-3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1,
-2, -3, -3, -4, -4, -5, -5, -5, -5, -5, -4, -4, -4, -3, -2, -2, -1, 0, 1, 1, 2,
3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3, -3, -4, -4,
-4, -4, -4, -4, -4, -3, -3, -3, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -4, -4, -4, -3, -3,
-2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2,
-2, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2,
2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -3, -3, -3, -4, -4, -4,
-4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 1,
1, 0, 0, -1, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -5, -4, -4, -4, -3, -3, -2,
-1, -1, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2,
2, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -3, -3, -4, -4, -5, -5, -5, -5, -5, -5, -5,
-5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2,
2, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0,
1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -3, -3, -4, -4, -5, -5,
-5, -5, -5, -5, -5, -5, -4, -4, -4, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3,
3, 3, 3, 3, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -2, -2,
-3, -3, -4, -4, -5, -5, -5, -5, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0,
1, 1, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -3,
-3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 1,
1, 1, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -2,
-2, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3,
3, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-3, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2,
-2, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4,
4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -4,
-4, -4, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0,
0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0,
1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2,
2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0,
-1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1,
1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1,
1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4,
-4, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2,
1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2,
-3, -3, -3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 1,
1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2,
2, 2, 3, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1,
0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2,
-2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1,
-1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1,
0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1,
1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-3, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4,
-3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1,
1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -1,
-1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1,
1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0,
1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -2, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, };
 
Sample <THUMBPIANO1_NUM_CELLS, AUDIO_RATE> thumbpiano1(THUMBPIANO1_DATA);

 #endif /* THUMBPIANO1_H_ */
