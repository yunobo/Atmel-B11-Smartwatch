﻿#include "sprite.h"
/*
**  Image data for missed_call
*/

const uint8_t missed_callBitmaps[] =
{
	0x00, 0x00, 0x10, 0x10, //                    #       #
	0x00, 0x00, 0x38, 0x38, //                   ###     ###
	0x1C, 0x00, 0x7C, 0x7C, //    ###           #####   #####
	0x3F, 0x00, 0x3E, 0xF8, //   ######          ##### #####
	0x7F, 0x00, 0x1F, 0xF0, //  #######           #########
	0xFF, 0x80, 0x1F, 0xE0, // #########          ########
	0xFF, 0x80, 0x0F, 0xC0, // #########           ######
	0xFF, 0x80, 0x0F, 0xE0, // #########           #######
	0xFF, 0x80, 0x1F, 0xF0, // #########          #########
	0xFF, 0xC0, 0x3F, 0xF8, // ##########        ###########
	0xFF, 0x80, 0x7C, 0x7C, // #########        #####   #####
	0x7F, 0x00, 0x38, 0x78, //  #######          ###    ####
	0x7F, 0x00, 0x10, 0x10, //  #######           #       #
	0x7E, 0x00, 0x00, 0x00, //  ######
	0x7F, 0x00, 0x00, 0x00, //  #######
	0x3F, 0x00, 0x00, 0x00, //   ######
	0x3F, 0x80, 0x00, 0x00, //   #######
	0x1F, 0x80, 0x00, 0x00, //    ######
	0x1F, 0xE0, 0x00, 0x00, //    ########
	0x0F, 0xE0, 0x00, 0x00, //     #######
	0x07, 0xF0, 0x00, 0x00, //      #######
	0x07, 0xFC, 0x3F, 0x80, //      #########    #######
	0x03, 0xFF, 0x7F, 0xE0, //       ########## ##########
	0x01, 0xFF, 0xFF, 0xE0, //        ####################
	0x00, 0xFF, 0xFF, 0xF0, //         ####################
	0x00, 0x3F, 0xFF, 0xF0, //           ##################
	0x00, 0x1F, 0xFF, 0xF0, //            #################
	0x00, 0x07, 0xFF, 0xE0, //              ##############
	0x00, 0x01, 0xFF, 0xC0, //                ###########
	0x00, 0x00, 0x3F, 0x80, //                   #######
};

const SPRITE_INFO missed_call =
{
	.bitmaps = missed_callBitmaps,
	.width_pixels = 30,
	.width_bytes = 4,
	.height_pixels = 30
};