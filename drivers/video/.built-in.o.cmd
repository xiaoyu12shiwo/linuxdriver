cmd_drivers/video/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/video/built-in.o drivers/video/fb_notify.o drivers/video/console/built-in.o drivers/video/backlight/built-in.o drivers/video/omap2/built-in.o 
