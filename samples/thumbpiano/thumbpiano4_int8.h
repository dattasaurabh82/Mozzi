#ifndef THUMBPIANO4_H_
#define THUMBPIANO4_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define THUMBPIANO4_NUM_CELLS 8193
#define THUMBPIANO4_SAMPLERATE 16384
 
const char __attribute__((progmem)) THUMBPIANO4_DATA [] = {-1, -2, -2, -3, -6,
-10, -20, -32, -22, -4, -10, -23, -20, -3, 14, 31, 44, 51, 41, 22, 18, 24, 16,
5, 12, 25, 24, 19, 33, 47, 32, 15, 24, 17, -25, -53, -48, -41, -40, -16, 1, -6,
-21, -24, -11, -38, -57, -55, -66, -89, -72, -29, -41, -52, -4, 35, -7, -47,
-36, -24, -34, -18, 32, 40, 1, -5, 47, 90, 75, 59, 75, 61, 19, 11, 55, 73, 54,
75, 124, 124, 82, 72, 78, 48, 20, 25, 12, -28, -23, 23, 36, 11, 12, 27, -21,
-82, -67, -36, -64, -88, -53, -27, -82, -128, -94, -86, -108, -87, -50, -52,
-93, -104, -93, -84, -84, -77, -55, -59, -65, -50, -27, -22, -11, 5, -2, -6, 9,
18, 7, 17, 70, 89, 62, 60, 63, 40, 43, 93, 122, 95, 75, 88, 82, 56, 72, 101, 92,
82, 102, 102, 73, 63, 72, 50, 12, 10, 23, 7, -3, 37, 73, 44, -5, -23, -36, -78,
-95, -48, -26, -55, -62, -42, -59, -102, -104, -80, -70, -68, -65, -70, -96,
-106, -91, -70, -49, -52, -60, -56, -48, -42, -32, -25, -23, -21, -29, -27, 0,
27, 35, 38, 62, 68, 26, 4, 30, 47, 42, 69, 104, 85, 59, 74, 85, 64, 49, 57, 54,
36, 43, 63, 51, 32, 42, 46, 16, -9, 3, 17, -1, -7, 22, 20, -30, -52, -27, -22,
-48, -42, -13, -29, -65, -55, -27, -38, -59, -43, -22, -41, -62, -50, -42, -53,
-46, -19, -19, -49, -50, -26, -26, -35, -19, -2, -14, -25, -6, 9, 1, 0, 17, 22,
5, -1, 15, 26, 21, 33, 59, 59, 40, 41, 54, 51, 43, 53, 65, 57, 48, 54, 65, 61,
54, 54, 48, 37, 29, 31, 32, 25, 21, 27, 21, -1, -8, -2, -11, -31, -31, -24, -43,
-66, -59, -42, -52, -62, -53, -56, -80, -92, -78, -73, -87, -85, -65, -65, -80,
-73, -55, -52, -51, -35, -21, -30, -37, -25, -12, -7, 5, 21, 28, 29, 37, 49, 54,
53, 59, 70, 70, 67, 76, 88, 90, 91, 94, 90, 75, 61, 63, 66, 64, 63, 65, 61, 46,
33, 27, 17, -2, -9, -6, -10, -23, -28, -23, -27, -41, -48, -52, -66, -82, -80,
-69, -65, -60, -53, -54, -64, -72, -71, -69, -69, -62, -50, -44, -41, -32, -23,
-19, -15, -8, -6, -10, -7, 3, 10, 17, 30, 41, 43, 40, 40, 42, 39, 37, 42, 48,
48, 49, 55, 59, 55, 50, 46, 40, 30, 24, 23, 28, 32, 31, 30, 25, 15, 3, -6, -11,
-16, -17, -14, -12, -16, -19, -19, -22, -30, -37, -43, -48, -48, -43, -38, -36,
-34, -32, -34, -40, -41, -39, -36, -33, -24, -17, -18, -18, -12, -7, -7, -5, 2,
6, 6, 10, 17, 19, 19, 24, 30, 30, 28, 31, 35, 35, 35, 38, 38, 34, 31, 33, 35,
33, 30, 27, 23, 19, 17, 15, 14, 13, 11, 8, 3, -3, -8, -11, -13, -17, -20, -22,
-24, -26, -26, -26, -26, -27, -28, -31, -36, -39, -38, -37, -34, -30, -27, -27,
-27, -24, -19, -19, -21, -17, -14, -15, -12, -3, 3, 4, 9, 15, 14, 10, 10, 13,
15, 19, 25, 30, 31, 32, 33, 31, 29, 28, 26, 26, 26, 28, 29, 30, 31, 31, 27, 21,
16, 12, 8, 6, 7, 8, 5, 2, 1, -3, -7, -12, -17, -21, -24, -26, -26, -25, -23,
-24, -24, -25, -29, -35, -38, -39, -39, -38, -34, -30, -26, -25, -23, -21, -22,
-24, -22, -20, -18, -13, -5, 0, 3, 8, 12, 11, 11, 14, 17, 19, 25, 31, 32, 33,
36, 38, 37, 34, 34, 35, 34, 33, 34, 35, 33, 31, 30, 27, 21, 16, 14, 10, 7, 4, 2,
-2, -5, -7, -11, -15, -19, -23, -27, -31, -34, -35, -35, -33, -31, -30, -30,
-33, -36, -36, -35, -35, -33, -31, -28, -24, -20, -16, -14, -13, -11, -9, -8,
-8, -4, 3, 7, 10, 14, 16, 15, 15, 18, 19, 18, 21, 25, 26, 26, 28, 29, 28, 27,
26, 24, 21, 19, 20, 22, 22, 23, 23, 21, 16, 11, 8, 4, 1, 0, 1, 0, 0, 0, -2, -5,
-9, -12, -16, -20, -23, -23, -20, -19, -17, -16, -18, -21, -25, -27, -27, -27,
-25, -22, -20, -20, -19, -18, -18, -19, -19, -18, -17, -15, -12, -8, -5, -3, 0,
1, 1, 1, 2, 4, 6, 9, 14, 17, 19, 21, 22, 23, 23, 23, 23, 23, 24, 26, 28, 30, 31,
32, 31, 28, 25, 22, 18, 17, 16, 15, 13, 11, 9, 6, 2, -2, -6, -10, -13, -16, -19,
-21, -23, -24, -26, -28, -30, -32, -34, -35, -36, -36, -36, -37, -36, -36, -34,
-33, -30, -28, -26, -24, -21, -19, -16, -14, -10, -5, -1, 3, 6, 9, 11, 13, 16,
19, 22, 26, 30, 33, 36, 38, 39, 39, 39, 38, 38, 38, 39, 40, 41, 40, 39, 37, 33,
28, 24, 20, 17, 13, 11, 10, 7, 3, 0, -5, -11, -17, -21, -26, -30, -33, -34, -35,
-37, -39, -41, -43, -47, -49, -51, -51, -51, -49, -47, -44, -42, -41, -39, -37,
-36, -34, -30, -25, -20, -14, -7, -2, 2, 5, 7, 9, 12, 17, 22, 28, 34, 39, 43,
46, 47, 48, 47, 47, 48, 49, 50, 52, 54, 54, 53, 52, 49, 44, 39, 34, 30, 27, 24,
21, 17, 13, 9, 3, -3, -9, -15, -20, -25, -28, -32, -35, -37, -41, -44, -48, -51,
-55, -57, -58, -58, -57, -57, -55, -54, -53, -52, -51, -49, -47, -43, -37, -32,
-27, -21, -16, -11, -7, -2, 3, 6, 10, 16, 22, 26, 32, 37, 42, 45, 48, 50, 51,
52, 53, 54, 55, 55, 56, 56, 55, 54, 53, 50, 46, 42, 38, 32, 28, 24, 20, 16, 11,
7, 2, -4, -10, -15, -20, -25, -29, -33, -37, -40, -43, -46, -49, -51, -53, -55,
-57, -57, -57, -56, -55, -54, -52, -51, -48, -45, -42, -39, -35, -30, -25, -20,
-14, -8, -3, 2, 6, 10, 14, 18, 23, 28, 33, 39, 44, 47, 49, 51, 52, 53, 53, 53,
53, 54, 54, 54, 53, 51, 49, 45, 40, 36, 31, 26, 22, 19, 15, 10, 5, 0, -5, -11,
-16, -21, -25, -30, -33, -36, -39, -42, -45, -47, -50, -53, -54, -55, -55, -54,
-52, -51, -50, -49, -47, -45, -43, -40, -36, -32, -27, -21, -16, -11, -6, 0, 4,
8, 11, 16, 20, 24, 30, 35, 39, 43, 46, 48, 50, 51, 51, 52, 52, 51, 51, 51, 50,
48, 47, 45, 41, 37, 33, 28, 23, 19, 15, 10, 6, 1, -4, -9, -14, -18, -22, -26,
-30, -33, -36, -39, -41, -43, -45, -47, -49, -50, -51, -51, -50, -48, -46, -44,
-42, -41, -39, -36, -34, -31, -27, -23, -18, -13, -8, -3, 1, 5, 8, 11, 14, 17,
21, 25, 29, 33, 36, 39, 42, 43, 44, 44, 44, 44, 43, 43, 43, 42, 42, 41, 39, 36,
33, 29, 26, 21, 18, 15, 12, 8, 4, 1, -3, -8, -12, -16, -19, -22, -24, -26, -28,
-31, -32, -35, -37, -39, -40, -41, -41, -41, -39, -38, -37, -36, -35, -34, -34,
-32, -30, -28, -25, -21, -17, -13, -10, -7, -4, -1, 1, 4, 7, 10, 13, 16, 19, 22,
25, 28, 29, 31, 32, 33, 34, 34, 35, 36, 36, 36, 35, 35, 33, 32, 30, 28, 26, 23,
21, 19, 16, 13, 9, 6, 3, -1, -4, -6, -9, -11, -13, -16, -18, -21, -23, -25, -28,
-30, -31, -32, -32, -32, -32, -31, -31, -31, -31, -30, -30, -29, -27, -25, -23,
-21, -18, -16, -13, -11, -8, -6, -3, -1, 1, 3, 5, 8, 10, 13, 15, 18, 19, 21, 22,
23, 24, 25, 25, 26, 26, 27, 27, 27, 26, 25, 24, 23, 21, 19, 18, 17, 15, 13, 11,
8, 6, 3, 1, -2, -3, -5, -7, -8, -10, -12, -13, -15, -18, -20, -21, -22, -23,
-23, -22, -22, -22, -22, -22, -23, -23, -23, -22, -21, -19, -17, -15, -13, -11,
-10, -8, -7, -6, -5, -3, -1, 1, 3, 6, 8, 9, 11, 12, 13, 14, 15, 16, 18, 19, 20,
21, 21, 21, 21, 20, 19, 19, 18, 18, 17, 17, 15, 14, 12, 10, 7, 5, 3, 2, 0, -1,
-2, -4, -6, -8, -10, -13, -15, -17, -18, -20, -20, -21, -21, -21, -22, -22, -22,
-23, -23, -23, -22, -21, -19, -18, -16, -14, -13, -11, -9, -7, -5, -3, -1, 1, 3,
6, 8, 10, 11, 13, 15, 16, 18, 19, 20, 22, 22, 23, 23, 23, 23, 23, 22, 21, 20,
19, 18, 17, 16, 14, 12, 10, 8, 5, 3, 0, -2, -4, -6, -7, -9, -11, -13, -15, -17,
-19, -21, -22, -24, -25, -26, -26, -26, -26, -26, -25, -25, -25, -24, -23, -22,
-20, -18, -16, -14, -12, -9, -7, -5, -2, 0, 2, 4, 7, 9, 11, 13, 15, 17, 19, 20,
21, 22, 23, 24, 25, 26, 26, 26, 25, 24, 23, 22, 20, 19, 17, 16, 15, 13, 11, 9,
7, 4, 1, -1, -4, -6, -7, -9, -11, -12, -14, -16, -18, -19, -21, -23, -24, -25,
-25, -25, -25, -25, -25, -24, -24, -24, -23, -21, -20, -18, -16, -15, -13, -11,
-8, -6, -4, -1, 1, 3, 6, 8, 10, 12, 14, 16, 17, 18, 20, 21, 22, 23, 24, 24, 24,
24, 24, 23, 22, 21, 19, 17, 15, 14, 12, 10, 8, 6, 4, 2, -1, -3, -6, -8, -10,
-12, -14, -15, -16, -17, -19, -20, -21, -22, -23, -23, -24, -24, -23, -23, -22,
-21, -19, -18, -17, -15, -13, -12, -9, -7, -5, -3, -1, 1, 3, 5, 8, 10, 12, 14,
16, 17, 19, 20, 21, 22, 22, 22, 22, 22, 22, 22, 22, 21, 20, 19, 17, 15, 13, 11,
8, 6, 3, 1, -1, -3, -5, -7, -9, -12, -14, -17, -19, -21, -22, -23, -24, -24,
-25, -25, -25, -25, -25, -25, -24, -24, -23, -21, -19, -18, -16, -14, -12, -10,
-7, -5, -3, 0, 3, 5, 8, 10, 12, 13, 15, 17, 19, 21, 22, 24, 25, 26, 27, 27, 27,
26, 26, 25, 24, 23, 22, 21, 20, 19, 17, 15, 13, 10, 7, 4, 2, -1, -4, -6, -9,
-11, -13, -15, -18, -20, -22, -24, -26, -27, -28, -29, -30, -30, -30, -30, -30,
-29, -29, -28, -26, -25, -24, -22, -20, -17, -15, -13, -10, -7, -5, -2, 1, 4, 7,
10, 12, 14, 16, 18, 20, 22, 24, 26, 27, 29, 30, 30, 30, 30, 30, 29, 28, 27, 26,
25, 24, 22, 20, 18, 16, 14, 11, 9, 6, 3, 0, -3, -6, -9, -11, -14, -16, -18, -20,
-22, -24, -26, -27, -29, -30, -30, -31, -31, -31, -30, -30, -29, -28, -27, -25,
-24, -22, -20, -18, -16, -13, -11, -8, -5, -3, 0, 3, 6, 9, 11, 13, 15, 17, 19,
20, 22, 23, 24, 25, 26, 27, 28, 28, 27, 26, 25, 24, 23, 22, 21, 19, 18, 16, 15,
13, 11, 8, 6, 3, 0, -2, -4, -7, -8, -10, -12, -14, -16, -17, -19, -21, -22, -23,
-23, -24, -25, -25, -25, -25, -25, -24, -24, -23, -21, -20, -19, -17, -16, -14,
-13, -11, -9, -7, -5, -2, 0, 3, 5, 7, 9, 10, 12, 14, 15, 16, 18, 19, 20, 21, 22,
23, 23, 23, 23, 22, 22, 21, 20, 19, 18, 17, 16, 15, 13, 11, 10, 8, 6, 3, 1, -1,
-3, -5, -7, -9, -11, -13, -14, -16, -17, -18, -20, -21, -22, -23, -23, -24, -24,
-24, -24, -24, -23, -22, -21, -20, -19, -18, -16, -15, -13, -12, -10, -8, -5,
-3, 0, 2, 5, 7, 8, 10, 12, 14, 16, 17, 19, 20, 21, 22, 23, 24, 25, 25, 25, 25,
24, 24, 23, 22, 20, 19, 18, 16, 15, 13, 11, 9, 6, 4, 2, -1, -3, -5, -7, -9, -12,
-13, -15, -17, -18, -20, -21, -22, -24, -25, -26, -26, -27, -27, -27, -26, -26,
-25, -24, -23, -22, -21, -20, -18, -17, -15, -13, -11, -8, -6, -3, -1, 2, 4, 6,
8, 11, 13, 15, 17, 18, 20, 22, 24, 25, 26, 27, 28, 28, 28, 28, 28, 28, 27, 26,
25, 24, 22, 21, 19, 17, 15, 13, 10, 7, 5, 2, 0, -3, -6, -8, -11, -13, -15, -17,
-19, -21, -23, -25, -26, -28, -29, -30, -31, -31, -31, -31, -31, -30, -29, -28,
-27, -26, -25, -23, -22, -19, -17, -14, -11, -9, -6, -3, -1, 2, 5, 8, 10, 13,
15, 18, 20, 22, 24, 26, 28, 29, 30, 31, 32, 32, 32, 32, 31, 30, 29, 28, 27, 25,
23, 21, 19, 16, 14, 11, 8, 5, 2, -1, -4, -7, -10, -12, -14, -17, -19, -21, -23,
-25, -27, -28, -29, -30, -31, -31, -32, -31, -31, -30, -29, -28, -27, -26, -24,
-23, -21, -18, -16, -13, -11, -8, -5, -3, 0, 3, 5, 8, 10, 13, 15, 17, 19, 21,
23, 24, 25, 27, 28, 28, 29, 29, 29, 28, 28, 27, 25, 24, 23, 21, 19, 17, 15, 13,
10, 8, 5, 3, 0, -3, -6, -8, -10, -12, -14, -16, -18, -20, -22, -23, -25, -26,
-27, -27, -28, -28, -28, -27, -26, -26, -25, -24, -22, -21, -19, -17, -15, -13,
-11, -9, -6, -4, -2, 1, 3, 6, 8, 11, 13, 15, 17, 18, 20, 21, 22, 23, 24, 25, 26,
26, 26, 26, 25, 25, 23, 22, 21, 19, 18, 16, 14, 12, 10, 7, 5, 2, 0, -3, -5, -8,
-10, -13, -15, -16, -18, -20, -21, -23, -24, -25, -26, -26, -27, -27, -27, -26,
-26, -25, -24, -22, -21, -19, -18, -16, -14, -12, -9, -7, -5, -2, 0, 2, 5, 7, 9,
11, 14, 16, 17, 19, 20, 21, 22, 23, 24, 24, 24, 25, 25, 24, 24, 23, 22, 21, 19,
17, 16, 14, 12, 10, 8, 6, 4, 2, 0, -2, -5, -7, -9, -11, -13, -15, -16, -17, -19,
-20, -21, -22, -22, -23, -23, -23, -24, -23, -23, -22, -22, -21, -19, -18, -17,
-15, -14, -12, -10, -8, -6, -4, -3, -1, 1, 3, 5, 7, 9, 10, 12, 14, 15, 16, 17,
17, 18, 19, 19, 19, 19, 19, 20, 19, 19, 18, 17, 16, 15, 14, 12, 11, 9, 8, 7, 5,
3, 2, 0, -2, -3, -5, -6, -8, -9, -10, -11, -13, -13, -14, -15, -16, -16, -17,
-17, -17, -17, -17, -17, -17, -16, -15, -15, -14, -13, -12, -10, -9, -8, -6, -5,
-4, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13,
12, 12, 11, 10, 10, 9, 8, 7, 6, 5, 4, 3, 1, 1, -1, -1, -3, -3, -4, -5, -6, -7,
-8, -8, -9, -9, -9, -9, -10, -10, -10, -9, -9, -9, -9, -9, -8, -8, -7, -7, -6,
-5, -5, -4, -3, -2, -1, 0, 0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 6, 6, 7, 7, 7, 6, 6, 6,
6, 6, 6, 6, 5, 5, 4, 3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6,
-6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -5, -5, -5, -4, -4,
-3, -3, -2, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 7, 8, 8, 8, 8, 8, 8,
8, 7, 7, 7, 7, 6, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -6, -7, -7,
-8, -9, -9, -10, -10, -11, -11, -11, -11, -11, -11, -11, -10, -10, -10, -9, -9,
-8, -8, -7, -6, -6, -5, -4, -3, -1, 0, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10,
11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 9, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0, -2,
-3, -4, -5, -6, -6, -7, -8, -9, -9, -10, -11, -11, -12, -12, -13, -13, -13, -13,
-12, -12, -11, -11, -10, -10, -9, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 2, 2,
3, 4, 5, 6, 7, 7, 8, 9, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 10, 10, 9, 9, 8,
7, 7, 6, 5, 4, 3, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -10, -11, -12,
-12, -13, -13, -13, -13, -13, -13, -12, -12, -11, -11, -10, -9, -8, -7, -6, -5,
-4, -3, -2, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 13, 13, 14, 13, 13,
13, 13, 12, 11, 11, 10, 9, 8, 6, 5, 4, 3, 1, 0, -1, -3, -4, -6, -7, -9, -10,
-11, -12, -13, -14, -15, -15, -16, -16, -16, -17, -17, -17, -17, -16, -16, -15,
-14, -13, -12, -10, -9, -7, -6, -5, -3, -2, 0, 1, 3, 5, 7, 8, 10, 11, 12, 14,
15, 16, 16, 17, 18, 18, 18, 18, 18, 18, 18, 17, 17, 16, 15, 14, 12, 11, 9, 8, 6,
4, 3, 1, -1, -2, -4, -6, -8, -9, -11, -13, -14, -16, -17, -18, -19, -19, -20,
-20, -21, -21, -21, -21, -21, -20, -20, -19, -18, -17, -16, -15, -13, -11, -10,
-8, -6, -4, -3, -1, 1, 3, 5, 7, 9, 11, 12, 14, 15, 17, 18, 19, 20, 21, 21, 22,
22, 22, 22, 22, 21, 21, 20, 19, 18, 16, 15, 13, 11, 9, 7, 6, 4, 2, 0, -2, -4,
-6, -8, -10, -12, -14, -16, -17, -18, -20, -21, -21, -22, -22, -23, -23, -23,
-23, -22, -22, -21, -21, -20, -18, -17, -15, -14, -12, -10, -8, -6, -5, -3, -1,
1, 3, 5, 7, 9, 11, 12, 14, 15, 17, 18, 19, 20, 20, 21, 21, 21, 21, 21, 20, 20,
19, 18, 17, 16, 15, 13, 11, 10, 8, 6, 4, 2, 0, -1, -3, -5, -7, -8, -10, -12,
-13, -15, -16, -17, -18, -18, -19, -19, -19, -19, -19, -19, -19, -18, -18, -17,
-16, -15, -14, -13, -11, -10, -8, -7, -5, -4, -2, 0, 1, 3, 4, 6, 7, 8, 10, 11,
12, 13, 14, 15, 15, 16, 16, 16, 16, 16, 16, 16, 15, 15, 14, 13, 12, 11, 10, 9,
7, 6, 5, 3, 2, 0, -1, -3, -4, -5, -7, -8, -9, -11, -12, -13, -14, -15, -15, -16,
-16, -16, -16, -16, -16, -16, -15, -15, -15, -14, -13, -12, -11, -10, -9, -7,
-6, -5, -3, -2, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 14, 15, 15, 15, 15,
15, 15, 15, 14, 14, 13, 13, 12, 11, 10, 9, 7, 6, 5, 3, 2, 0, -1, -3, -4, -5, -6,
-8, -9, -10, -11, -12, -13, -14, -15, -16, -16, -16, -16, -16, -16, -16, -16,
-16, -15, -14, -14, -13, -12, -11, -10, -8, -7, -6, -4, -3, -2, 0, 1, 3, 4, 5,
6, 8, 9, 10, 11, 12, 13, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 13, 13,
12, 11, 10, 9, 8, 6, 5, 4, 2, 1, 0, -1, -3, -4, -5, -6, -8, -9, -10, -11, -12,
-13, -14, -14, -15, -15, -16, -16, -16, -16, -16, -16, -15, -15, -15, -14, -13,
-13, -12, -11, -10, -8, -7, -6, -4, -3, -2, 0, 1, 2, 3, 5, 6, 7, 8, 9, 11, 12,
12, 13, 14, 14, 14, 15, 15, 15, 15, 15, 15, 14, 14, 13, 13, 12, 11, 10, 8, 7, 6,
5, 4, 2, 1, 0, -1, -3, -4, -5, -7, -8, -9, -10, -11, -12, -13, -13, -14, -14,
-15, -15, -15, -15, -15, -15, -15, -14, -14, -13, -12, -11, -11, -9, -8, -7, -6,
-5, -3, -2, -1, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 11, 12, 12, 12, 12, 12,
12, 12, 12, 11, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6,
-6, -7, -8, -9, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10,
-10, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9,
9, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 8, 7, 6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3,
-4, -5, -6, -7, -8, -8, -9, -10, -10, -11, -11, -11, -11, -12, -11, -11, -11,
-10, -10, -9, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 3, 4, 5, 5, 6, 7, 8,
9, 9, 10, 11, 11, 11, 12, 12, 12, 11, 11, 11, 10, 10, 9, 8, 8, 7, 6, 5, 4, 3, 1,
0, -1, -2, -3, -4, -6, -7, -8, -8, -9, -10, -10, -11, -12, -12, -12, -13, -13,
-13, -13, -13, -12, -12, -11, -11, -10, -9, -8, -7, -6, -6, -5, -4, -3, -1, 0,
1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9, 10, 10, 10, 11, 11, 11, 11, 11, 10, 10, 10, 9,
8, 8, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8, -8, -9, -9,
-9, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9, -8, -7, -7, -6, -5, -5, -4,
-3, -2, -2, -1, 0, 1, 2, 3, 3, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
6, 6, 5, 5, 4, 3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -4, -4, -5, -5, -6, -7, -7, -7,
-7, -8, -8, -8, -8, -7, -7, -7, -7, -6, -6, -6, -5, -4, -4, -3, -2, -1, 0, 0, 1,
2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 3, 2, 2,
1, 0, -1, -2, -3, -3, -4, -5, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -9, -10,
-9, -9, -9, -9, -8, -8, -7, -6, -6, -5, -5, -4, -3, -2, -1, -1, 0, 1, 2, 3, 4,
5, 5, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 10, 9, 9, 9, 8, 8, 7, 7, 6, 5, 5, 4,
3, 2, 1, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8, -9, -9, -10, -10, -10, -11,
-11, -11, -11, -11, -11, -11, -11, -10, -10, -9, -9, -8, -8, -7, -6, -5, -4, -4,
-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 10, 11, 11, 11, 11,
10, 10, 10, 9, 9, 8, 7, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7,
-8, -8, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -10, -10, -9,
-9, -8, -8, -7, -6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8,
8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 7, 6, 6, 5, 5, 4, 3, 2, 2, 1, 0, -1, -2, -3,
-3, -4, -5, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8,
-8, -7, -7, -6, -6, -5, -4, -4, -3, -2, -1, -1, 0, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7,
7, 8, 8, 8, 8, 9, 9, 9, 8, 8, 8, 8, 7, 7, 6, 5, 5, 4, 3, 3, 2, 1, 0, -1, -2, -3,
-4, -5, -6, -6, -7, -8, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -11,
-11, -11, -10, -10, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6,
7, 8, 9, 9, 10, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 11, 11, 10, 9, 8, 7, 6,
5, 4, 3, 2, 1, 0, -1, -2, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -13, -14,
-14, -14, -15, -15, -15, -15, -14, -14, -14, -13, -12, -11, -11, -9, -8, -7, -6,
-5, -4, -3, -1, 0, 1, 3, 4, 5, 6, 7, 9, 10, 11, 11, 12, 13, 13, 14, 14, 14, 14,
15, 15, 14, 14, 14, 13, 12, 12, 11, 10, 9, 8, 7, 5, 4, 3, 2, 0, -1, -2, -4, -5,
-6, -8, -9, -10, -11, -12, -13, -13, -14, -15, -15, -15, -16, -16, -16, -16,
-16, -15, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -4, -3, -2, -1, 1, 2, 4,
5, 6, 7, 9, 10, 11, 11, 12, 13, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 12, 11,
11, 10, 9, 8, 6, 5, 4, 3, 2, 0, -1, -2, -3, -5, -6, -7, -8, -9, -10, -11, -11,
-12, -12, -13, -13, -13, -13, -14, -13, -13, -13, -13, -12, -11, -11, -10, -9,
-8, -7, -6, -5, -4, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 10, 10, 11, 11,
11, 11, 11, 11, 10, 10, 9, 9, 8, 7, 6, 5, 5, 3, 3, 2, 1, 0, -1, -2, -3, -4, -5,
-6, -7, -7, -8, -9, -9, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9,
-9, -8, -8, -7, -6, -6, -5, -4, -3, -2, -1, 0, 1, 1, 2, 3, 4, 5, 6, 7, 7, 8, 8,
9, 9, 9, 9, 10, 9, 9, 9, 9, 9, 8, 8, 7, 7, 6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3,
-4, -5, -5, -6, -7, -8, -8, -9, -9, -10, -10, -11, -11, -11, -11, -11, -10, -10,
-10, -10, -9, -9, -8, -7, -7, -6, -5, -4, -3, -2, -1, 0, 0, 1, 2, 3, 4, 5, 6, 6,
7, 8, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 2, 1,
0, 0, -1, -2, -3, -4, -5, -5, -6, -7, -7, -8, -8, -9, -9, -9, -10, -10, -10,
-10, -10, -9, -9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -4, -3, -3, -2, -1, -1, 0,
1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5,
4, 4, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -6, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -2,
-1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3,
3, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4,
-4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1,
1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0,
-1, -1, -1, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 3,
3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 1, 0,
0, -1, -1, -2, -3, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -7, -6, -6, -6, -5, -5, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2,
3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 3, 3, 2, 1,
1, 0, 0, -1, -2, -2, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -6, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 3,
3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0,
-1, -1, -2, -3, -3, -4, -4, -5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7,
-6, -6, -6, -5, -5, -5, -4, -4, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 5, 5,
6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 3, 3, 2, 1, 0, 0, -1, -2, -3,
-4, -5, -5, -6, -7, -7, -8, -8, -9, -9, -9, -10, -10, -10, -10, -10, -10, -9,
-9, -9, -8, -8, -7, -6, -6, -5, -4, -3, -2, -1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 7, 8,
8, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1, 0,
-1, -2, -3, -4, -5, -5, -6, -7, -8, -9, -9, -10, -10, -11, -11, -12, -12, -12,
-12, -12, -12, -11, -11, -11, -10, -10, -9, -8, -7, -7, -6, -5, -4, -3, -2, -1,
0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 10, 11, 11, 11, 11, 10, 10, 10,
9, 9, 8, 7, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -7, -8, -8,
-9, -9, -10, -10, -11, -11, -11, -11, -11, -11, -11, -10, -10, -9, -9, -8, -8,
-7, -6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 9, 9,
9, 9, 9, 9, 8, 8, 8, 7, 7, 6, 5, 5, 4, 3, 3, 2, 1, 0, -1, -1, -2, -3, -4, -4,
-5, -6, -6, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -6,
-5, -5, -4, -4, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7,
7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 4, 4, 3, 2, 2, 1, 1, 0, -1, -1, -2, -3, -3, -4,
-5, -5, -6, -6, -6, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -6,
-6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 7, 7,
8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 5, 4, 4, 3, 2, 2, 1, 0, -1, -2, -2, -3, -4,
-5, -5, -6, -7, -7, -8, -8, -9, -9, -9, -9, -10, -10, -10, -10, -10, -9, -9, -9,
-8, -8, -7, -7, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1, 2, 2, 3, 4, 5, 5, 6, 7, 7,
7, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 7, 6, 6, 5, 5, 4, 3, 2, 2, 1, 0, -1,
-2, -2, -3, -4, -5, -5, -6, -7, -7, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -8, -8, -8, -7, -7, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 2, 2, 3,
4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2,
1, 1, 0, -1, -2, -2, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -8, -8, -8,
-7, -7, -7, -7, -7, -6, -6, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 0, 1, 2, 2,
3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0,
-1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -5,
-5, -5, -5, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4,
5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2,
-3, -3, -4, -4, -4, -5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -7, -7, -6, -6, -6,
-6, -5, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2,
-3, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6,
-6, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4,
5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2,
-2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -4, -4, -4, -4, -4,
-3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3,
3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3,
-3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2,
-2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5,
-5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -4, -4,
-3, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 6, 6, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4,
-4, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6,
-5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5,
6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2,
-2, -3, -4, -4, -4, -5, -5, -6, -6, -6, -6, -6, -7, -7, -7, -6, -6, -6, -6, -6,
-6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2,
-2, -3, -3, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5,
-5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5,
5, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2, -3,
-3, -4, -4, -5, -6, -6, -6, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7,
-7, -6, -6, -5, -5, -4, -4, -3, -2, -2, -1, 0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7,
7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 6, 6, 5, 5, 4, 3, 3, 2, 1, 0, -1, -1, -2,
-3, -4, -5, -5, -6, -7, -7, -8, -8, -9, -9, -10, -10, -10, -10, -10, -10, -10,
-9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -4, -3, -2, -2, -1, 0, 1, 2, 2, 3, 4, 5,
5, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 9, 9, 8, 8, 8, 7, 7, 6, 6, 5, 5, 4, 3, 3, 2, 1,
0, 0, -1, -2, -3, -3, -4, -5, -5, -6, -7, -7, -7, -8, -8, -8, -9, -9, -9, -9,
-9, -8, -8, -8, -8, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2,
3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2,
1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -4, -5, -5, -6, -6, -6, -6, -6, -7, -6, -7,
-6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3,
3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, 0,
-1, -2, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6,
-6, -5, -5, -5, -4, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3,
4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0,
-1, -1, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2,
2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2,
1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, -1, 0,
0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3,
3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5,
-4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2,
2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0,
-1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2,
2, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3,
-3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3,
3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2,
-2, -2, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -4, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3,
4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, -1,
-1, -1, -2, -2, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -4, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2,
2, 2, 3, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0,
0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1,
1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0,
0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0,
0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4,
-4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0,
0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1,
1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, };
 
 #endif /* THUMBPIANO4_H_ */
