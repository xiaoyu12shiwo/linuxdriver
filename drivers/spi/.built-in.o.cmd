cmd_drivers/spi/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/spi/built-in.o drivers/spi/spi.o drivers/spi/spidev.o drivers/spi/spi-bitbang.o drivers/spi/spi-davinci.o 
