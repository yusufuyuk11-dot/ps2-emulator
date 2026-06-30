#include <kernel.h>
#include <debug.h>

int main(int argc, char *argv[]) {
    init_scr();
    scr_printf("\n\n--- PS2 EMULATOR INITIALIZING ---\n");
    scr_printf("Yusuf, ilk PS2 ELF dosyan basariyla derlendi!\n");
    
    while(1) {
        // İleride VS Code yapay zekasına yazdıracağımız 
        // emülatör işlemci döngüsü buraya gelecek
    }
    return 0;
}
