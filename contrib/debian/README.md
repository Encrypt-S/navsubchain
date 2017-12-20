
Debian
====================
This directory contains files used to package subchaind/subchain-qt
for Debian-based Linux systems. If you compile subchaind/subchain-qt yourself, there are some useful files here.

## subchain: URI support ##


subchain-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install subchain-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your subchain-qt binary to `/usr/bin`
and the `../../share/pixmaps/subchain128.png` to `/usr/share/pixmaps`

subchain-qt.protocol (KDE)

