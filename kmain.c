    #include "drivers/frame_buffer.h"
    #include "drivers/serial_port.h"

    void kmain()
    {
       char arr[] = "Welcome to HSMINIOS ! Have a nice day !";
       fb_write(arr, 40);
       serial_configure(SERIAL_COM1_BASE, Baud_115200);
       serial_write(SERIAL_COM1_BASE, arr, 40);

       //serial_write(0x3F8, arr, 4);
       

       // fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);
       //fb_move_cursor(00);
    }
