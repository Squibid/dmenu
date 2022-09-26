/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const int inputwd       = 10;        /* lower number = smaller input area */
static const char *fonts[] = { "monospace:size=11:antialiasing=true" };
static const char col_1[]       = "#222222";
static const char col_2[]       = "#bbbbbb";
static const char col_3[]       = "#eeeeee";
static const char col_4[]       = "#964834";
static const char col_5[]       = "#000000";
static const char col_6[]       = "#00ffff";
static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { col_2,     col_1 },
	[SchemeSel] = {  col_3,     col_4 },
	[SchemeOut] = {  col_5,     col_6 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
