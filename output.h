#include "abuf.h"

void editorDrawRows(struct abuf *ab);
void editorRefreshScreen(void);
void editorDrawStatusBar(struct abuf *ab);
void editorScroll(void);
void editorSetStatusMessage(const char *fmt, ...);
