# This is the main binary. List your C files here.
add_executable(delay
    delay.c
    )

add_executable(sleep
    sleep.c
    )

add_executable(timer
    timer.c
    )

add_executable(interrupt
    gpio_interrupt.c
    )

pico_set_program_name(delay "delay")
pico_set_program_version(delay "0.1")

pico_set_program_name(sleep "sleep")
pico_set_program_version(sleep "0.1")

pico_set_program_name(timer "timer")
pico_set_program_version(timer "0.1")

pico_set_program_name(interrupt "interrupt")
pico_set_program_version(interrupt "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(delay 0)
pico_enable_stdio_usb(delay 1)

pico_enable_stdio_uart(sleep 0)
pico_enable_stdio_usb(sleep 1)

pico_enable_stdio_uart(timer 0)
pico_enable_stdio_usb(timer 1)

pico_enable_stdio_uart(interrupt 0)
pico_enable_stdio_usb(interrupt 1)

# Add the libraries to the build
target_link_libraries(delay PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

target_link_libraries(sleep PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

target_link_libraries(timer PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

target_link_libraries(interrupt PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(delay PRIVATE
        pico_cyw43_arch_none
    )
    target_link_libraries(sleep PRIVATE
        pico_cyw43_arch_none
    )
    target_link_libraries(timer PRIVATE
        pico_cyw43_arch_none
    )
    target_link_libraries(interrupt PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(delay)
pico_add_extra_outputs(sleep)
pico_add_extra_outputs(timer)
pico_add_extra_outputs(interrupt)

add_custom_target(flash1 picotool load -f $<TARGET_FILE:delay> DEPENDS delay)
add_custom_target(flash2 picotool load -f $<TARGET_FILE:sleep> DEPENDS sleep)
add_custom_target(flash3 picotool load -f $<TARGET_FILE:timer> DEPENDS timer)
add_custom_target(flash4 picotool load -f $<TARGET_FILE:interrupt> DEPENDS interrupt)
