// step 122 13.05

#include "init.h"

#include "fileio.h"
#include "input.h"
#include "output.h"
#include "output.h"

int main(int argc, char *argv[]) {
    initEditor();

    if (argc >= 2) {
        editorOpen(argv[1]);
    }

    editorSetStatusMessage("HELP: Ctrl-S = save | Ctrl-Q = quit | Ctrl-F = find");

    while (1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }

    return 0;
}
