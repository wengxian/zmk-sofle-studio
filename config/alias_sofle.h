// Reference:

/*              Sofle Aliexpress - Right Hand D-Pad

  ╭────────────────────────┬───┬────────────────────────╮ ╭─────────────────────────┬────┬─────────────────────────╮
  │  0   1   2   3   4   5 │ 6 │ 7   8   9   10  11  12 │ │ LN5 LN4 LN3 LN2 LN1 LN0 │ D0 │ RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 13  14  15  16  17  18 │ 19│ 20  21  22  23  24  25 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ D1 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 26  27  28  29  30  31 │ 32│ 33  34  35  36  37  38 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ D2 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 39  40  41  42  43  44 │ 45│ 46  47  48  49  50  51 │ │ LB5 LB4 LB3 LB2 LB1 LB0 │ D3 │ RB0 RB1 RB2 RB3 RB4 RB5 │
  │ 52  53  54  55  56  57 │ 58│ 59  60  61  62  63     │ │ LE0 LH4 LH3 LH2 LH1 LH0 │ D4 │ RH0 RH1 RH2 RH3 RH4     │
  ╰────────────────────────┴───┴────────────────────────╯ ╰─────────────────────────┴────┴─────────────────────────╯             */


#pragma once

// Left Number Row
#define LN0 5
#define LN1 4
#define LN2 3
#define LN3 2
#define LN4 1
#define LN5 0

// Left Top Row
#define LT0 18
#define LT1 17
#define LT2 16
#define LT3 15
#define LT4 14
#define LT5 13

// Left Middle Row
#define LM0 31
#define LM1 30
#define LM2 29
#define LM3 28
#define LM4 27
#define LM5 26

// Left Bottom Row
#define LB0 44
#define LB1 43
#define LB2 42
#define LB3 41
#define LB4 40
#define LB5 39

// Left Thumb Row
#define LH0 57
#define LH1 56
#define LH2 55
#define LH3 54
#define LH4 53

// Right Number Row
#define RN0 7
#define RN1 8
#define RN2 9
#define RN3 10
#define RN4 11
#define RN5 12

// Right Top Row
#define RT0 20
#define RT1 21
#define RT2 22
#define RT3 23
#define RT4 24
#define RT5 25

// Right Middle Row
#define RM0 33
#define RM1 34
#define RM2 35
#define RM3 36
#define RM4 37
#define RM5 38

// Right Bottom Row
#define RB0 46
#define RB1 47
#define RB2 48
#define RB3 49
#define RB4 50
#define RB5 51

// Right Thumb Row
#define RH0 59
#define RH1 60
#define RH2 61
#define RH3 62
#define RH4 63

// D-Pad
#define D0 6
#define D1 19
#define D2 32
#define D3 45
#define D4 58


#define KEYS_L LN0 LN1 LN2 LN3 LN4 LN5 LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define KEYS_R RN0 RN1 RN2 RN3 RN4 RN5 RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5
#define KEYS_T LH0 LH1 LH2 LH3 LH4 RH0 RH1 RH2 RH3 RH4

#define KEYS_D D0 D1 D2 D3 D4
