// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
// DESCRIPTION:
//
//    
//-----------------------------------------------------------------------------


#ifndef __SETUP_CONFIG__
#define __SETUP_CONFIG__

extern char *configdir;

void M_LoadDefaults (void);
void M_SaveDefaults (void);

void M_SetConfigDir(void);

void M_SaveMainDefaults(char *filename);
void M_SaveExtraDefaults(char *filename);

void M_ApplyPlatformDefaults(void);

/* config.h for MSVC builds.  This is just the config.h created by
 * configure. */

/* Name of package */
#define PACKAGE "brown-bag-doom"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "Brown Bag Doom"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Brown Bag Doom 1.7.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "brown-bag-doom"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.7.0"

/* Change this when you create your awesome forked version */
#define PROGRAM_PREFIX "brown-bag-"

/* Version number of package */
#define VERSION "1.7.0"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */



#endif

