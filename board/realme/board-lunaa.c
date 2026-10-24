// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2026 Ryo "evilMyQueen" Yamada <evilMyQueen@mainlining.org>
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info lunaa_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 1080,
	.height = 2400,
	.stride = 4,
	.scale = 2,
	.address = (void *)0xe1000000
};

static const struct device lunaa_devices[] = {
	{ "simplefb", &lunaa_fb, "fb" },
};

struct board_data board_ops = {
	.name = "realme-lunaa",
	.ops = {
	},
	.devices = lunaa_devices,
	.num_devices = ARRAY_SIZE(lunaa_devices),
	.quirks = 0
};
