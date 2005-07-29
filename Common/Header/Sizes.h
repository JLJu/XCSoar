#if !defined(AFX_SIZES_H__695AAC30_F401_4CFF_9BD9_FE62A2A2D0D2__INCLUDED_)
#define AFX_SIZES_H__695AAC30_F401_4CFF_9BD9_FE62A2A2D0D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WAY_POINT_ID_SIZE 20

#define MENU_HEIGHT 26

#define NUMINFOWINDOWS 8

#define REGKEYSIZE 64

#define POLARSIZE 3

#define DESCRIPTION_SIZE 30
#define TITLE_SIZE 30
#define FORMAT_SIZE 20
#define MAXTASKPOINTS 10
#define MAXAATASKPOINTS 5

#define MAX_LOADSTRING 100

#define TRAILSIZE 1000
// 1000 points at 3.6 seconds average = one hour
#define TRAILSHRINK 5
// short trail is 10 minutes approx

// ratio of height of screen to main font height
#define FONTHEIGHTRATIO 9
// ratio of width of screen to main font width
#define FONTWIDTHRATIO 22

// ratio of title font height to main font height
#define TITLEFONTHEIGHTRATIO 2.3
// ratio of title font width to main font width
#define TITLEFONTWIDTHRATIO 1.8

#define CDIFONTHEIGHTRATIO 0.6
#define CDIFONTWIDTHRATIO 0.75

#define MAPFONTHEIGHTRATIO 0.39
#define MAPFONTWIDTHRATIO 0.39

#define CONTROLHEIGHTRATIO 7.4
#define TITLEHEIGHTRATIO 3.1

#define MENUBUTTONWIDTHRATIO 0.6


//////////////

// size of terrain cache
#define MAXTERRAINCACHE 8000

// stepsize of pixel grid, should be multiple of 2
#define DTQUANT 6

// ratio of smoothed bitmap size to pixel grid
#define OVS 2

// number of radials to do range footprint calculation on
#define NUMTERRAINSWEEPS 20

// number of points along final glide to scan for terrain
#define NUMFINALGLIDETERRAIN 30

// ratio of border size to trigger shape cache reload
#define BORDERFACTOR 0.9

// maximum number of topologies
#define MAXTOPOLOGY 20

// timeout in quarter seconds of infobox focus
#define FOCUSTIMEOUTMAX 24*4

// timeout in quarter seconds of menu button
#define MENUTIMEOUTMAX 8*4

// timeout of display/battery mode in quarter seconds
#define DISPLAYTIMEOUTMAX 60*4

///////////////////////

#define NUMAIRSPACECOLORS 16
#define NUMAIRSPACEBRUSHES 3

#endif
