#pragma once

#define ERRNO_PIN PIN_PA17

#define ERRNO_SPI_INIT 2
#define ERRNO_SPI_NOT_READY 3
#define ERRNO_SPI_SELECT_UNSUPPORTED 4
#define ERRNO_SPI_SELECT_BUSY 5
#define ERRNO_SPI_WRITE_ABORTED 6
#define ERRNO_SPI_WRITE_INVALID_ARG 7
#define ERRNO_SPI_WRITE_TIMEOUT 8

void error(uint8_t errno);
