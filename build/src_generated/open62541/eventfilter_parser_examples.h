/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 *    Copyright 2023-2024 (c) Fraunhofer IOSB (Author: Florian Düwel)
 */
#ifndef VERSION_H_IN
#define VERSION_H_IN


#define CASE_1 "/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.   See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */  SELECT  PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\"  WHERE OFTYPE ns=1;i=5001  /*alternative queries to create an identical eventfilter  1. SELECT PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\" WHERE $4 FOR $4:= OFTYPE ns=1;i=5001   */"
#define CASE_2 "/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.   See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */  SELECT  PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\"  WHERE OR(OR(OR(OFTYPE ns=1;i=5002, $4), OR($5, OFTYPE i=3035)), OR($1,$2))  FOR $1:= OFTYPE $7 $2:= OFTYPE $8 $4:= OFTYPE ns=1;i=5003 $5:= OFTYPE ns=1;i=5004 $7:= NODEID ns=1;i=5000 $8:= ns=1;i=5001    /* alternative queries to create an identical eventfilter 1. SELECT PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\" WHERE OR(OR(OR(OFTYPE ns=1;i=5002, OFTYPE ns=1;i=5003), OR(OFTYPE ns=1;i=5004, OFTYPE ns=0;i=3035)), OR(OFTYPE ns=1;i=5000, OFTYPE ns=1;i=5001))  2. SELECT PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\" WHERE OR(OR(OR($3, $4), OR($5, $6)), OR($1,$2)) FOR $1:= OFTYPE ns=1;i=5000 $2:= OFTYPE ns=1;i=5001 $3:= OFTYPE ns=1;i=5002 $4:= OFTYPE ns=1;i=5003 $5:= OFTYPE ns=1;i=5004 $6:= OFTYPE i=3035  3. SELECT PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\" WHERE $\"test\" FOR $\"test\":= OR(OR(OR(OFTYPE ns=1;i=5002, OFTYPE ns=1;i=5003), OR(OFTYPE ns=1;i=5004, OFTYPE ns=0;i=3035)), OR(OFTYPE ns=1;i=5000, OFTYPE ns=1;i=5001))  4. SELECT PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\" WHERE OR($\"first branch\", $\"second branch\") FOR $\"first branch\":= OR($\"third branch\", $\"fourth branch\") $\"second branch\":= OR($1, $2) $\"third branch\":= OR($3, $4) $\"fourth branch\":= OR($5, $6) $1:= OFTYPE ns=1;i=5000 $2:= OFTYPE ns=1;i=5001 $3:= OFTYPE ns=1;i=5002 $4:= OFTYPE ns=1;i=5003 $5:= OFTYPE $7 $6:= OFTYPE $8 $7:= ns=1;i=5004 $8:= i=3035   5. SELECT  PATH \"/Message\", PATH \"/Severity\", PATH \"/EventType\"  WHERE OR(OR(OR(OFTYPE ns=1;i=5002, $4), OR($5, OFTYPE i=3035)), OR($1,$2))  FOR $1:= OFTYPE $7 $2:= OFTYPE $8 $4:= OFTYPE ns=1;i=5003 $5:= OFTYPE ns=1;i=5004 $7:= NODEID ns=1;i=5000 $8:= TYPEID ns=1;i=5001 PATH \".\" ATTRIBUTE 1  */"

#endif // VERSION_H_IN
