/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar 	   = 1; 		     /* -b  option; if 0, dmenu appears at bottom */
static const char *fonts[] = { "monospace:size=9" }; /* -fn option overrides fonts[0] */
static const char *prompt  = NULL; 		     /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*		 fg         bg       */
	[SchemeNorm] = { "#a89984", "#282828" },
	[SchemeSel]  = { "#ebdbb2", "#458588" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
