#include "projectname/hello_world/hello_world.h"

#include <avr/io.h>

#define BAUD_rate 19200

static void
uart_transmit(const char* string) {
    while (*string != '\0') {
        while (!((UCSR0A >> UDRE0) & 1)) {}
        UDR0 = *string;
        string++;
    }
}

void
print_hello_world(void) {
    UCSR0B |= (1 << RXEN0) | (1 << TXEN0);
    UCSR0C |= (1 << UCSZ00) | (1 << UCSZ01);
    UBRR0 = F_CPU / BAUD_rate / 16 - 1;

    uart_transmit("Hello world.\n");
}
