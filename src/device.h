/*
    net.h -- generic header for device.c
    Copyright (C) 2001 Ivo Timmermans <zarq@iname.com>
                  2001 Guus Sliepen <guus@sliepen.warande.net>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    $Id: device.h,v 1.1.2.2 2001/10/27 12:13:17 guus Exp $
*/

#ifndef __TINC_DEVICE_H__
#define __TINC_DEVICE_H__

extern int device_fd;

extern int setup_device(void);
extern void close_device(void);
extern vpn_packet_t *read_packet(void);
extern int write_packet(vpn_packet_t *);
extern void dump_device_stats(void);

#endif /* __TINC_DEVICE_H__ */