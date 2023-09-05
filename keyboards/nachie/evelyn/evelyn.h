/*
Copyright 2021 KapCave

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    k1, k2, k3, k4, k5, k6, k7, k8, k9, k10, k11, \
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21,\
    k22, k23, k24, k25, k26, k27, k28, k29, k30, k31, k32,\
    k34, k35, k36,                        k37, k38, k39\
) { \
    { k1, k3, k5, k7, k9, k11}, \
    { k2, k4, k6, k8, k10, XXX}, \
    { k12, k14, k16, k18, k20, k21}, \
    { k13, k15, k17, k19, XXX, XXX}, \
    { k22, k24, k26, k28, k30, k32}, \
    { k23, k25, k27, k29, k31, XXX}, \
    { k34, k35, k36, k37, k38, k39}, \
}
