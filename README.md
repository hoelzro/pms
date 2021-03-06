# PMS
## Practical Music Search
Practical Music Search is an ncurses-based client for
[MPD](http://mpd.wikia.com/wiki/Music_Player_Daemon_Wiki). It has a command line
interface much like [Vim](http://www.vim.org), and supports custom colors,
layouts, and key bindings. [PMS](https://github.com/ambientsound/pms) aims to
be accessible and highly configurable.

### Compiling
    $ cmake . && make

### Dependencies
You need to have [MPD](http://mpd.wikia.com/wiki/Music_Player_Daemon_Wiki)
installed and working before using [PMS](https://github.com/ambientsound/pms),
but not neccessarily on the same machine.

This client requires 
[MPD](http://mpd.wikia.com/wiki/Music_Player_Daemon_Wiki) >= 0.15.0.

[PMS](https://github.com/ambientsound/pms) depends on ncurses >= 5.0 to build.

### Configuration
Your configuration file is ~/.config/pms/pms.conf. A system-wide config
file can be put in /etc/xdg/pms/pms.conf.

Start PMS and type
    :set
for a list of options available, or type
    :set color
for a list of color options.

#### Setting options
Options can be set with
    set option=value
    set option+=value
    set option-=value
Boolean options can be set, inverted or unset with
    set option
    set nooption
    set invoption
    set option!
Option values can be queried with
    set option?

#### Changing colors
Background colors are black, red, green, brown, blue, magenta, cyan and gray.
Foreground colors are as background colors, in addition to 
brightred, brightgreen, yellow, brightblue, brightmagenta, brightcyan, white.

Set colors with
    set color.name=foreground [background]

### Copying
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

See the COPYING file for more information.

### Authors
Written by [Kim Tore Jensen](http://www.incendio.no). Copyright (c) 2006-2011.

A big thanks to contributors [Bart Nagel](https://github.com/tremby)
and [Murilo Pereira](https://github.com/mpereira).
