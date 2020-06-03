#pragma once

#include "quantum.h"

#define LAYOUT( \
      k00,      k01,    k02,    k03,    k04,    k05,    k06     \
      k10,      k11,    k12,    k13,    k14,    k15,    k16     \
      k20,      k21,                            k25,    k26     \
      k30,              k32,            k34,            k36     \
      k40,      k41,                            k45     k46     \
) \
{ \
    {  k00,      k01,    k02,    k03,    k04,    k05,    k06    }, \
    {  k10,      k11,    k12,    k13,    k14,    k15,    k16    }, \
    {  k20,      k21,    KC_NO,  KC_NO,  NC_NO,  k25,    k26    }, \
    {  k30,      KC_NO,  k32,    KC_NO,  k34,    KC_NO,  k36    }, \
    {  k40,      k41,    KC_NO,  KC_NO,  NC_NO,  k45,    k46    }, \
} 
